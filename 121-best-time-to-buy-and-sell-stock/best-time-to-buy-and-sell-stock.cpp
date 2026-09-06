class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int>nums;
        for(int i = 1;i<prices.size();i++){
            int diff = prices[i]-prices[i-1];
            nums.push_back(diff);
        }
        if(nums.empty()){
            return 0;
        }
        int bestending = nums[0];
        int res = nums[0];
        for(int i = 1 ; i<nums.size();i++){
            int v1 = bestending + nums[i];
            int v2 = nums[i];
            bestending = max(v1,v2);
            res=max(res,bestending);
        }
        return max(res,0);
        
    }
};