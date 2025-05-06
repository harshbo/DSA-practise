class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        if(n == 0) return 0;
        int longest = 1;
        unordered_set<int> s;
        for(auto i : nums){
            s.insert(i);
        }
        for(int i : s){
            if(s.find(i-1)==s.end()){
                int curr=1;
                int x = i;
                while(s.find(x+1)!=s.end()){
                    curr++;
                    x++;
                }
                longest = max(longest, curr);
            }
        }

        return longest;
    }
};
