class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n = nums.size();
        vector<int>arr1,arr2;

        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);

        int m = arr1.back();
        int k = arr2.back();

        for(int i = 2;i < n;i++) {
            if(m > k) {
                arr1.push_back(nums[i]);
                m = nums[i];
            }else{
                arr2.push_back(nums[i]);
                k = nums[i];
            }
        }

       arr1.insert(arr1.end(), arr2.begin(), arr2.end());

        return arr1;
    }
};