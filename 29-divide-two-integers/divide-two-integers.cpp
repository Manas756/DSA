class Solution {
public:
    int divide(int dividend, int divisor) {
        long long a=abs((long long)dividend);
long long b=abs((long long)divisor);
bool neg=(dividend<0)^(divisor<0);
        if(b==0) return 0;
        long long ans=0;
        while(b<=a){
            long long shift=0;
            while((b<<(shift+1))<=a){
                shift++;
           
        } 
        a-=(b<<shift);
                ans+=(1<<shift);
        }
if(neg){
    return ans=-ans;
}
if(dividend==INT_MIN && divisor==-1){
    return INT_MAX;
}

        return ans;
        
    }
};