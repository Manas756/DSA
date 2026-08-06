class Solution {
public:
    int smallestNumber(int n, int t) {
    for(int i=n;i<n+10;i++){ 
        int pro=1;
        int temp=i;
        while(temp!=0){
        pro*=temp%10;
        temp=temp/10;
        }
        if(gcd(pro,t)==t)
           return i;
    }
    return 0;
    }
};