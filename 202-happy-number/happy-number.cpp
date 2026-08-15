class Solution {
public:
int sumOfSquares(int n){
    int product=0;
     while(n>0){
        int digit=n%10;
        product+=digit*digit;
        n/=10;
       }
    return product;
    }
       bool isHappy(int n) {
        int slow=n;
        int fast=n;
        do{
            slow=sumOfSquares(slow);
            fast=sumOfSquares(sumOfSquares(fast));
        }while(slow!=fast);
        if(slow==1){
            return true;
        }
        else{
            return false;
    }
}

};