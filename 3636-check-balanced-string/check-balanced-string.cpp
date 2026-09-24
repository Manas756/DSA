class Solution {
public:
    bool isBalanced(string s) {
        int evensum=0;
        int oddsum=0;
        for(int i=0;i<s.size();i++){
            if(i%2==0){
                evensum+=s[i]-'0';
            }
            else{
                oddsum+=s[i]-'0';
            }
        }
        return evensum==oddsum ? true : false;
    }
};