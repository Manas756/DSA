class Solution {
public:
    int minimumPushes(string word) {
        int n=word.length();
        int r=0;
        for(int i=0;i<n;i++){
            r=r+(i/8+1);
        }
        return r;
        
    }
};