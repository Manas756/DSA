class Solution {
public:
    bool isValid(string s) {
        if(s.size()%2==1) return false;

        stack<char> st;

        for(auto ch:s){
            if(ch=='{'||ch=='[' || ch=='(') st.push(ch);

            else {
                if(st.empty()){ return false;
                }
            char top=st.top();
            st.pop();
            if(ch==')' && top!='(') return false;
            if(ch=='}' && top!='{') return false;
            if(ch==']' && top!='[') return false;
            }
        }
        return st.empty();
        
    }
};