#include <fstream>
#include <iostream>

using namespace std;

int main() {
       ifstream inFile("students.txt");

       if (!inFile.is_open()) {
              cout << "The file was not successfully opened" << endl;
              return 1;
       }

       return 0;
}