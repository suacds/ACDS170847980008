/* Single Inheritance  Prog :-

Program :- /*

#include <iostream>
using namespace std;
class employee

{
public:
int salary;
};

class developer : public employee
{
    employee e;
    public:
    void salary()
    {
        cout<<"Enter the Employee Salary: ";
        cin>>e.salary;   // access base class data member
        cout<<"Employee Salary: "<<e.salary;
    }
};

int main()
{

developer obj;
obj.salary();
return 0;
}

/* Output :-
Enter Employee Salary : 50000
Employee Salary: 50000
*/

