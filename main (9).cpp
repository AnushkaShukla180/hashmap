/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{

int marks[6];

for(int i=0;i<6;i++)
{
    cout<<"marks of "<<i<<"th student is "<<endl;
    cin>>marks[i];
    
}
for(int i=0;i<6;i++)

{
    cout<<"marks of "<<i<<"th student is "<<marks[i]<<endl;
}
return 0;
}
