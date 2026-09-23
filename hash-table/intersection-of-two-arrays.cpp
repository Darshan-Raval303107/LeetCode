class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(),m = nums2.size();

        vector<int> nums3,nums4;

        unordered_map<int,int>mpp;

        for(int i = 0;i < n;i++) {
            mpp[nums1[i]]++;
        }

        for(auto& x:nums2) {
            if(mpp.find(x) != mpp.end()) {
                nums3.push_back(x);
            }
        }
        unordered_map<int,int>mppp;

        for(auto& x:nums3) {
            mppp[x]++;
        }
        for(auto& it:mppp) {
            nums4.push_back(it.first);
        }
        return nums4;
    }
};