class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();

        map<int,int>mpp;

        for(auto i:nums) {
            mpp[i]++;
        }
        int maxfr = 0;
        int ans = -1;

        for(auto& it:mpp) {
            if(it.second > maxfr) {
                maxfr = it.second;
                ans = it.first;
            }
        }
        return ans;
    }
};