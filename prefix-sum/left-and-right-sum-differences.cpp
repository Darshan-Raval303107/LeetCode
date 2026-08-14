class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int n = nums.size();
        vector<int>leftsum(n),rightsum(n),answer(n);
        leftsum.push_back(0);
        for(int i = 1;i < n;i++) {
            int sum = 0;
            for(int j = 0;j < i;j++) {
                sum += nums[j];
            }
            leftsum[i] = sum;
        }
        for(int i = 0;i < n - 1;i++) {
            int sum = 0;
            for(int j = i + 1;j < n;j++) {
                sum += nums[j];
            }
            rightsum[i] = sum;
        }
        rightsum.push_back(0);

        for(int i = 0;i < n;i++) {
            answer[i] = abs(leftsum[i] - rightsum[i]);
        }

        return answer;
    }
};