class Solution {
public:
    bool isMatch(char a, char b) {
        return a == '(' && b == ')' || a == '[' && b == ']' ||
               a == '{' && b == '}';
    }

    bool isBalanced(string& str) {
        stack<char> s;
        for (char x : str) {
            if (x == '(' || x == '[' || x == '{') {
                s.push(x);
            } else {
                if (s.empty() == true) {
                    return false;
                } else if (isMatch(s.top(), x) == false) {
                    return false;
                } else {
                    s.pop();
                }
            }
        }
        return s.empty() == true;
    }
    bool isValid(string s) { 
        return isBalanced(s);
     }
};