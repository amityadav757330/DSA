class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> nums1, nums2;
        vector<int> res1, res2;

        for (int x : nums) {
            if (x <= 0) {
                nums1.push_back(x);
            } else {
                nums2.push_back(x);
            }
        }

        for (int i = 0; i < nums1.size(); i++) {
            res1.push_back(nums1[i] * nums1[i]);
        }

        reverse(res1.begin(), res1.end());

        for (int i = 0; i < nums2.size(); i++) {
            res2.push_back(nums2[i] * nums2[i]);
        }

        res1.insert(res1.end(), res2.begin(), res2.end());
        sort(res1.begin(),res1.end());

        return res1;
    }
};