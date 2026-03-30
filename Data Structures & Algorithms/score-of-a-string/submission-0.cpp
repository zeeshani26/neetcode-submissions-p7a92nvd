class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        if(n==0){
            return 0;
        }
        int sum = 0;
       for(int i = 1; i<n;i++){
        sum += abs((int)s[i] - (int)s[i-1]);
       } 
       return sum;
    }
};