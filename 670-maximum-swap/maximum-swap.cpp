class Solution {
public:
       int maximumSwap(int num) {
    string s=to_string(num);
  for(int i = 0; i < s.length(); i++) {
    int maxnumber = i;

    for(int j = i + 1; j < s.length(); j++) {
        if(s[j] >= s[maxnumber]) {
            maxnumber = j;
        }
    }
    if(s[maxnumber]>s[i]) {
        swap(s[i], s[maxnumber]);
        break;
    }
}
    return stoi(s);

        
}
};