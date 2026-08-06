class Solution {
public:
    int smallestNumber(int n, int t) {
        int product = 1;

        while(true) {
            int r = n;
            while(r > 0) {
                product *= r%10;
                r /= 10;
            }
            if(product % t == 0) {
                return n;
            }
            n++;
        }
    }
};