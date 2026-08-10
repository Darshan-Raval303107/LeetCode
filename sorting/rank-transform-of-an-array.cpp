class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int>temp = arr;

        sort(temp.begin(),temp.end());

        unordered_map<int,int>mpp;
        int cnt = 0;

        for(auto& num:temp) {
            if(mpp.find(num) == mpp.end()) {
                mpp[num] = ++cnt;
            }
        }

        for (int i = 0; i < arr.size(); i++) {
            arr[i] = mpp[arr[i]];
        }

        return arr;
    }
};