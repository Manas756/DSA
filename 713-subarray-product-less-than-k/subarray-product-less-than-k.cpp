class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& arr, int k) {
            int count=0;
   for(int i=0;i<arr.size();i++){
    int porduct=1;
    for(int j=i;j<arr.size();j++){
        porduct*=arr[j];
        if(porduct<k){
            count++;
        }
        else{
            break;
        }

   }
}
return count;
    }
};