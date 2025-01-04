#pragma once

#include <iostream>

using namespace std;

class Student
{
public:
	Student() {
		cout << "beidiaoyong" << endl;
	};
	Student(string);
	Student(int);
	Student(char*);
	~Student();

private:
	string name;
	int age;
	string gender;
protected:

public:
	template <typename T> 
	void test(T a) {

		cout << a << "hello lizi" << endl;
	}
	void Setage(int);
};

//typedef struct STU {
//
//	int data;
//	struct STU* next;
//	struct STU* left;
//	struct STU* right;
//}Stu;

typedef int 声明一个整型;
typedef char 声明一个字符型;
typedef long 声明一个长整型;
typedef float 声明一个单精度浮点型;
typedef double 声明一个双精度浮点型;

#define 赋值为 =