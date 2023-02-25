#include <iostream>
#include <stack>
#include <string>

using namespace std;

int getPrecedence(char op) {
    if (op == '*' || op == '/') {
        return 2;
    }
    else if (op == '+' || op == '-') {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {
    string infix;
    cin >> infix;

    string postfix;
    stack<char> opStack;

    for (char c : infix) {
        if (isalpha(c)) {
            postfix += c;
        }
        else if (c == '(') {
            opStack.push(c);
        }
        else if (c == ')') {
            while (!opStack.empty() && opStack.top() != '(') {
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.pop(); // '(' 제거
        }
        else { // 연산자인 경우
            while (!opStack.empty() && getPrecedence(opStack.top()) >= getPrecedence(c)) {
                postfix += opStack.top();
                opStack.pop();
            }
            opStack.push(c);
        }
    }

    while (!opStack.empty()) {
        postfix += opStack.top();
        opStack.pop();
    }

    cout << postfix << endl;

    return 0;
}
