#ifndef _STDCLASS_COMPLEXH_
#define _STDCLASS_COMPLEXH_

class complex
{
public:
	complex(double r = 0, double i = 0) : re(r), im(i) {}
	complex& operator += (const complex&);
	double returnre () const { return re; }
	double returnim () const { return im; }
protected:


private:
	double re;
	double im;
};

#endif //!_STDCLASS_COMPLEXH_