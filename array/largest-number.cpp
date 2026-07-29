class Solution {
public:
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        string s = "";

        for(int i = 0;i < n;i++) {
            string nst = to_string(nums[i]);
            s += nst;
        }

        sort(s.begin(),s.end());

        reverse(s.begin(),s.end());

        return s;
    }
};