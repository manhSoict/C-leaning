#include <iostream>
using namespace std;
void nhapmang(int a[],int &n)
{
    cout<<"nhap kich thuoc mang";
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout<<"a["<<i<<"]=";
        cin>>a[i];
    }
    
}
void xuatmang(int a[],int n)
{
    for(int i=0; i < n ; i++)
    cout<<"  a["<<i<<"]="<<a[i];
}
void demsoam(int a[],int n)
{
    int dem=0;
    for(int i=0; i<n;i++)
    {
        if (a[i]<0) dem++;
    }
    cout<<"\nday co "<<dem<<" so am";
}
int main()
{
    int a[100],n;
    nhapmang(a,n);
    xuatmang(a,n);
    demsoam(a,n);
return 0;
}