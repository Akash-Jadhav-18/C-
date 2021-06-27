/*
 Accept 2 numbers fro user and return the maximum and minimum number.
*/

#include<iostream>
using namespace std;


class NumberX
{
	public:
			int Maximum(int,int);
};

/////////////////////////////////////////////////////////////
//
//  Function name:  	Maximum
//  Input :             Integer, Integer
//  Output :            Integer
//  Description :       It is used to find out the largest number
//  
/////////////////////////////////////////////////////////////

int NumberX :: Maximum(int iValue1, int iValue2)
{
    if(iValue1 > iValue2)
    {
        return iValue1;
    }
    else
    {
        return iValue2;
    }
}


int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    int iRet = 0;
    
	NumberX obj;
	
    cout<<"Enter first number\n";
    cin>>iNo1;
    
    cout<<"Enter second number\n";
    cin>>iNo2;
    
    iRet = obj.Maximum(iNo1,iNo2);
    
    cout<<"Maximum number is : "<< iRet <<"\n";
	
    return 0;
}
