// Problem Link :
// https:// practice.geeksforgeeks.org/problems/c670bf260ea9dce6c5910dedc165aa403f6e951d/1

vector<int> getDistinctDifference(int n, vector<int> &arr){
    unordered_map<int, int> left, right;
    int leftSize = 0, rightSize = 0;
    for (auto it : arr){
        if (++right[it] == 1)
            rightSize++;
    }

    vector<int> res;

    for (int i = 0; i < n; i++){
        if (--right[arr[i]] == 0)
            rightSize--;
        res.push_back(leftSize - rightSize);
        if (++left[arr[i]] == 1)
            leftSize++;
    }
    return res;
}