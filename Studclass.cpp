/*
An array stores details of 10 students (rollno, name, marks in three subject). Write a program to create such an array and print out a list of students who have failed in more than one subject.
*/

#include<iostream>
using namespace std;

struct stud
{
	int roll;
	char nm[50];
	float m1, m2, m3;
};

typedef stud S;

int main()
{
	S student[10];

	for(int i =0 ; i < 10 ; i++)
	{
		cout << "\n Enter Roll no :  \t";
		cin >> student[i].roll;

		cout << "\n Enter Name : \t";
		cin>>student[i].nm;

		cout << "\n Enter marks of three subjects : \t";
		cin >> student[i].m1 >> student[i].m2 >> student[i].m3 ;

	}

	cout<< "\n STUDENTS FAILED IN MORE THAN 1 SUBJECT \n ";
	for(int i =0 ; i < 10 ; i++)
	{
		if(( student[i].m1< 40 && student[i].m2 < 40) || (student[i].m2 < 40 && student[i].m3 < 40) || 
		( student[i].m1 < 40 && student[i].m3 < 40))
		cout << student[i].roll  << "\t" << student[i].nm << "\n";
	}


}

/*
OUTPUT:

student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ g++ Studclass.cppstudent@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ ./a.out
 Enter Roll no :  	1

 Enter Name : 	Rohan

 Enter marks of three subjects : 	54
						57
						32

 Enter Roll no :  	2

 Enter Name : 	Raj

 Enter marks of three subjects : 	62
						24
						36

 Enter Roll no :  	3

 Enter Name : 	Pradip

 Enter marks of three subjects : 	53
						43
						38

 Enter Roll no :  	4

 Enter Name : 	Ketan

 Enter marks of three subjects : 	63 
						34
						26

 Enter Roll no :  	5

 Enter Name : 	Vijay

 Enter marks of three subjects : 	56
						20
						30

 Enter Roll no :  	6

 Enter Name : 	sachin

 Enter marks of three subjects : 	62
						38
						41

 Enter Roll no :  	7

 Enter Name : 	mayur

 Enter marks of three subjects : 	59
						57
						24

 Enter Roll no :  	8

 Enter Name : 	sameer

 Enter marks of three subjects : 	51
						28
						61

 Enter Roll no :  	9

 Enter Name : 	Akash

 Enter marks of three subjects : 	75
						83
						91

 Enter Roll no :  	10

 Enter Name : 	nilesh

 Enter marks of three subjects : 	65
       22
52

 STUDENTS FAILED IN MORE THAN 1 SUBJECT 
 2	Raj
3	pradip
4	ketan
student@student-OptiPlex-3020:~/Desktop/ACDS170847980004/Day3$ 

*/

