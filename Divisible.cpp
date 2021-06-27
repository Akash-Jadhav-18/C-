// Accept number from user and check whether that number is dicisible by 3 and 5.
// Input : 10
// Output : No

// Input :15
// Output : Yes

////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckDivisble
//  Input : Integer
//  Output : Boolean (True / False)
//  Description : It is used to check whetheer number is divisible by 3 and 5
//  Date : 01/03/2021
//  Author : Piyush Manohar Khairnar
//
////////////////////////////////////////////////////////////////////////////


#include<iostream>
using namespace std;

class Number
{
	public:
			static bool CheckDivisible(int iNo)
			{
				if(((iNo % 3) == 0) && ((iNo % 5) == 0))
				{ return true; }
				else
				{ return false; }
			}
};

int main()
{
    int iValue = 0;
    bool bRet;
    cout<<"Enter number  ";
    cin>>iValue;
    
	
	
    bRet = Number::CheckDivisible(iValue);   // CheckDivisible(7)  15  12  7
    if(bRet == true)
    {
        cout<< iValue <<"  is devisible by 3 and 5\n";;
    }
    else
    {
        cout<< iValue <<"  is not devisible by 3 and 5\n";
    }
    return 0;
}






