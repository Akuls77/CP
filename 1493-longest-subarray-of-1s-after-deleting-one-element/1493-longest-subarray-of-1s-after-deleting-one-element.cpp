class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int ans =0, cnt=0;
        int i=0, j=0; //window [i....j]
        while(j<n){
            if(nums[j]==0){
                cnt++;
            }
            while(cnt>1){
                if(nums[i]==0){
                    cnt--;
                }
                i++;
            }
            ans=max(ans,j-i);
            j++;
        }
        return ans;
    }
};