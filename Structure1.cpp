/* Structure Prog.  :-
Program :- /*
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t 
{
  string title;
  int year;
} mine, yours;

void printmovie (movies_t movie);

int main ()
{
  string mystr;

  mine.title = "MS Dhoni –The untold story ";
  mine.year = 2017;

  cout << "Enter Movie Title : ";
  getline (cin,yours.title);
  cout << "Enter Year : ";
  getline (cin,mystr);
  stringstream(mystr) >> yours.year;

  cout << "My Favorite Movie Is :\t ";
  printmovie (mine);
  cout << "And Your Favourite Movie Is :\t ";
  printmovie (yours);
  return 0;
}

void printmovie (movies_t movie)
{
  cout << movie.title;
  cout << " (" << movie.year << ")\n";
}

/* Output :-
Enter Movie Title : Bahubali
Enter Year : 2017

My Favorite Movie Is : MS Dhoni –The untold story And Your Favourite Movie Is : Bahubali(2017)

*/





