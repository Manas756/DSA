class Solution {
    set<string> ans;
public:
void dfs(string s){
    int r=s.find('}');
    if(r==string::npos){
        ans.insert(s);
        return;

    }
    //finding matching {
    int l=s.rfind('{',r);
    string left=s.substr(0,l);
    string right=s.substr(r+1);

    // lets check what is inside 
    string inside=s.substr(l+1,r-l-1);
    string part;
    stringstream ss(inside);
    while(getline(ss,part,',')){
        dfs(left+part+right);
    }
}


    vector<string> braceExpansionII(string expression) {
        dfs(expression);
        return vector<string>(ans.begin(),ans.end());
    }
};