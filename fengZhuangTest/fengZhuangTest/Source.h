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

typedef int ����һ������;
typedef char ����һ���ַ���;
typedef long ����һ��������;
typedef float ����һ�������ȸ�����;
typedef double ����һ��˫���ȸ�����;

#define ��ֵΪ =