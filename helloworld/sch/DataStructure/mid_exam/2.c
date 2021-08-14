#include <stdio.h>

typedef struct
{
	float real;
	float imaginary;
} Complex;

Complex multiply_complex(Complex a, Complex b)
{
	Complex result = {a.real * b.real - a.imaginary * b.imaginary, a.real * b.imaginary + a.imaginary * b.real};
	return result;
}

int main()
{
	Complex a = {2.0, -3.5};
	Complex b = {-0.5, 7.4};

	Complex result = multiply_complex(a, b);
	printf("%f+%fi", result.real, result.imaginary);
}