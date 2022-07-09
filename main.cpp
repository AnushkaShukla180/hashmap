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
    if(100>age)
    {
        cout<<"invalid"<<endl;
    }
    else if(age>18)
    {
        cout<<"you can vote"<<endl;
        
    }
    else
    {
        cout<<"you cannot vote";
    }

    return 0;
}
