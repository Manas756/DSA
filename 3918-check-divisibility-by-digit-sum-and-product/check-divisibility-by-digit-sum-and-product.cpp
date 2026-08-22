class Solution {
public:
    bool checkDivisibility(int n) {
        // the sum of digits are 
        int sum=0;
        int  pro=1;
        int temp=n;
        while(n!=0){
            int digit=n%10;
            sum+=digit;
            pro*=digit;
            n =n/10;
        }
        


        if(temp%(sum+pro)==0){
            return true;
        }
        return false;
        
    }
};