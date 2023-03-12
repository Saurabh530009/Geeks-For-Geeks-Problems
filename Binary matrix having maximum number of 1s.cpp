// Problem Link
// https://practice.geeksforgeeks.org/problems/77e1c3e12cd148f835d53eb168d4472b2ff539fa/1
//  Date 12/03/2023 gfg problem of the day

class Solution {
public:
    vector<int> findMaxRow(vector<vector<int>> arr, int n) {
        int i=0,j=n-1;
        int row=-1,col=-1;
        while(i<n && j>=0){
            if(arr[i][j]==1){
                row=i;
                col=j;
                j--;
            }
            else
            i++;
        }
        vector<int>ans;
        
        if(col>=0){
            ans.push_back(row);
            ans.push_back(n-col);
        }
        else{
            ans.push_back(0);
            ans.push_back(0);
        }
        return ans;
    }
};