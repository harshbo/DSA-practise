class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        if(intervals.size()==0) return 0;

        sort(intervals.begin(), intervals.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
            return a[1] < b[1];
        });
        vector<int> prev_interval = intervals[0];
        int count = 1;

        for(int i =1;i<intervals.size();i++){
            if(intervals[i][0]>= prev_interval[1]){
                prev_interval = intervals[i];
                count++;
            }
        }
        return intervals.size()-count;
    }
};
