#define _CRT_SECURE_NO_WARNINGS 1

#include "MyString.h"
#include <string.h>

inline MyString::MyString(const char* cstr = 0) {
	if (cstr) {
		m_data = new char[strlen(cstr)+1];
		strcpy(m_data, cstr);
	}
	else {//δָ����ֵ
		m_data = new char[1];
		*m_data = '\0';
	}
}

inline MyString::~MyString() {
	delete[] m_data;
}

inline MyString::MyString(const MyString& str) {
	m_data = new char[strlen(str.m_data) + 1];
	strcpy(m_data, str.m_data);
}

inline MyString& MyString::operator=(const MyString& str) {
	if (this == &str) {
		return *this;
	}
	delete[] m_data;
	m_data = new char[strlen(str.m_data) + 1];
	strcpy(m_data, str.m_data);
	return *this;
}