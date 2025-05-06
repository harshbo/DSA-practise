class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxi = INT_MIN;
        int suffix =1;
        int prefix =1;
        for(int i=0;i<nums.size();i++){
            prefix =(prefix==0?1:prefix);
            suffix =(suffix==0?1: suffix);
            
            prefix *= nums[i];
            suffix *= nums[nums.size()-1-i];
            maxi = max(maxi,max(suffix,prefix));

        }
        return maxi;
            
    }
};
