class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        vector<int> arr(nums.size());
        long long ans = 0;

        for(int i = 0;i < nums.size() ;i++) {
            arr[i] = nums[i]*nums[i];
        }

        sort(arr.begin(),arr.end());

        for(int i = 0;i < (arr.size() / 2);i++) {
            ans -= arr[i];
        }
        for(int i = (arr.size()/2); i < arr.size();i++) {
            ans += arr[i];
        }

        return ans;
    }
};