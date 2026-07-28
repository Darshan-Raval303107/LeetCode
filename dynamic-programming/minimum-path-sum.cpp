class Solution {
public:
    int solve(vector<vector<int>>& grid, int i, int j, int m, int n, int val) {
        if (i >= m || j >= n)
            return INT_MAX;

        val += grid[i][j];

        if (i == m - 1 && j == n - 1) {
            return val;
        }

        int right = solve(grid, i + 1, j, m, n, val);
        int down  = solve(grid, i, j + 1, m, n, val);

        return min(right, down);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        return solve(grid, 0, 0, m, n, 0);
    }
};