class Solution {
public:
    string smallestPalindrome(string s) {
            vector<int> freq(26,0);
    for(char ch:s)
        freq[ch-'a']++;



        int oddcount=0;
        char middle='#';

        for(int i=0;i<26;i++){
            if(freq[i]%2==1){
                oddcount++;
                middle=char(i+'a');
            }
        }
       
        string left="";
        for(int i=0;i<26;i++){
            left+=string(freq[i]/2,char(i+'a'));
        }
        string right=left;
        reverse(right.begin(),right.end());

        if (middle !='#') {
            return left +middle+ right  ;
        }

        return left+right;
        
    }
};