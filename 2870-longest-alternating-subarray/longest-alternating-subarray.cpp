class Solution {
public:
    int alternatingSubarray(vector<int>& nums) {
        int count =0;
        int maxi=-1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i+1]-nums[i]==1){
                count=2;
                for(int j=i+2;j<nums.size();j++){
                    if(nums[j]==nums[j-2]){
                        count++;
                    }
                    else {break;}
                    

                }
                
                maxi=max(maxi,count);
            }


        }
        return maxi;

        
    }
};