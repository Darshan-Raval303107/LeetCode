class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int mini = *min_element(prices.begin(),prices.end());
        int cnt = 0;

        for(int i = 0;i < n;i++) {
            if(prices[i] == mini) {
                cnt = i;
            }
        }

        if(cnt == (n - 1)) {
            return 0;
        }

        int maxi = *max_element(prices.begin() + cnt,prices.end());

        return maxi - mini;

    }
};