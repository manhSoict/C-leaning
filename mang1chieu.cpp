#include<iostream>
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
int main()
{
    void nhapmang(a[],n);
    void xuatmang(a[],n);
    return 0;
}
