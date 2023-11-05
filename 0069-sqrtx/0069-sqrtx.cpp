class Solution {
public:
long long int bs(int x){
     int s=1;
        int e=x;
        long long int ans=0;
        int mid=s+(e-s)/2;

        while(s<=e){
            //int sq=mid*mid;
            //if(x>INT_MAX || x<INT_MIN) return 0;
            if(mid==x/mid)
             return mid;
            else if(mid<x/mid)
             {
                 s=mid+1;
                 ans=mid;
             }
             else if(mid>x/mid)
              {
                  e=mid-1;    
              }
            mid=s+(e-s)/2;
        }
        return ans;
}
    int mySqrt(int x) {
        if(x==0)return 0;
       return bs(x);
    }
};