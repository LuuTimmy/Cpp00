#include <iostream>
#include <stack>
#include <sstream>

int makeOperation(char token, int op, int op2, std::stack<int> & values) {
    int result;

    switch(token) {
        case '+':
            result = op + op2;
            break ;
        case '-':
            result = op - op2;
            break ;
        case '*':
            result = op * op2;
            break ; 
        case '/':
            if (!op2)
                return 0;
            result = op / op2;
            break ;
    }
    values.push(result);
    return 1;
}

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cout << "Error: Argument" << std::endl;
        return 1;
    }
    std::string token;
    std::stack<int> values;
    std::string calcul(argv[1]);
    std::istringstream ss(calcul);

    while (ss >> token) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (values.size() < 2) {
                std::cout << "Error: not valid argument" << std::endl;
                return 1;
            }
            int op, op2, result;
            op2 = values.top();
            values.pop();
            op = values.top();
            values.pop();
            if (!(result = makeOperation(token[0], op, op2, values))) {
                std::cout << "Error: division by zero" << std::endl;
                return 1;
            }
        }
        else {
            int value;
            std::istringstream(token) >> value;
            if (value < 0 || value > 9) {
                std::cout << "Error: operand " << value << " is out of range" << std::endl;
                return 1;
            }
            values.push(value);
        }
    }
    if (values.size() != 1) {
        std::cout << "Error: too many operands" << std::endl;
        return 1;
    }
    std::cout << values.top() << std::endl;
}

// say hello to the 