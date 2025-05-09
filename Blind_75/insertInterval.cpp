class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& interval, vector<int>& newInterval) {
        
        int i=0;
        int n=interval.size();
        sort(interval.begin(),interval.end());
        vector<vector<int>> result;
        while(i<n && interval[i][1]< newInterval[0]){
            result.push_back(interval[i]);
            i++;
        }
        while(i<n && interval[i][0]<= newInterval[1]){
            newInterval[0]=min(interval[i][0],newInterval[0]);
            newInterval[1]=max(interval[i][1],newInterval[1]);
            i++;
        }
        result.push_back(newInterval);
        
        while (i < n) {
            result.push_back(interval[i]);
            i++;
        }

        return result;
    }
};
