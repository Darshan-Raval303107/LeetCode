class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int maxcnt = INT_MIN;
        for(int i = 0;i < n;i++) {
            if(nums[i] == 1) {
                cnt++;
            }else{
                cnt = 0;
            }
            maxcnt = max(maxcnt,cnt);
        }
        return maxcnt;
    }
};