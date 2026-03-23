#include <iostream>

void showValues(int values[], int size);

int main() {

int myValues[] = {1, 2, 3, 4, 5};
int size = sizeof(myValues) / sizeof(myValues[0]);
showValues(myValues, size);

}

void showValues(int values[], int size) {
    std::cout << "Values: ";
    for (int i = 0; i < size; ++i) {
        std::cout << values[i] << " ";
    }
    std::cout << std::endl;
}