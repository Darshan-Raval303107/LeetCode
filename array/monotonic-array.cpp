class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool monotone = true;
        int i = 0,j = n - 1;

        if(nums[i] < nums[j]) {
            j = 1;
            for(i = 0;i < n;i++) {
                if(j == n) break;
                if(nums[i] > nums[j]) {
                    monotone = false;
                    break;
                }
                j++;
            }
        }else{
            j = 1;
            for(i = 0;i < n;i++) {
                if(j == n) break;
                if(nums[i] < nums[j]) {
                    monotone = false;
                    break;
                }
                j++;
            }
        }

        

        return monotone;
    }
};