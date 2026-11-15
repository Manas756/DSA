class Solution {
public:
 int numOfSubarrays(vector<int>& arr) {
   int n = arr.size();
    int odd = 0, even = 1, ans = 0, sum = 0;
    int prefix=0;
    for(int x:arr){
        prefix+=x;
        if(prefix%2==0){
            ans+=odd;
            even++;
        }
        else{
            ans+=even;
            odd++;
        }
        ans%=1000000007;
    }

        return ans;
    }
};