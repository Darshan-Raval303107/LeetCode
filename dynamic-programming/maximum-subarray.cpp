class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) {
            return nums[0];
        }
        int sum = 0;
        int maxsum = INT_MIN;
        for(int i = 0;i < n;i++) {
            sum = max(nums[i],nums[i] + sum);
            maxsum = max(maxsum,sum);
        }
        return maxsum;
    }
};