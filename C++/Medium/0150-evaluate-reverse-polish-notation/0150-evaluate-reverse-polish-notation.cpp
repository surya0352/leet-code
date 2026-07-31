class Solution {
public:
    int stk[10000];
    int top = -1;

    void push(int x) {
        top++;
        stk[top] = x;
    }

    int pop() {
        int x = stk[top];
        top--;
        return x;
    }

    int evalRPN(vector<string>& tokens) {
        for (string x : tokens) {

            if (x != "+" && x != "-" && x != "*" && x != "/") {
                push(stoi(x));
            }
            else {
                int n1 = pop();
                int n2 = pop();

                switch (x[0]) {
                    case '+':
                        push(n2 + n1);
                        break;

                    case '-':
                        push(n2 - n1);
                        break;

                    case '*':
                        push(n2 * n1);
                        break;

                    case '/':
                        push(n2 / n1);
                        break;
                }
            }
        }

        return pop();
    }
};