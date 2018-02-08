/*Write a program using functions which accept two integers as an argument and return its sum, sub, divide and multiply. Call all the functions from main( ) */

#include<iostream>
using namespace std;
int main()
{
      int a,b,c,mul(int,int);
      cout<<"\n Enter the value of a,b : ";
      cin>>a>>b;
      c=mul(a,b);
      cout<<"\n Multiplied value is : "<<c;
      return 0;
}
      int mul(int p,int q)
         {
                   int s,a,add(int,int);
               s=p*q;
                   a=add(p,q);
                   cout<<"\n Addition is : "<<a;
               return(s);
          }
      int add(int l, int m)
         {
                   int y,z,sub(int,int);
               y=l+m;
                   z=sub(l,m);
                   cout<<"\n Subtraction is : "<<z;
               return(y);
         }
       int sub(int q, int r)
        {
               int p;
               p=q-r;
               return(p);
         }

/*Output :-
Enter the value of a,b : 
35
25
Subtraction is : 10
Addition is : 60
Multiplied value is : 875*/
