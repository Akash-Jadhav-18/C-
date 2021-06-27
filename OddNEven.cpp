// Accept number from user and check whether that number is even or odd.
// Input : 4
// Output : Its even

// Input :7
// Output : Its odd



////////////////////////////////////////////////////////////////////////////
//
//  Function name : CheckEven
//  Input : Integer
//  Output : Boolean (True / False)
//  Description : It is used to check whetheer number is even or odd
//
////////////////////////////////////////////////////////////////////////////


# include<stdio.h>
#include<stdbool.h>

class Number
{
	public:
			bool CheckEven(int iNo)
			{
				if((iNo % 2) == 0)
				{   return true;    }
				else
				{   return false;   }
			}
			
};




int main()
{
    int iValue = 0;
    bool bRet = false;
    Number * obj = new Number();
	
	printf("Enter number :	");
    scanf("%d",&iValue);
    
    bRet = obj->CheckEven(iValue);   // CheckEven(12)
    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
	
    return 0;
}