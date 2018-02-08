/* Write a program in C++ to swap values of two variables using pointers.


Program :-*/

#include<iostream>
using namespace std;

void swap(int *a, int *b){
	int x = *a;
	*a = *b;
	*b = x;
}

int main()
{
int a = 0, b = 0;
cout<<"Enter the Value of a and b : ";
cin>>a>>b;
   
swap(&a, &b);
   
cout<<"After Swapping, \nThe Value of a = "<<a<<" \nThe Value of b = "<<b<<"";
   
return 0;
}

/* Output :-

Enter the Value of a and b : 35	55
After Swapping, 
The Value of a = 55 
The Value of b = 35
*/
