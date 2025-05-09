class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& interval) {
        if(interval.size()<=1) return interval;

        sort(interval.begin(),interval.end());


        vector<vector<int>> result;
        vector<int> prevInterval=interval[0];
        
        
        for(int i=1;i< interval.size();i++){
            if(interval[i][0] <= prevInterval[1]){
                prevInterval[1] = max(prevInterval[1],interval[i][1]);
            
            }
            
            else{
                result.push_back(prevInterval);
                prevInterval = interval[i];
            }
            

        }
        result.push_back(prevInterval);
       
        return result;

    }
};
