#include<iostream>
using namespace std;
void nhapmang(int a[], int &n,char ch)
{
    cout<<"\nnhap kich thuoc mang: ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cout<<"nhap"<<ch<<"["<<i<<"]=";
        cin>>a[i];
    }
}
void xuatmang(int a[], int n)
{
    for (int i=0;i<n;i++) cout<<" a["<<i<<"]"<<a[i];
}
void gopmangxenke(int a[],int b[],int c[], int n)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        c[j++]=a[i];
        c[j++]=b[i];
    }
}
int main()
{
    int a[20],b[20],c[40],n;
    nhapmang(a,n,'A');
    xuatmang(a,n);
     nhapmang(b,n,'B');
    xuatmang(b,n);
    gopmangxenke(a,b,c,n);
    cout<<endl;
    cout<<"mang gop xen ke la:\n";
    xuatmang(c,2*n);

}