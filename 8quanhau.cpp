#include<iostream>
#include<string.h>
using namespace std;
void kq()
{
    string a[8][8];
    for (int i=0;i<8;i++)
        {for (int j=0;j<8;j++) 
        a[i][j]="_|";}
        
    for (int i=0; i<8;i++)
        {{for (int j=0;j<8;j++) cout<<a[i][j];} cout<<"\n";}
}
int main()
{
   
    
    int d[8][8];
    for (int i=0;i<8;i++)
    {for (int j=0;j<8;j++) d[i][j]=2;}
    
    
    int  b,c;
    cout<<"nhap so hang ";
    cin >> b;
    cout<<"nhap so cot ";
    cin >> c;

    d[b][c]=1;
    for (int i=0;i<8;i++)
     d[b][i]=0; 
    for (int i=0;i<8;i++)
     d[i][c]=0;
    
    d[b][c]=1;
    
    int m=b, n=c;

    for(int k=0;k<7;k++)
        {m++;n++;d[m][n]=0;} m=b, n=c;
    for(int k=0;k<7;k++)
        {m++;n--;d[m][n]=0;} m=b, n=c;
    for(int k=0;k<7;k++)
        {m--;n++;d[m][n]=0;} m=b, n=c;
    for(int k=0;k<7;k++)
        {m--;n--;d[m][n]=0;}
    
    
     
   
    
    
    for (int i=0; i<8;i++)
        {{for (int j=0;j<8;j++) cout<<d[i][j]<<"  ";} cout<<"\n";}
    
    



    return 0;
}
