#include <iostream>
#include <fstream>
#include <string>
#include "Split.h"
#include "MPE.h"
using namespace std;

#define num_MPE 704

int main(){
	string line;
	string* l;
	ifstream mpe;
	MPE mpes[num_MPE];
	
	mpe.open("MPE.csv");
	int i = 0;
	while ( i < num_MPE) {
		getline (mpe, line);
		l = split(line,4,',');
		mpes[i] = MPE(l[0],l[1],l[2],l[3]);
		i++;
	}
	mpe.close();
	for(int j=0; j<num_MPE;j++){
	        if(mpes[j].get_group() == "GUE/NGL" and mpes[j].get_country() == "FR"){
		    mpes[j].print();
		}
	}
	return 0;
}
		
