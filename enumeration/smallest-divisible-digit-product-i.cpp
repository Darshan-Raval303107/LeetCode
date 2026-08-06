class Solution {
public:
    int smallestNumber(int n, int t) {
        while(true) {
            int product = 1;
            int r = n;
            while(r > 0) {
                product *= (r%10);
                r /= 10;
            }
            if(product % t == 0) {
                return n;
            }
            n++;
        }
    }
};