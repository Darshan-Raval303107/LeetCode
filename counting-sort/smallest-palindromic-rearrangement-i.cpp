class Solution {
public:
    string smallestPalindrome(string s) {
        int n = s.length();
        if(n == 1){
            return s;
        }
        // sort(s.begin(),s.end());
        string nst1 = "";
        string nst2 = "";
        for(int i  = 0;i < n/2;i++) {
            nst1 += s[i];
        }
        nst2 = nst1;
        reverse(nst2.begin(),nst2.end());

        return nst1 + nst2;
    }
};