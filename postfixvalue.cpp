#include <iostream>
#include <stack>
#include <cstring>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int performOperation(char operation, int operand1, int operand2) {
    switch (operation) {
        case '+': return operand1 + operand2;
        case '-': return operand1 - operand2;
        case '*': return operand1 * operand2;
        case '/': return operand1 / operand2;
        default:
            cerr << "Invalid operator: " << operation << endl;
            return 0;
    }
}

int evaluatePostfixExpression(const char* expression) {
    stack<int> operands;

    for (size_t i = 0; i < strlen(expression); ++i) {
        if (isdigit(expression[i])) {
            // If the character is a digit, convert it to an integer and push it to the stack
            operands.push(expression[i] - '0');
        } else if (isOperator(expression[i])) {
            // If the character is an operator, pop two operands from the stack,
            // perform the operation, and push the result back to the stack
            int operand2 = operands.top();
            operands.pop();
            int operand1 = operands.top();
            operands.pop();
            int result = performOperation(expression[i], operand1, operand2);
            operands.push(result);
        } else {
            cerr << "Invalid character in expression: " << expression[i] << endl;
            return 0;
        }
    }

    // The final result should be at the top of the stack
    if (!operands.empty()) {
        return operands.top();
    } else {
        cerr << "Expression is empty." << endl;
        return 0;
    }
}

int main() {
    const char* postfixExpression = "455+";
    int result = evaluatePostfixExpression(postfixExpression);
    cout << "Result: " << result << endl;

    return 0;
}
