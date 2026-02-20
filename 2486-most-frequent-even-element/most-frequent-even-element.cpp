class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        vector<int> freq(100001, 0);

        for (int x : nums) {
            if (x % 2 == 0) {
                freq[x]++;
            }
        }
        int maxi = 0;
        int ans = -1;

        for (int i = 0; i <=100000; i += 2) {
            if (freq[i] > maxi) {
                maxi = freq[i];
                ans = i;
            }
        }

        return ans;
    }
};