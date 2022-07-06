#include <iostream>
#include <math.h>
using namespace std;
int main ()

{
    int n;
    float x,k;
    cout <<"nhap x va n";
    cin >> x >> n;
    k = pow((x*x+x+1),n)+pow((x*x-x+1),n);
    cout<< "gia tri phep tinh la  " << k;
}

