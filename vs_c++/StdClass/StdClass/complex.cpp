#include "complex.h"

inline complex& complex::operator += (const complex& comp) {
	this->re += comp.re;
	this->im += comp.im;
	return *this;
}
