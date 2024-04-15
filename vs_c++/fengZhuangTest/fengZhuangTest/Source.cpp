
#include "Source.h"

Student::Student(string _name) {
	name = _name;
	cout << "调用了name构造函数" << endl;
}

Student::Student(int _age) {
	age = _age;
	cout << "调用了age构造函数" << endl;

}

Student::Student(char* _gender) {
	gender = _gender;
	cout << "调用了gender构造函数" << endl;
}

void Student::Setage(int _age) {
	age = _age;
	cout << "芳龄" << age << endl;
}

