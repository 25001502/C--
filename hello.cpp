#include <iostream>

void calculateSum(int a, int b, int c);

int main() {

    int a;
    int b;
    int c;
    

    a = 5;
    b = 10;
    c = 15;

    calculateSum(a,b,c);
    

    return 0;

}

void calculateSum(int a, int b, int c) {
    int sum = a + b + c;
    std::cout << sum;
}