class MinStack {
    stack<int> minStack;
    stack<int> baseStack;
public:
    MinStack() {
       
    }
    
    void push(int val) {
        baseStack.push(val);
        if(minStack.empty() || minStack.top() >= val){
            minStack.push(val);
        }
    }
    
    void pop() {
        if(!minStack.empty()){
            if(baseStack.top() == minStack.top()){
                minStack.pop();
            }
        }
        if(!baseStack.empty()){
            baseStack.pop();
        }
        
        
    }
    
    int top() {
        return baseStack.top();
    }
    
    int getMin() {
        return minStack.top();
    }
};
