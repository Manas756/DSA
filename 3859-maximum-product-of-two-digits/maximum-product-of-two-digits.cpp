class Solution {
public:
    int maxProduct(int n) {
    if (n < 0) {
        n = -n;
    }

    vector<int> digits;
    while(n!=0){
        digits.push_back(n%10);
        n=n/10;
    }

    if (digits.size() < 2) {
        return 0;
    }

    int max = digits[0] * digits[1];
    for(int i=0;i<digits.size();i++){
        for(int j=i+1;j<digits.size();j++ ){
            int product=digits[i]*digits[j];
            if(product>max){
                max=product;
            }
        }
    }
  return max;
    }
};