class Solution {
public:
int subarraySum(vector<int>& arr, int k) {
    unordered_map<int,int> mp;
    int prefixsum=0;
    int count=0;
    for(int i=0;i<arr.size();i++)
    {
        prefixsum+=arr[i];
        if(prefixsum==k)
        {
            count++;
        }
        if(mp.find(prefixsum-k)!=mp.end())
        {
            count+=mp[prefixsum-k];
        }
        mp[prefixsum]++;
    }

    
    return count;
}
};