class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> s;
        return rpn(s, tokens);

    }
private:
    bool isNumber(const string& token) {
        return !(token == "+" || token == "-" || token == "*" || token == "/");
    }

    int rpn(stack<int>& s, vector<string>& tokens){
        for(string str : tokens){
            if (isNumber(str)) s.push(stoi(str)); 
            else{
                int a = s.top(); s.pop();
                int b = s.top(); s.pop();

                if(str == "+") s.push(b + a);
                if(str == "-") s.push(b - a);
                if(str == "*") s.push(b * a);
                if(str == "/") s.push(b / a);
            }
        }
        return s.top();
    }
};
