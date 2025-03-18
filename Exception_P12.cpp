#include<iostream>
using namespace std;
int main()
{
 int numerator,denominator,divide;
 cout<<"\n\t\t\t EXCEPTION HANDLING";
 cout<<"\n\t\t\t ------------------";
 cout<<"\n\n Enter the numerator    :";
 cin>>numerator;
 cout<<"\n Enter the denominator  :";
 cin>>denominator;
 try
 {
  if(denominator==0)
    throw "\n\n\tDivision by zero is impossible\n\n";
  else
   divide=numerator/denominator;
  cout<<"\n\n\t"<<numerator<<" / "<<denominator<<" = "<<(numerator/denominator)<<"\n\n";
 }
  catch(const char* x)
 {
  cout<<x;
 }
  return 0;
}