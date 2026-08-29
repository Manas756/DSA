class Solution {
public:
    vector<int> lexicographicallySmallestArray(vector<int>& nums, int limit) {

        int n= nums.size();
// making value and index pairs
        vector<pair<int,int>> v;

        for(int i=0;i<n;i++){
            v.push_back({nums[i],i});
        }

    //sorting store values
    sort(v.begin(),v.end());

    //making groups

    int j=0;

    while(j<n){
        int z=j;
        while(z+1<n && v[z+1].first-v[z].first<=limit){
            z++;
        }
        //value and indices
        vector<int> val;
        vector<int> ind;
        for(int x=j;x<=z;x++){
            val.push_back(v[x].first);
             ind.push_back(v[x].second);
        }
        sort(ind.begin(),ind.end());

    for(int x=0;x<val.size();x++){
        nums[ind[x]]=val[x];
    }
    j=z+1;
    }
    return nums;
        
    }
};