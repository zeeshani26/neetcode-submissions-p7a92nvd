class Solution {
public:
    int evalRPN(vector<string>& tokens) {
       stack<int> bucket;
       if(tokens.size() == 1){
        return stoi(tokens[0]);
       }
       int ans ;
       for(int i=0;i<tokens.size();i++){
        if(tokens[i]=="+"){
            int val1 = bucket.top();
            bucket.pop();
            int val2 = bucket.top();
            bucket.pop();
            ans = val2 + val1; 
            bucket.push(ans);
        }
        
        else if(tokens[i]=="-"){
            int val1 = bucket.top();
            bucket.pop();
            int val2 = bucket.top();
            bucket.pop();
            ans = val2 - val1; 
            bucket.push(ans);
        }
        
        else if(tokens[i]=="*"){
            int val1 = bucket.top();
            bucket.pop();
            int val2 = bucket.top();
            bucket.pop();
            ans = val2 * val1; 
            bucket.push(ans);
        }
        
        else if (tokens[i]=="/"){
            int val1 = bucket.top();
            bucket.pop();
            int val2 = bucket.top();
            bucket.pop();
            ans = val2 / val1;
            bucket.push(ans);
        }
        else{
            bucket.push(stoi(tokens[i]));
        }
        }
       return bucket.top(); 
    }
};
