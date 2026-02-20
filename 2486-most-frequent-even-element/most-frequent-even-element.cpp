class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int ,int>freq;
        for(int x:nums){
            if(x%2==0){
                freq[x]++;

            }
        }     
        int maxi=0;
        int ans =-1;
        for(auto it:freq){
            if(it.second>maxi||(it.second==maxi &&it.first<ans)){
                maxi=it.second;
                ans=it.first;
            }
        }   
        return ans ;
    }
};