#include "MPE.h"

MPE::MPE(){
}

MPE::MPE(string nam, string count, string g, string m){
	name = nam;
	country = count;
	group = g;
	mail = m;
}

void MPE::print(){
	cout << name << ":" << country << ":" << group << ':' << mail << endl;
}

string MPE::get_name(){
	return name;
}

string MPE::get_country(){
	return country;
}

string MPE::get_group(){
	return group;
}

string MPE::get_mail(){
	return mail;
}
