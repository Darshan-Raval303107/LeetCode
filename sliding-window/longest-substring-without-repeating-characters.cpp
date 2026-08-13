class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0,maxlen = 0;
        map<char,int>mp;

        for(int i = 0;i < s.length();i++) {
            mp[s[i]]++;

            while(mp[s[i]] > 1) {
                mp[s[left]]--;
                left++;
            }
            maxlen = max(maxlen,i - left + 1);
        }

        return maxlen;
    }
};