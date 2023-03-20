// Problem Link:
// https://practice.geeksforgeeks.org/problems/7366ce450d84b55391fc787a681c4d60de359e72/1

bool isSafe(int x, int y, int n, int m, vector<vector<char>> &arr){
    if (x < 0 || y < 0 || x >= n || y >= m || arr[x][y] == 'Z')
        return 0;
    return 1;
}
int shortestXYDist(vector<vector<char>> arr, int n, int m){
    queue<pair<int, int>> q;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] == 'X'){
                q.push({i, j});
                arr[i][j] = 'Z';
            }
        }
    }
    int d = 0;
    while (!q.empty()){
        d++;
        int k = q.size();
        for (int i = 0; i < k; i++){
            auto p = q.front();
            q.pop();
            int x = p.first;
            int y = p.second;

            if (isSafe(x + 1, y, n, m, arr)){
                if (arr[x + 1][y] == 'Y')
                    return d;
                arr[x + 1][y] = 'Z';
                q.push({x + 1, y});
            }
            if (isSafe(x - 1, y, n, m, arr)){
                if (arr[x - 1][y] == 'Y')
                    return d;
                arr[x - 1][y] = 'Z';
                q.push({x - 1, y});
            }

            if (isSafe(x, y + 1, n, m, arr)){
                if (arr[x][y + 1] == 'Y')
                    return d;
                arr[x][y + 1] = 'Z';
                q.push({x, y + 1});
            }
            if (isSafe(x, y - 1, n, m, arr)){
                if (arr[x][y - 1] == 'Y')
                    return d;
                arr[x][y - 1] = 'Z';
                q.push({x, y - 1});
            }
        }
    }
    return -1;
}