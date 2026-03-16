#include "ArrayStack.hpp"
#include <iostream>

using namespace std;

double gRec(unsigned);
double gStack(unsigned);

int main() {
    unsigned startValue = 0;

    cout << "Enter the starting value for i: ";
    cin  >> startValue;

    cout << "\nRecursive:\n";
    cout << gRec(startValue) << endl;

    cout << "\nIterative:\n";
    cout << gStack(startValue) << endl;

    return 0;
}

double gRec(unsigned i) {
    if (i == 0) {
        cout << "Base case!\n";
        return 3.2;
    }
    
    return gRec(i - 1) + 1.1;
}

double gStack(unsigned i) {

    ArrayStack<unsigned> stack(100);

    unsigned current = i;

    while (current > 0) {
        stack.push(current);
        current--;
    }

    cout << "Base case!\n";

    double result = 3.2;

    while (!stack.isEmpty()) {
        stack.pop();
        result += 1.1;
    }

    return result;
}