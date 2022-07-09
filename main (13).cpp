/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
class employee{
    public:
    string name;
    int salary;
    void printDetails()
    {
        cout<<this->name<<this->salary;
    }
};
int main()
{
employee har;
har.name="harry";
har.salary=100;
har.printDetails();
return 0;


}


