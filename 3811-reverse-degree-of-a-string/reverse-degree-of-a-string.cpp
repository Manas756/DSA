class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++ ){
            int u = 'z'- s[i]+1;//taking the reverse number
            sum+=u*(i+1);//taking the sum of the charcter

        }
        return sum;
        
    }
};