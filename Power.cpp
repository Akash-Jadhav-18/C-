

# include<iostream>
using namespace std;

int Power(int iNo1, int iNo2)
{
    int iCnt = 0,iMult = 1;
    
	if(iNo1 < 0)
    {
		iNo1 = -iNo1;   
	}

    if(iNo2 < 0)
    {
		iNo2 = -iNo2;   
	}
    //          1           2               3
    for(iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;   // 4
    }

    return iMult;
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    
    cout << "Enter first number\n";
    cin >> iValue1;

    cout << "Enter second number\n";
    cin >> iValue2;

    iRet = Power(iValue1,iValue2);

    cout << "Result is "<< iRet << "\n";
    return 0;
}
