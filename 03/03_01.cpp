#include <fstream> //for file I/O
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


int main(){

	ofstream outfile("fdata.txt"); //open file for for writing 
	for(int i=0;i<20;i++){
		outfile << double (rand()) / RAND_MAX << endl ;
	}
	outfile.close();
	ifstream infile("fdata.txt");   //open file for for reading
	double a;
	string s;

	for(int i=0;i<20;i++){
		infile >> s;
		a = stod(s);
		cout << a << ", ";
	}
	cout << endl;
	infile.close();
	return 0;
}

// g++ -o 01 03_01.cpp
