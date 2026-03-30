class Solution {
public:
    bool isValid(string s) {
        stack<char> basket;
        int i = 0;
        while(i<s.size()){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[' ){
                basket.push(s[i]);
            }
            else if(basket.empty() || s[i] == ')' && basket.top() != '(' || s[i] == '}' && basket.top() != '{' || s[i] == ']' && basket.top() != '['){
                    return false;
                }
        
            else{
                basket.pop();
            }
            i++;
        }
        if(basket.empty()){
            return true;
        }
        return false;
    }
};
