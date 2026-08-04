class Solution {
public:
     string largestEven(string s) {
    int n = s.size();
    if(s=="1"){
        return "";
    }
    for(int i=n-1;i>=0;i--){
        if(s[i]%2==0){
            return s;
        }else
        s.erase(i,1);
    }
    return s;
  }
};