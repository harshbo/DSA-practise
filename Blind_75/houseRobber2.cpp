class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()<2) return nums[0];
        vector<int> firsthouse(nums.size());
        vector<int> lasthouse(nums.size());

        for(int i=0;i<nums.size()-1;i++){
            firsthouse[i]=nums[i];
            lasthouse[i]=nums[i+1];
        }

        int fcal = cal(firsthouse);
        int lcal = cal(lasthouse);

        return max(fcal,lcal);
    }

    int cal(vector<int>&n){
        
        n[1]=max(n[0],n[1]);
        for(int i=2;i<n.size();i++){
            n[i]=max(n[i]+n[i-2],n[i-1]);
        }
        return n[n.size()-1];
    }
};
