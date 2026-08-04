class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>v;
        sort(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        int maxi = *max_element(nums.begin(),nums.end());
        int left = 0;

        for(int i = mini;i <= maxi;i++) {
            if(nums[left] == i) {
                left++;
                continue;
            }
            v.push_back(i);
        }
        return v;
    }
};