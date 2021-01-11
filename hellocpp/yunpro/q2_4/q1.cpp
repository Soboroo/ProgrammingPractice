#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char arr[40] = "Hello, Cpp!!!";
	char arr2[40];
	cout << "strlen: " << strlen(arr) << endl;
	cout << "strcat: " << strcat(arr, " I'm string header!") << endl;
	cout << "strcpy: " << strcpy(arr2, arr) << endl;
	cout << "strcmp: " << strcmp(arr, arr2) << endl;

	return 0;
}