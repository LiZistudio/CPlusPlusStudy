#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
#include "complex.h"

int main() {
	complex c1(1, 2);
	complex c2(3, 4);
	c1 += c2;
	std::cout <<"ʵ��:" << c1.returnre() 
              <<"�鲿:" << c1.returnim()<< std::endl;

	return 0;
}
