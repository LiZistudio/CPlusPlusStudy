
#include "Source.h"

Student::Student(string _name) {
	name = _name;
	cout << "������name���캯��" << endl;
}

Student::Student(int _age) {
	age = _age;
	cout << "������age���캯��" << endl;

}

Student::Student(char* _gender) {
	gender = _gender;
	cout << "������gender���캯��" << endl;
}

void Student::Setage(int _age) {
	age = _age;
	cout << "����" << age << endl;
}

