#include <cassert>
#include <iostream>
using std::cout;
using std::endl;

//Preprocessor Function Macros   //ref link:https://www.youtube.com/watch?v=Cy10W_Ew_ys&list=PLRwVmtr-pp06gII17UNrzeCGMMHnCPdOk&index=2

//#define p(a) cout << a << endl	//macros - are compile time
#define PRINT(a) cout << a << endl		//macros typical/conventional form is in ALLCAPS

void main()
{
	cout << 5 << endl;
	//p(5);	//p short for print
	PRINT(5);  
}