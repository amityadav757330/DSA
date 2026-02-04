class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pi=0;
        int n=nums.size();
        int ni=1;
        vector<int> arr(n);
        for(int elements:nums){
            if(elements>0){
                arr[pi]=elements;
                pi=pi+2;
            }
            else{
                arr[ni]=elements;
                ni=ni+2;
            }
        }
        return arr;

    }
};