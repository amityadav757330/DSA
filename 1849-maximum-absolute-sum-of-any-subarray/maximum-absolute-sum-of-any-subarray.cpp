class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int result=nums[0];
        int bestending = nums[0];
        int ans =nums[0];
        for(int i = 1;i<nums.size();i++){
            int v1 = bestending+nums[i];
            int v2 = nums[i];
            bestending = max(v1,v2);
            ans=max(ans,bestending);
        }
        int ending = nums[0];
        int res =nums[0];
        for(int i = 1;i<nums.size();i++){
            int v1 = ending+nums[i];
            int v2 = nums[i];
            ending = min(v1,v2);
            res=min(res,ending);
            
        }
        result=max(result,max(abs(ans),abs(res)));
        return result;

        
    }
};