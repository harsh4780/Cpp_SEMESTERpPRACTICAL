#include<iostream>
using namespace std;
#include <string.h>
int main()
{
  char ch[20] ="Welcome";
  int len = strlen(ch);

  cout <<"The lenth of string "<< len << endl;

  cout << "Copt string first to another strng "<< endl;
  char ch2[20];
  strcpy(ch2,ch);

  cout << endl << endl <<"Printing the copy array "<< ch2  << endl;

  strrev(ch);
  cout << endl << endl  << "String reverse function  >"  << ch << endl;

  // Here we are using a string concatention Function

  char ch3[20] = " Harish" ;

  cout<<endl <<endl <<"Concatenates of ch1 and ch3 " << strcat(ch2, ch3) << endl << endl;

  // here we are using a string comaprision
  if (strcmp(ch2,ch) == 0 )
  {
    cout << "String are same ";
  }
  else
  {
    cout <<"Strig are not same " << endl;
  }
}
