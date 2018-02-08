/* Multiple Inheritance  Prog :-

Program :- /*

#include <iostream>
using namespace std;
class Person
{
     public:
        string profession;
        int age;

        Person(): profession("unemployed"), age(18) { }
        void display()
        {
             cout << "My Profession is: " << profession << endl;
             cout << "My Age is: " << age << endl;
             laugh();
             data();
        }
        void laugh() { cout << "I Can Laugh." << endl; }
        void data() { cout << "I am  Data Scientist." << endl; }
};

// SQL Teacher class is derived from base class Person.
class SQLTeacher : public Person
{
    public:
       void teachSQL() { cout << "I can teach Structured query lnguage..." << endl; }
};

// Cricket class is derived from base class Person.
class Cricket : public Person
{
    public:
       void Cricketer() { cout << "I can play Cricket." << endl; }
};

int main()
{
     SQLTeacher teacher;
     teacher.profession = "Programmer";
     teacher.age = 23;
     teacher.display();
     teacher.teachSQL();

     Cricketer Cricket;
     Cricketer.profession = "Cricket";
     Cricketer.age = 19;
     Cricketer.display();
     Cricketer.playCricket();

     return 0;
}




/* Output :-
My Profession is : Programmer
My Age is : 23
I Can Laugh.
I am  Data Analyst.
I can teach Structured query lnguage...
My Profession is : Cricketer
My Age is : 19
I Can Laugh.
I am  Data Analyst.
I can play Cricketer.
*/
