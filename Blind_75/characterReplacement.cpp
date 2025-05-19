class Solution {
public:
    int characterReplacement(string s, int k) {
        map<char,int> hash;
        int left=0;
        int maxFreq =0;
        int maxwinLength =0;

        for(int right =0; right< s.size();right++){

            hash[s[right]-'A']++;

            maxFreq = max(maxFreq, hash[s[right]-'A']);

            int winSize = right-left+1;

            if(winSize - maxFreq > k){
                hash[s[left]-'A']--;
                left++;
            }

            winSize = right-left+1;
            maxwinLength =  max(maxwinLength, winSize);



        }
        return maxwinLength;
    }
};
