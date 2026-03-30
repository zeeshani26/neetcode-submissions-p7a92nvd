class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        if(n > m){
            return false;
        }
        unordered_map<int,int> freq1, freq2;
        // calculate frequency of f1 and f2(f2 first window only)
        for(int i = 0; i < n; i++){
            freq1[s1[i]]++;
            freq2[s2[i]]++; 
        }

        if(freq1 == freq2){
            return true;
        }

        int i = 0;
        int j = n;
        while(j<m){
            freq2[s2[i]]--;
            if(freq2[s2[i]] == 0){
                freq2.erase(s2[i]);
            }
            freq2[s2[j]]++;
            if(freq1 == freq2){
                return true;
            }
            i++;
            j++;

        }

        return false;
    }
};
