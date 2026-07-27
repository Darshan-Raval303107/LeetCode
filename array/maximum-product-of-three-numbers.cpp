class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();

        return (nums[n - 1] * nums[n - 2] * nums[n - 3]);
    }
};