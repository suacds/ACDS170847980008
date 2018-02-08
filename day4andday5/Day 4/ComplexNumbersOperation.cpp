/* Declare a structure to represent a complex number (a number having a real part and imaginary part). Write C++ functions to add, subtract, multiply and divide two complex numbers.

Program :-*/

#include <stdio.h>
#include<iostream>
#include<math.h>
using namespace std;
struct complex
{
float rel;
float img;
}s1,s2;

int main()
{
float a,b;
cout<<"Enter Real and Imaginary Part of 1st Complex Number : ";
cin>>s1.rel>>s1.img;
cout<<"Enter Real and Imaginary Part of 2nd Complex Number : ";
cin>>s2.rel>>s2.img;

//Addition

a=(s1.rel)+(s2.rel);
b=(s1.img)+(s2.img);
cout<<"\n Addition : "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

//Subtraction

a=(s1.rel)-(s2.rel);
b=(s1.img)-(s2.img);
cout<<"\n Subtraction : "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

//Multiplication

a=((s1.rel)*(s2.rel))-((s1.img)*(s2.img));
b=((s1.rel)*(s2.img))+((s2.rel)*(s1.img));
cout<<"\n Multiplication : "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

//Division

a=(((s1.rel)*(s2.rel))+((s1.img)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));
b=(((s2.rel)*(s1.img))-((s1.rel)*(s2.img)))/(pow(s2.rel,2)+pow(s2.img,2));

cout<<"\n Division : "<<"("<<a<<")"<<"+"<<"("<<b<<")"<<"i";

return 0;
}





/* Output :-

Enter Real and Imaginary Part of 1st Complex Number : 20    08
Enter Real and Imaginary Part of 2nd Complex Number : 10    06

Addition : (30)+(15)i
Subtraction : (10)+(2)i
Multiplication : (200)+(48)i
Division : (2)+(1.3333)i
*/
