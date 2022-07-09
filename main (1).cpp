/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{int age;
    cout<<"enter age"<<endl;
    cin>>age;
    switch(age)
    {
    case 12:
        cout<<"you are 12 years old";
        break;
    case 18:
        cout<<"you are 18 years old";
        break;
    default:
        cout<<"you are neither 12 nor 18 years old";
    }
    

    return 0;
}
