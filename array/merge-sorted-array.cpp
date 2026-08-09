class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> result;

        if (m > 0) {
            int k = nums1[0];
            result.push_back(nums1[0]);

            for (int i = 1; i < m; i++) {
                if (k == nums1[i]) continue;
                result.push_back(nums1[i]);
                k = nums1[i];
            }
        }

        if (n > 0) {
            int k = nums2[0];
            result.push_back(nums2[0]);

            for (int i = 1; i < n; i++) {
                if (k == nums2[i]) continue;
                result.push_back(nums2[i]);  
                k = nums2[i];
            }
        }

        sort(result.begin(), result.end());

        for (int i = 0; i < result.size(); i++) {
            nums1[i] = result[i];
        }
    }
};