#include <stdio.h>

typedef struct
{
	double real;
	double imag;
} Complex;

Complex complex_add(Complex a, Complex b)
{
	a.real += b.real;
	a.imag += b.imag;
	return a;
}