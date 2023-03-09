// Problem Link
// https://practice.geeksforgeeks.org/problems/d54c71dc974b7db3a200eb63f34e3d1cba955d86/1

class Solution {
  public:
    long long maxTripletProduct(long long arr[], int n){
    	sort(arr,arr+n);
    	long long ans=-1e16;
    	for(int i=0;i<n;i++){
    	    ans=max(ans,arr[i]*arr[(i+1)%n]*arr[(i+2)%n]);
    	}
    	return ans;
    }
};