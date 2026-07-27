class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();

        for(int i = 0;i < n;i++) {
            if(nums[i] < -1) {
                nums[i] *= (-1);
            }
        }
        sort(nums.begin(),nums.end());

        return (nums[n - 1] * nums[n - 2] * nums[n - 3]);
    }
};