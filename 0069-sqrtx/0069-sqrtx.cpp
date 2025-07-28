class Solution {
public:
    int mySqrt(int x) {
        int ans =1;
        if(x==0) return 0;
        int low =1, high = x;
        while(low<=high){
            int mid = (low+high)/2;
            if(mid*mid <= x){
                low = mid+1;
                ans = mid;
            }
            else{
                high = mid-1;
            }
        }
        return ans;
    }
};