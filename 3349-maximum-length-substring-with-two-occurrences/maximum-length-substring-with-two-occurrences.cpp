class Solution {
public:
      int maximumLengthSubstring(string s) {
        int maxlength=0;
        for(int i=0;i<s.length();i++){
        vector<int> freq(26,0);
            for(int f=i;f<s.length();f++){
                freq[s[f]-'a']++;
                if(freq[s[f]-'a']>2){
                    break;
                }
                maxlength=max(maxlength,f-i+1);
        }
    }
    return maxlength;
}
};