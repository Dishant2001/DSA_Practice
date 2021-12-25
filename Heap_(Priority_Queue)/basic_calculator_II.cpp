class Solution {
public:
    int calculate(string s) {
        int len = s.size();
        stack<int> stack;
        
        int curNum = 0;
        char operation = '+';  // base operation is +

        for(int i=0; i<len; i++) {

            // if digit add  to current num
            if (isdigit(s[i])) {
                curNum = (curNum*10) + (s[i]-'0');
            }

            // if its +-/* and not a white space or we reached the end
            if ((!isdigit(s[i]) && s[i] != ' ') || i == len-1) {
                
                if (operation == '-') {
                    // - is low priority lets be lazy and evaluate later
                    stack.push(-curNum);
                    
                } else if (operation == '+') {
                    // + is low priority lets be lazy and evaluate later
                    stack.push(curNum);
                } else if (operation == '*') {
                    // * is high priority better to do it now
                    int stackTop = stack.top();
                    stack.pop();
                    stack.push(stackTop * curNum);
                } else if (operation == '/') {
                    // / is high priority better to do it now
                    int stackTop = stack.top();
                    stack.pop();
                    stack.push(stackTop / curNum);
                }
                operation = s[i];
                curNum = 0;
            }
        }

        int ans = 0;
        while(!stack.empty()) {
            ans += stack.top();
            stack.pop();
        }

        return ans;

    }
};