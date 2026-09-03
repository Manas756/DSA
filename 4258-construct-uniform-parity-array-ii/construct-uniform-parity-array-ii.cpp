class Solution {
public:
    int minElement(vector<int> &array){
        int min = INT_MAX;
        for(int i : array) if(i < min) min = i;
        return min;
    }
    bool uniformArray(vector<int>& nums1) {
        int evenCount{};
        int minElem = minElement(nums1);
        for(int i : nums1) if(i%2==0) evenCount++;
        int oddCount = nums1.size() - evenCount;
        if(evenCount < oddCount){
            for(auto i : nums1) if(i%2 == 0){
                if(!((i - minElem) % 2 == 1)) return false;
            }
            return true;
        }
        else{
            for(auto i : nums1) if(i % 2 == 1){
                if(!((i - minElem) % 2 == 0)) return false; 
            }
            return true;
        }
        return false;
    }
};