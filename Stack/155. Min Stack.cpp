class MinStack {
private:
    stack<int> s;
    stack<int> s_min; //关键：用一个辅助栈存最小值，如果求min则返回辅助栈top，如果主栈pop的值是最小值则同样pop辅助栈

public:
    MinStack() : s(), s_min(){};
    
    void push(int val) {
        if(s_min.empty() || val <= s_min.top()) s_min.push(val);
        s.push(val);
    }
    
    void pop() {
        if (s.top() == s_min.top()) s_min.pop();
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return s_min.top();   
    }
};
