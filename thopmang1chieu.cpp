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
        if (a[i]<0) dem+=1;
    }
    cout<<"day co "<<dem<<" so am";
}
void maxandmin (int a[],int n)
{
    int max=a[0];
    int min=a[0];
    for (int i=0;i<n;i++)
    {
        if (a[i]>max) max=a[i];
        else min=a[i];
    }
    cout<<"so lon nhat cua day la: "<<max;
    cout<<"so nho nhat cua day la: "<<min;
}
void songuyento (int a[], int n)
{
    int i=0;
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
void sapxeptang (int a[],int n)
{
    int c=0;
    for(int j=0;j<n;j++)
    for (int i=0;i<n;i++)
    if (a[i]>a[i+1])
    {
        c=a[i];a[i]=a[i+1];a[i+1]=c;
    }
    cout<<"day so sau khi sap xep\n";
    for(int j=0;j<n;j++)
    cout<<"    "<<a[j];
}
void menu()
{
cout<<endl;
cout<<"  2.Xuatmang\n";
cout<<"  3.Dem so am\n";
cout<<"  4.Max & Min\n";
cout<<"  5.Dem so nguyen to\n";
cout<<"  6.Sap xep tang dan\n";
cout<<"  0.Thoat chuong trinh\n";
}
int main()
{
int a[20],n,so;
nhapmang(a,n);
menu();

 do {
        cout << "Moi ban chon so: \n";
        cin >> so;
        switch(so) {
           
            case 2:
                xuatmang(a,n);cout<< endl;
        
                break;
            case 3:
                demsoam(a,n);cout<< endl;
                break;
            case 4:
                maxandmin(a,n);cout<< endl;
                break;
            case 5:
              songuyento(a,n);cout<< endl;
                break;
            case 6:
                sapxeptang(a,n);cout<<endl;
                break;
            case 0: exit;
            default:
                cout << "Vui long nhan so tu 2 den 6" << endl;
        }
    } while (so != 0);
     
    return 0;
}





