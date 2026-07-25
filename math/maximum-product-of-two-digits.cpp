class Solution {
public:
    int maxProduct(int n) {
        int maximum = 0;
        vector<int>v;
        int k = n;

        while(k > 0) {
            v.push_back(k%10);
            k /= 10;
        } 

        for(int i = 0;i < v.size();i++) {
            for(int j = i  + 1;j < v.size();j++) {
                int ans = v[i] * v[j];
                maximum = max(maximum,ans);
            }
        }  

        return maximum;
    }
};