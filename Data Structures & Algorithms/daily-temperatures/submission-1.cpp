class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       // Push indexes in stack
       // When bigger value temp[i] found in stack, subtract stack value to current 
       if(temperatures.size() <= 1){
        return {0};
       }

       stack<int> indexes;
       vector<int> ans;
       int n = temperatures.size();
        
       for(int i = n-1; i >= 0; i--){
        if(!indexes.empty() && temperatures[i] >= temperatures[indexes.top()]){
            while(!indexes.empty() && temperatures[i] >= temperatures[indexes.top()]){
                indexes.pop();
            }
        }
        if(indexes.empty()){
            ans.push_back(0);
            indexes.push(i);
        }
        else if(temperatures[i] < temperatures[indexes.top()]){
            ans.push_back(indexes.top() - i);
            indexes.push(i);
        }
       }
       reverse(ans.begin(),ans.end());
       return ans;
    }
};
