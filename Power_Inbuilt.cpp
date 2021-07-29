#include<iostream>
#include<bits/stdc++.h> // #include<math.h>  (In c)
using namespace std;

int main()
{
	int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    
    cout << "Enter first number\n";
    cin >> iValue1;
    
	cout << "Enter second number\n";
    cin >> iValue2;
    
	iRet = (int)(pow(iValue1,iValue2) + 0.5); // double pow(double,double);
	
	// It may convert 5 to 4.999
	// Because of lossy conersion of int to double.
	// that's why we add 0.5 before coverison
	
	cout << "Result is " << iRet << "\n";
		
	return 0;
}