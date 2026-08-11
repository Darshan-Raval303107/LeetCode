class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0] + 1;
        set<int>s(nums.begin(),nums.end());
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
        for(int i = 0;;i++) {
            if(s.find(sum) == s.end()) {
                return sum;
            }
            sum++;
        }
       
    }
};