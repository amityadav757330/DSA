class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxending = nums[0];
        int maxsum = nums[0];
        int minending = nums[0];
        int minsum = nums[0];
        int total = nums[0];
        for(int i = 1 ; i<nums.size();i++){
            maxending = max(nums[i],maxending +nums[i]);
            maxsum= max(maxsum,maxending);
            minending= min(nums[i],minending+nums[i]);
            minsum= min(minending,minsum);
            total = total + nums[i];
        }
        if(maxsum<0){
            return maxsum;
        }
        int circularsum = total - minsum;
        return max(maxsum,circularsum);
        
    }
};