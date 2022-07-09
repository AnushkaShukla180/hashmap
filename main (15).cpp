/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;
class employee
{
    public:
    string name;
    int salary;
    
    
    employee(string n,int s,int sp);
    
    {   this->name = n;
        this->salary = s;
        this->secretPassword = sp;
    }
    
    void printDetails()
    {
        cout<<this->name<<this->salary;
    }
    void getsecretPassword()
    {
        cout<<this->secretPassword;
    }
private:
    int secretPassword;
    
};
int main()
{
employee har("Harry",344,123456);


har.printDetails();
har.getsecretPassword();
return 0;


}


