class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int> ans;
        int largest= *max_element(arr.begin(),arr.end());
        for (int i=1 ;ans.size()<k;i++){
            if (find(arr.begin(), arr.end(), i) == arr.end()){
                ans.push_back(i);

            }

        }
        return ans[k-1];



        
    }
};