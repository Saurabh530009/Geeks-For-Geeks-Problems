// Proble Link
// https://practice.geeksforgeeks.org/problems/de6f6a196aecdfb3e4939ba7729809a5a4bdfe90/1

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        vector<Node*>ans;
        vector<int>str(26,0),a(26,0);
        for(auto i:s){
            str[i-'a']++;
        }
        
        int n=s.length(),count=0;
        Node *prev=head;
        Node *front=head;
        
        while(front){
            count++;
            a[front->data-'a']++;
            if(count>=n){
                if(a==str){
                    Node *temp=front->next;
                    front->next=NULL;
                    ans.push_back(prev);
                    front=temp;
                    prev=temp;
                    count=0;
                    for(int i=0;i<26;i++)
                    a[i]=0;
                }
                else{
                    a[prev->data-'a']--;
                    prev=prev->next;
                    front=front->next;
                    count--;
                }
            }
            else
            front=front->next;
        }
        return ans;
    }
};