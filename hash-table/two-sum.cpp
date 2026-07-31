class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int j = 0;
        for(int i = 1; i < nums.size(); i++) {
            if(nums[i] + nums[j] == target){
                return {i,j};
            }
            else{
                j++;
            }
        }
        return {};
    }
};
