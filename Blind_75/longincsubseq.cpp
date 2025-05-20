class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int> lenarr(nums.size(),1);
        for(int i=1;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    if(lenarr[j]+1>lenarr[i]){
                        lenarr[i]=lenarr[j]+1;
                    }
                }
            }
        }
        auto max_it = max_element(lenarr.begin(),lenarr.end());
        return *max_it;
    }
};
