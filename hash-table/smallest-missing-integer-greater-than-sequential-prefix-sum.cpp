class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        int sum = nums[0];
        for(int i = 1;i < n;i++) {
            if(nums[i] == nums[i - 1] + 1) {
                sum += nums[i];
            }
            else{
                break;
            }
        }
        for(int i = 0;i < n;i++) {
            if(sum == nums[i]) {
                sum++;
                cnt++;
            }
        }
        if(cnt != 0) {
            return sum + 1;
        }else{
            return sum;
        }
       
    }
};