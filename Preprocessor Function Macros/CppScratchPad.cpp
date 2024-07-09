#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

//Preprocessor Function Macros   //ref link:https://www.youtube.com/watch?v=Cy10W_Ew_ys&list=PLRwVmtr-pp06gII17UNrzeCGMMHnCPdOk&index=2

#define p(a) cout << a << endl	//macros - are compile time

void main()
{
	cout << 5 << endl;
	p(5);	//p short for print
}