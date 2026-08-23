class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0,product = 1;
        int k = n;
        while(k > 0) {
            int r = k%10;
            sum += r;
            product *= r;
            k /= 10;
        }

        int newsum = sum + product;
        if(n % newsum == 0) {
            return true;
        }
        return false;
    }
};