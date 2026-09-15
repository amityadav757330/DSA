class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> res;
        int start1 = newInterval[0];
        int end1 = newInterval[1];
        bool insert = false;
        for(int i = 0 ; i<intervals.size();i++){
            if(!insert && end1 < intervals[i][0]){
                res.push_back({start1,end1});
                insert = true;
            }
            if(insert || intervals[i][1] < start1){
                res.push_back(intervals[i]);
            }
            else{
                start1 = min(start1,intervals[i][0]);
                end1= max(end1,intervals[i][1]);
            }
            

        }
        if(!insert){
            res.push_back({start1,end1});
        }
        return res;
        
    }
};