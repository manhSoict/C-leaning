 #include<iostream>
 using namespace std;
 int main()
 {
 int d[8][8];
    for (int i=0;i<8;i++)
    {for (int j=0;j<8;j++) d[i][j]=2;}
    int b,c;
 for (int i=0; i<8; i++)
     {for (int j=0;j<8; j++) if(d[i][j]=2){b=i;c=j;
     d[b][c]=1;
    for (int i=0;i<8;i++)
     d[b][i]=0; 
    for (int i=0;i<8;i++)
     d[i][c]=0;

    int m=b, n=c;

    for(int k=0;k<7;k++)
        {m++;n++;d[m][n]=0;} m=b, n=c;
    for(int k=0;k<7;k++)
        {m--;n++;d[m][n]=0;} m=b, n=c;
    for(int k=0;k<7;k++)
        {m--;n--;d[m][n]=0;}
     }}    
     for (int i=0; i<8;i++)
        {{for (int j=0;j<8;j++) cout<<d[i][j]<<"  ";} cout<<"\n";}
 }