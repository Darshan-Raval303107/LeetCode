class Solution {
public:
    int maximumLengthSubstring(string s) {
        map<int,char>mpp;
        int left = 0,maxi = INT_MIN;
        for(int i = 0;i < s.length();i++) {
            mpp[s[i]]++;
            while(mpp[s[i]] > 2) {
                mpp[s[left]]--;
                left++;
            }
            maxi = max(maxi,i - left + 1);
        }
        return maxi;
    }
};