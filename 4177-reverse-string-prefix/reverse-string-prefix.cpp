class Solution {
public:
      string reversePrefix(string s, int k) {
            int x=0;
            int y=k-1;
            while(x<y){
               
                swap(s[x],s[y]);
                x++;
                y--;
            }
            return s;
    }
};