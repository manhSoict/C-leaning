#include <iostream>
using namespace std;
int main ()
{
    int i=2, n;
    cout<< "nhap so nguyen n:  ";
    cin>>n;
    while (i<=n)
    {
        int t=2, k=0;
        while (t<=i)
        {
            if (i%t==0) k++;
            t++;
        }
        if (k==1) cout<<i<<endl;
        i++;
    }
}    
