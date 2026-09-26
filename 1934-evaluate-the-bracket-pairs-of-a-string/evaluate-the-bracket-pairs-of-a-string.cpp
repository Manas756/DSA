class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string> mp;
        for(auto& k:knowledge) mp[k[0]]=k[1];
        int end=s.size();

        while(true){
            int r=s.rfind(')',end-1);

            if(r==string::npos) break;
            int l=s.rfind('(',r);

           string inside=s.substr(l+1,r-l-1);
           if(mp.find(inside)==mp.end()){
            s.replace(l,r-l+1,"?");
           }
           else s.replace(l,r-l+1,mp[inside]);


            end=l;

        }
        return s;

        
    }
};