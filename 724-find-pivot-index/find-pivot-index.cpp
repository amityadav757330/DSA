class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int left = 0 ;
        int right;
        for(int i = 0 ;i<nums.size();i++){
            sum = sum+nums[i];
        }
        for(int i = 0 ; i <nums.size();i++){
            right = sum - left-nums[i];
            if(left == right){
                return i ;
            }
            left = left + nums[i];

        }
        return -1;
        
    }
};