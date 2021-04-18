#include <stdio.h>

typedef struct
{
	double real;
	double imag;
} Complex;

Complex addComplex(Complex A, Complex B)
{
	A.real += B.real;
	A.imag += B.imag;
	return A;
}

Complex subComplex(Complex A, Complex B)
{
	A.real -= B.real;
	A.imag -= B.imag;
	return A;
}

void printComplex(Complex C)
{
	printf("%4.1f %c %4.1fi\n", C.real, C.imag < 0 ? '-' : '+', C.imag < 0 ? -C.imag : C.imag);
}

int main()
{
	Complex a = {10.1, 7.9};
	Complex b = {-5.4, 7.3};
	Complex result;

	result = addComplex(a, b);
	printComplex(result);
	result = subComplex(a, b);
	printComplex(result);

	return 0;
}