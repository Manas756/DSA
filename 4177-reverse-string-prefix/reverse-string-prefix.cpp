class Solution {
public:
      string reversePrefix(string s, int k) {
            int x=0;
            int y=k-1;
            if(k==1){
                return s;
            }
            while(x<y){
               
                swap(s[x],s[y]);
                x++;
                y--;
            }
            return s;
    }
};