class Solution {
public:
    string longestPalindrome(string s) {
        string ans;
        for(int i=0; i<s.size(); i++){
            for(int j=i; j<s.size(); j++){
                int m = i,n = j;
                bool flag = true;
                while(m < n) {
                    if(s[m] != s[n]) {
                        flag = false;
                        break;
                    }
                    m++;n--;
                }

                if(flag && j - i + 1 > ans.size()) {
                    ans = "";
                    ans  += s.substr(i,j - i + 1);
                }
            }

        }
        return ans;
    }
};