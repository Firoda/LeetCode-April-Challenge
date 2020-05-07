class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    stack<int> min;
    MinStack() {
        while(!st.empty()) st.pop();
        while(!min.empty()) min.pop();
     
    }
    
    void push(int x) {
        st.push(x);
        if(min.empty() or x < min.top())
        {
            min.push(x);
        }
        else
        {
            min.push(min.top());
        }
    }
    
    void pop() {
        if(!st.empty())
        {
            st.pop();
            min.pop();
        }
    }
    
    int top() {
        int res = -1;
        if(!st.empty())
        {
            res = st.top(); 
        }
        return res;
    }
    
    int getMin() {
        
        return min.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
