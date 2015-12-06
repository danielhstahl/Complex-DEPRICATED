#ifndef __COMPLEX_H_INCLUDED__
#define __COMPLEX_H_INCLUDED__

#include <cmath>
#include <iostream> //for debugging

class Complex {
	private:
		double real;
		double im;
	public:
		friend Complex operator+(const Complex &c1, const Complex &c2) ;
		friend Complex operator+(const double c1, const Complex &c2) ;
		friend Complex operator+(const Complex &c1, double c2) ;
		friend Complex operator-(const Complex &c1, const Complex &c2) ;
		friend Complex operator-(double c1, const Complex &c2) ;
		friend Complex operator-(const Complex &c1, double c2) ;
		friend Complex operator/(const Complex &c1, const Complex &c2) ;
		friend Complex operator/(double c1, const Complex &c2) ;
		friend Complex operator/(const Complex &c1, double c2) ;
		friend Complex operator*(const Complex &c1, const Complex &c2) ;
		friend Complex operator*(double c1, const Complex &c2);
		friend Complex operator*(const Complex &c1, double c2);
		Complex();
		Complex(double, double);
		Complex multiply(const Complex&) const;
		Complex multiply(double) const;
		Complex log() const;
		Complex exp() const;
		Complex add(const Complex&) const;
		Complex add(double) const;
		Complex subtract(const Complex&) const;
		Complex subtract(double) const;
		Complex pow(double) const;
		Complex divide(const Complex&) const;
		Complex divide(double) const;

		double getReal() const;
		double getIm() const;

};
Complex exp(const Complex&) ;
Complex sin(const Complex&);
Complex cos(const Complex&);
Complex sqrt(const Complex&);
Complex log(const Complex&);
Complex pow(const Complex&, double);


#endif
