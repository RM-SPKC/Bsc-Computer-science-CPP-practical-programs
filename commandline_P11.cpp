#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main(int count,char*a[])
{
  int big=0;
  clrscr();
  cout<<"\n\t\t\tCOMMAND LINE ARGUMENTS";
  cout<<"\n\t\t\t----------------------";
  cout<<"\nBIGGEST NUMBER";
  cout<<"\n--------------";
  cout<<"\n\nThe arguments are :  ";
  for(int i=1;i<count;i++)
  {
   cout<<"\n"<<a[i];
   int n=atoi(a[i]);
   if(big<n)
   {
    big=n;
    }
  }
  cout<<"\n\n\tBiggest number is :  "<<big;
  getch();
}




