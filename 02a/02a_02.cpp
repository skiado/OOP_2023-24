#include <iostream>
#include <string>
using namespace std;
 
void print(int i) {
    cout << "Printing int: " << i << endl;
}

void print(double  f) {
    cout << "Printing double: " << f << endl;
  }
  
void print(string c) {
    cout << "Printing string: " << c << endl;
}


int main(void) {
 
   // Call print to print integer
   print(5);
   
   // Call print to print float
   print(500.263);
   
   // Call print to print string
   print("Hello C++");
 
   return 0;
}

// g++ -o 02 02a_02.cpp
