#include <iostream>
#include <string>
#include <iomanip> 
using namespace std;

class Student{
	private:
		static int count;
		string name;
		int am;
		
	public:
		Student(string n){
			count++;
			am = count;
			name = n;
		}
		// συνάρτηση const για να μην μπορεί να τροποποιήσει τις τιμές των μεταβλητών
		void print_s() const{  
			cout << "Αριθμός Μητρώου : " << setfill('0') << setw(3) << am << " Όνομα : " << name << endl;
		}
};
int Student::count = 0;  // αρχικοποίηση του count
  
int main() {
    Student s1("Frank Zappa");
    Student s2("Patti Smith");
    Student s3("Lou Reed");
    Student s4("Tina Turner");
    
    s1.print_s();
    s2.print_s();
    s3.print_s();
    s4.print_s();
    return 0;
}

// g++ -o 01 04_01.cpp
