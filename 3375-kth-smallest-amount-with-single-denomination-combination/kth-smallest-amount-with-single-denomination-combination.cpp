class Solution {//using bit maskong 
public:
    long long lcm(long long a, long long b, long long limit) {
    long long g = __gcd(a, b);

    if (a / g > limit / b)
        return limit + 1;

    return (a / g) * b;
}

long long  divisble(long long n,vector<int>&coins){
    int m=coins.size();
    long long count=0;
    for(int mask=1;mask<(1<<m);mask++){
        long long multiples=1;
        long long bits=0;
        for(int i=0;i<m;i++){
            if(mask&(1<<i)){
                bits++;
                multiples=lcm(multiples,(long long)coins[i],n);
                if(multiples>n){
                    break;
                }
            }
        }
            
            if(multiples>n)
                continue;
                if(bits%2==1)
                count+=n/multiples;
                else
                 count-=n/multiples;
    }
    return count;

    
}


long long findKthSmallest(vector<int>& coins, int k) {
    long long start=1;
    long long end=1ll*(*min_element(coins.begin(),coins.end()))*k ;
    while(start<=end){
        long long mid=start+(end-start)/2;
        long long count=divisble(mid,coins);
        if(count<k){
            start=mid+1;
        }
        else{
            end=mid-1;
        }

    }
    return start;

    }

};