class Solution {
public:
    bool isValid(string s) {
        stack<char> myStack;
        for (int i=0; i<s.size(); i++){
            if (myStack.empty()){
                myStack.push(s[i]);
                continue;
            }
            if (s[i] == '(' || s[i] == '[' || s[i] == '{' ){
                myStack.push(s[i]);
            }
            else {
                if ((myStack.top()=='(' && s[i]==')') || (myStack.top()=='{' && s[i]=='}') || (myStack.top()=='[' && s[i]==']') ) {
                    myStack.pop();
                }
                else {
                    myStack.push(s[i]);
                }
            }
        }
        return myStack.empty();
    }
};