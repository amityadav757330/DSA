class Solution {
public:
    int mirrorDistance(int n) {
        int x=n;
        int rev =0;
        int ans;
        while (n > 0) {
            rev = rev*10 + n % 10;
            n = n / 10;
        }
        ans=rev-x;
        return abs(ans);
    }
};