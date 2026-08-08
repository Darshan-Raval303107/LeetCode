class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n = nums.size();
        bool monotone = true;
        int i = 0,j = 1;

        if(nums[i] <= nums[j]) {
            j++;
            for(i = 1;i < n;i++) {
                if(j == n) break;
                if(nums[i] > nums[j]) {
                    monotone = false;
                    break;
                }
                j++;
            }
        }else{
            j++;
            for(i = 1;i < n;i++) {
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