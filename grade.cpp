#include <iostream>
using namespace std;
int main()
{
    float obtain, total, percent;
    cout<<"Enter Total Marks: ";
    cin>> total;
    cout<<"Enter Obtained Marks: ";
    cin>> obtain;
    if (obtain>total)
    {
        cout<<"Error!\nObtained marks are greater than total!";
    }
    else
    {
      percent= (obtain/total)*100;
      cout<<percent<<"%\n";
      if (percent<=100 && percent>=80)
      {
        cout<<"A-1 Grade"; }
      else if (percent<80 && percent >=70)
      {
        cout<<"A Grade"; }
      else if (percent<70 && percent >=60)
      {
        cout<<"B Grade"; }
      else if (percent<60 && percent >=50)
      {
        cout<<"C Grade"; }
      else 
      {
        cout<<"Fail"; }
    }
    return 0;
}