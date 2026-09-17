class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int cnt = -1;
        for(int i = nums.size() - 2;i >= 0;i--) {
            if(nums[i] < nums[i + 1]) {
                cnt = i;
                break;
            }
        }
        if(cnt != -1) {
            for(int i = nums.size() - 1; i > cnt; i--) {
                if(nums[i] > nums[cnt]) {
                    swap(nums[i], nums[cnt]);
                    break;
                }
            }
        }
        reverse(nums.begin() + cnt + 1,nums.end());
    }
};