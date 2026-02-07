class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int >ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int startingrow=0;
        int endingrow=m-1;
        int startingcol=0;
        int endingcol=n-1;
        int total=m*n;
        int count =0;
        while (count<total){
            for(int i=startingcol;i<=endingcol && count < total;i++){
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;

            for(int i=startingrow;i<=endingrow && count < total;i++){
                ans.push_back(matrix[i][endingcol]);
                count++;

            }
            endingcol--;

            for(int i=endingcol;i>=startingcol && count < total;i--){
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;

            for(int i=endingrow;i>=startingrow && count < total;i--){
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;

        }
        return ans;
    }
};