/*
    0 to 35         Fail
    35 to 50       Pass class
    50 to 60       Second class
    60 to 70       Fisrt class
    70 to 100     Distinction
 */
 
 
# include<iostream>
using namespace std;

void CheckResult(int iMarks) // Naked Function
{
    if((iMarks < 0) || (iMarks > 100))  // Input filter
    {
        cout<<"Invalid marks\n";
        return;
    }
    if((iMarks >= 0) && (iMarks < 35))
    {   cout<<"You are failed..\n";   }
    else if((iMarks >= 35) && (iMarks < 50))
    {   cout<<"Pass class\n"; }
    else if((iMarks >= 50) && (iMarks <60))
    {   cout<<"Second class\n";   }
    else if((iMarks >=60) && (iMarks < 70))
    {   cout<<"First class\n";    }
    else
    {   cout<<"Distinction\n";    }
}

int main()
{
    int iValue = 0;
    cout<<"Enter your marks\n";
    cin>>iValue;
    CheckResult(iValue);
    return 0;
}






