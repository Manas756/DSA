class Solution {
public:
    int minimumPushes(string word) {
        int s=word.length();
        vector<int> frq(26,0);
        for(char ch : word )
        frq[ch-'a']++;

        sort(frq.begin(),frq.end(),greater<int>());

        int ans=0;
        for(int i=0;i<26;i++){
            if(frq[i]==0) break;
            ans+=frq[i]*(i/8+1);
        }
        return ans;

        
    }
};