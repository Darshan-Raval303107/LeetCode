class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mpp;

        for (auto x : nums) {
            mpp[x]++;
        }

        vector<int> out;

        for (auto& it : mpp) {
            if (it.second > n / 3) {
                out.push_back(it.first);
            }
        }

        return out;
    }
};