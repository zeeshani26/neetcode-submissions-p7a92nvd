class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<int, int> freq;

        int l = 0;
        int r = 0;
        int maxFreq = 0;
        int maxL = 0;
        int n = s.size();
        while(r<n){
            freq[s[r]]++;
            maxFreq = max(maxFreq, freq[s[r]]);
            // while windowsize - max frequency > k (bad case)
            while((r-l+1) - maxFreq > k){
                freq[s[l]]--;
                l++;
            }
            maxL = max(maxL, r-l+1);
            r++;
        }
        return maxL;
    }
};
