class Solution {
public:   // TC -> O(N)
    bool check(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;  
        for(int i=0; i<=n-1; i++){
            if(nums[i] > nums[(i+1)%n] ){       //the % n wraps around to the first element
                cnt++;
            }
        }
        if(cnt>1){
            return false;
        }
        return true;
    }
};


// If count == 0 → Sorted but not rotated
// If count == 1 → Sorted and rotated
// If count > 1 → Not sorted and rotated