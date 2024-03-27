#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include "Split.h"
using namespace std;

struct Element{
	int a_num;
	string name;
	string symbol;
	double a_mass;
};

int main(){
	int a_num;
	string name,symbol;
	double a_mass;
	string* l;
	Element el[200];
	ifstream fin;

	fin.open("elements_eng.txt");
	string line;
	getline(fin,line);
	int i = 0;
	while(getline(fin,line)){
		l = split(line,30,',');
		el[i].a_num = stoi(l[0]);
		el[i].name = l[1];
		el[i].symbol = l[2];
		el[i].a_mass = stod(l[3]);
		i++;
	}
	fin.close();
	for(int j = 0; j<i; j++){
		if((el[j].a_mass > 30.0) && (el[j].a_mass < 120.0)){
			cout << left << setw(10) << el[j].name << " " << setw(2) << el[j].symbol << " " << el[j].a_mass << endl;
		}
	}
	return 0;
}

/*   g++ -c 03_02.cpp Split.h
     g++ -o 03_02 03_02.o Split.o  */
