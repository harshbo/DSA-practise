class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        vector<vector<int>> dp(text2.size()+1, vector<int>(text1.size()+1,0));

        for(int i=1; i<=text2.size();i++){
            for(int j=1;j<=text1.size();j++){
                if(text2[i-1]==text1[j-1]){
                    dp[i][j] = 1+dp[i-1][j-1];
                }
                else {
                    dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[text2.size()][text1.size()];
    }
};
