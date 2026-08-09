class Solution {
public:
    int binary(int n) {
        int cnt = 0;
        while(n > 0) {
            n /= 2;
            cnt++;
        }

        return cnt;
    }
    int countMonobit(int n) {
        if(n == 1) return 2;
        return binary(n);
    }
};