class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;

        for(int i = 0;i < n;i++) {
            if(nums[i] < 0) {
                cnt++;
            }
        }

        if(cnt == n) {
            return (nums[n - 1] * nums[n - 2] * nums[n - 3]);
        }else{
            for(int i = 0;i < n;i++) {
                if(nums[i] < 0) {
                    nums[i] *= (-1);
                }
                sort(nums.begin(),nums.end());
            }
        }
        return (nums[n - 1] * nums[n - 2] * nums[n - 3]);
    }
};