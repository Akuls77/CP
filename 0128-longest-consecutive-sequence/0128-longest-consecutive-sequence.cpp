class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        
        int longest = 1;
        int cnt = 0;
        int lastsmaller = INT_MIN;
        sort(nums.begin(), nums.end());
        if(n==0) return 0;
        for(int i=0; i<n; i++){
            if(nums[i]-1 == lastsmaller){
                cnt += 1;
                lastsmaller = nums[i];
            }
            else if(nums[i] != lastsmaller){
                cnt = 1;
                lastsmaller = nums[i];
            }
            longest = max(longest, cnt);
        }
        return longest;


        // int longest = 0;
        // unordered_set <int> st;
        // for(int i=0; i<n; i++){
        //     st.insert(nums[i]);
        // }
        // for(auto it: st){
        //     if(st.find(it-1) == st.end()){
        //         int cnt = 1;
        //         int x = it;
        //         while(st.find(x+1) != st.end()){
        //             x = x+1;
        //             cnt++;
        //         }
        //         longest = max(longest, cnt);
        //     }
        // }
        // return longest;
    }
};