class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int freq=0;
        for(int i =0;i<n;){
            if(nums[i]==0){
            freq++;
            nums.erase(nums.begin()+i);
            n--;
            }else{
                i++;
            }
            
        }
        
        while(freq--){
              nums.push_back(0);
        }

        
    }
};