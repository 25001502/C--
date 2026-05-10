#include <iostream>
#include <string>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{

    int (*bill)(int, int);
    bill = add;

    int results = bill(5, 10);

    cout << "The result is: " << results ;
}