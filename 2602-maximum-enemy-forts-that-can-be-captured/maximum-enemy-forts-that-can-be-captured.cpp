class Solution {
public:
    int captureForts(vector<int>& forts) {
        int n = forts.size();
        int maxCount = 0;

        for (int i = 0; i < n; i++) {
            if (forts[i] == 1 || forts[i] == -1) {
                int j = i + 1;
                int count = 0;

                while (j < n && forts[j] == 0) {
                    count++;
                    j++;
                }

                if (j < n && forts[j] == -forts[i]) {
                    maxCount = max(maxCount, count);
                }
            }
        }

        return maxCount;
    }
};