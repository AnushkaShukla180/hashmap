/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int add(int a,int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{

int a,b;
cout<<"enter first number"<<endl;
cin>>a;
cout<<"enter second number"<<endl;
cin>>b;
cout<<"The function returned "<<add(a,b);

    return 0;
}
