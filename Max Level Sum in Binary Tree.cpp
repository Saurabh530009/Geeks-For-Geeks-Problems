// problem link:
// https://practice.geeksforgeeks.org/problems/4b7ff87c26ed23b3f63c25c611690213d44fb6aa/1

class Solution{
    public:
    /*You are required to complete below method */
    void solve(Node *root,unordered_map<int,int>&mp,int l){
        if(!root)
        return;
        mp[l]+=root->data;
        solve(root->left,mp,l+1);
        solve(root->right,mp,l+1);
    }
    int maxLevelSum(Node* root) {
        unordered_map<int,int>mp;
        solve(root,mp,0);
        int ans=INT_MIN;
        for(auto i:mp){
            ans=max(ans,i.second);
        }
        return ans;
    }
};