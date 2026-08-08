class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int count1=0,count2=0;
        
        for(int i=1;i<n;i++){
            if(nums[i]>=nums[i-1]){
                count1++;
            }
        }
        if(count1 == n - 1) return true;
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                count2++;
            }
        }
        if(count2==n-1){
            return true;
        }
        return false;
    }
};