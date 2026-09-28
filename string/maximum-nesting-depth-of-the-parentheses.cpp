class Solution {
public:
    int maxDepth(string s) {
        stack<char> st;
        int maxDepth = 0;

        for(char c : s) {
            if(c == '(') {
                st.push(c);
                int stsize = st.size();
                maxDepth = max(maxDepth,stsize);
            }
            else {
                if(c == ')')
                    st.pop();
            }
        }

        return maxDepth;
    }
};