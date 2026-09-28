class Solution {
public:
    int maxDepth(string s) {
        int cnt = 0;
        int maxcnt = 0;

        for(auto& c:s) {
            if(c == '(') {
                cnt++;
                maxcnt = max(maxcnt,cnt);
            }else{
                if(c == ')') {
                    cnt--;
                }
                
            }
        }
        return maxcnt;
    }
};