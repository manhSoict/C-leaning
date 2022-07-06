#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int x=15;
    float y=18.9;
    string z="helloworld";
  int *p1;
  float *p2;
  p1=&x;
  p2=&y;
  *p1;
  cout<<*p1<<endl;
  cout<<*p2<<endl;
}
