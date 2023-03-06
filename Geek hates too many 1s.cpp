// problem Link
// https://practice.geeksforgeeks.org/problems/07e45fe40846bc670ad2507d2c649304699768b9/1

class Solution {
    public:
    int noConseBits(int n) {
        int bits[32];
        for(int i=0;i<32;i++){
            bits[i]=0;
            if(n&(1<<i))
            bits[i]=1;
        }
        
        // for(int i=0;i<32;i++)
        // cout<<i<<' '<<bits[i]<<endl;
        int count=0;
        int ans=0;
        for(int i=31;i>=0;i--){
            if(bits[i]==1){
                count++;
                if(count==3){
                    bits[i]=0;
                    count=0;
                }
            }
            else{
                count=0;
            }
            if(bits[i]==1){
                ans=ans+(1<<i);
            }
            // cout<<i<<' '<<bits[i]<<' '<<count<<endl;
        }
        // for(int i=0;i<32;i++)
        // cout<<i<<' '<<bits[i]<<endl;
        return ans;
    }
};