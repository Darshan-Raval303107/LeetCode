class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> maxi, mini;

        int cnt = -1;

        for (int i = 0; i < n - 1; i++) {
            if (nums[i + 1] < nums[i]) {
                cnt = i;
                break;
            }
        }

        if (cnt == -1) {
            maxi = nums;  
        } else {
            for (int i = 0; i <= cnt; i++) {
                maxi.push_back(nums[i]);
            }
            for (int i = cnt + 1; i < n; i++) {
                mini.push_back(nums[i]);
            }
        }

        int l = 0, r = maxi.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (maxi[mid] == target) return mid;

            if (maxi[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }

        l = 0;
        r = mini.size() - 1;
        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (mini[mid] == target) return cnt + 1 + mid;

            if (mini[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }

        return -1;
    }
};