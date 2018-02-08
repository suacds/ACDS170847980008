/*
Write a program in C++  finds the length of the string and also displays the string reverse, compare two strings to check whether they are equal or not and concatenate two strings, convert string to lower case/upper case.
*/

#include <cstring>
#include <iostream>
#include <string>      
#include <locale>
	
using namespace std;


void reverseStr(string &str)
{
   	int n = str.length();
 	for (int i=0; i<n/2; i++)
       	swap(str[i], str[n-i-1]);
}

int main()
{
 	char str1[]="sandip university";
	char str2[]= "SANDIP";

	//cout<<"\n Enter String 1  ";
	//cin>>str;
	
 
 	cout<<"\n--- STRING LENGHT --- \n"; 
	cout<<"\n Given String :"<<str1; 
   	cout << "\nwithout null character: " << std::strlen(str1) << '\n'
             << "with null character: " << sizeof str1 << '\n';

	string str = "titfortat";
	cout<<"\n--- STRING REVERSE --- \n"<<"\nGiven String :"<<str; 
	
	reverseStr(str);
  	cout <<"\nREVERSE :" <<str<<"\n\n";

	cout<<"\n--- STRING CONCATENATE --- \n";
	cout<<"\n "<<strcat(str1,str2)<<"\n\n";

	cout<<"\n--- STRING COMPARE --- \n";
	int res = strcmp(str1, str2);
     
	if (res==0)
        cout<<"Strings are equal";    
	else
        cout<<"Strings are unequal";
     
	cout<<"\n strcmp() Result is:  \t"<<res<<"\n";

	cout<<"\n--- STRING UPPER/LOWER --- \n";
	std::locale loc;
  	std::string str4="Test String.\n";
  	for (std::string::size_type i=0; i<str.length(); ++i)
	{
    	std::cout<< std::toupper(str4[i],loc);
	}

  	for (std::string::size_type j=0; j<str.length(); ++j)  	
	{
	std::cout<<std::tolower(str4[j],loc);
	}

	return 0;

}

/*
OUTPUT :-

student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ g++ StringOperations.cpp
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ ./a.out

--- STRING LENGHT --- 

Given String :sandip university
without null character: 16
with null character: 17

--- STRING REVERSE --- 

Given String :titfortat
REVERSE :tatroftit


--- STRING CONCATENATE --- 

WELCOME SUSANDIP


--- STRING COMPARE --- 
Strings are unequal
 strcmp() Result is:  	4

--- STRING UPPER/LOWER --- 
TEST STRING.
test string.
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ 

*/

