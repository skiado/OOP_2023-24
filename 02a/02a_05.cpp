#include <iostream>
#include <iomanip>
#include <cstdlib> 
using namespace std;

void fill_array(int ar[5][5]){
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      ar[i][j] = rand()%51;
    }
  }
}

void print_array(int ar[5][5]){
  for(int i=0;i<5;i++){
    for(int j=0;j<5;j++){
      cout << setw(5) << ar[i][j];
    }
    cout << endl;
  }
}

int sum_diag(int ar[5][5]){
  int sum = 0;
  for(int i=0;i<5;i++){
      sum += ar[i][i];
  }
  return sum;
}

int main(){
  int a[5][5];
  
  fill_array(a);
  print_array(a);
  cout << "Το άθροισμα της διαγωνίου είναι: " << sum_diag(a) << endl;
  return 0;
}


// g++ -o 05 02a_05.cpp
