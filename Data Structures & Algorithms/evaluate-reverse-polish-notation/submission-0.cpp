class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> v;
        
        for(const string& token : tokens) {
            if(isNumber(token)){    //checks if is a number (including negative nummber)
                v.push(stoi(token));
            }
            else {
                int b = v.top();    // saves first value
                v.pop();            // removes first value from stack      
                int a = v.top();    // saves second value
                v.pop();            // removes second  value from stack
                if(token == "+") {
                    v.push(a + b);
                } 
                else if(token == "-") {
                    v.push(a - b);
                } 
                else if(token == "*") {
                    v.push(a * b);
                } 
                else if(token == "/") {
                    v.push(a / b);
                } 
            }
        }
        return v.top();
    }

private:
    bool isNumber(const string& str) {
        if(str.empty()){
            return false;
        }
        int i = 0;
        if(str[0] == '-') {
            if(str.size() == 1) { // "-" is not a valid number
                return false;
            }
            i = 1;
        }
        for(; i < str.size(); ++i) {
            if(!isdigit(str[i])) return false;
        }
        return true;
    }
};