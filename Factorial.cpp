// Accept number from user and return its factorial
// Input : 5
// Output : 5*4*3*2*1       (120)

// Input :4
// Output : 4*3*2*1         (24)
//              1*2*3*4         (24)


# include<iostream>
using namespace std;

int Fact(int iNo)
{
    int iMult = 1;
    
	if(iNo < 0)
    {
		iNo = -iNo; 
	}

    while(iNo > 0)
    {
        iMult = iMult * iNo;
        iNo--;
    }
	
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    cout << "Enter number\n";
    cin >> iValue;

    iRet = Fact(iValue);

    cout << "Factorial is " << iRet << "\n";
	return 0;
}