#include <iostream>
#include <string>
using namespace std;

class MPE {
	private:
		string name;
                string country;
                string group;
		string mail;
	public:
		MPE();
		MPE(string nam, string count, string group, string m);
		string get_name();
		string get_country();
		string get_group();
		string get_mail();
		void print();
};
