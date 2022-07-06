#include <stdio.h>
#include <math.h>
#include<string.h>

void bai1() 
{
	int a1,b1;
	do{
		printf("nhap a1: "); scanf("%d",&a1);
		printf("nhap b1: "); scanf("%d",&b1);
		if((a1>0 && b1 >0) || (a1<0 && b1<0) || (a1==0) ||(b1==0))
			printf("nhap lai \n");
	}while((a1>0 && b1>0) ||(a1<0 && b1<0)|| (a1==0) ||(b1==0));
	
	if(abs(a1)<abs(b1))
		printf("so gan so 0 hon la: %d",a1);
	else
		if(abs(a1)>abs(b1))
			printf("so gan so 0 hon la: %d",b1);
		else printf("hai so cach 0 mot khoang bang nhau");
}

void bai2()
{	
    int a2,b2,c2,x;
    printf("\nnhap a2: "); scanf("%d",&a2);
	printf("nhap b2: "); scanf("%d",&b2);
    printf("nhap c2: "); scanf("%d",&c2);
    x=b2;b2=c2;c2=a2;a2=x;
    printf("  %d",a2); printf("  %d",b2); printf("  %d",c2);
}

void bai3()
{   
    int n, a[1000];
  
    printf("\nnhap kich thuoc mang "); scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    for (int i=0; i<n;i++) printf("  %d",a[i]);
    int b[1000];
    for (int i=0;i<n;i++) b[i]=0;
    for (int i=0;i<n;i++)
    for(int j=i+1;j<n;j++)
      if(a[i]==a[j]) { int dem=0;
    for (int k=0; k<j+1;k++) {
      if (a[k]==a[j]) dem=dem+1;}
      if( dem == 2) b[j]=1;
      }
    printf("\n"); printf("cac phan tu bi trung la");
    for (int i=0; i<n;i++)
      if(b[i]==1) printf(" %d",a[i]);
}
void bai4()
{
    printf("\n");
    int dcc=0, dcs=0, dkt=0;
    char a4[100]; 
    getchar();
    printf("nhap xau: "); fgets(a4, sizeof(a4)+1, stdin);
    for (int i=0; i < strlen(a4)-1; i++) {
        if ((a4[i] >= 'A' && a4[i] <= 'Z') || (a4[i] >= 'a' && a4[i] <= 'z')) 
        dcc++;
        else if (a4[i] >= '0' && a4[i] <= '9')
        dcs++;
        else dkt++;
    }
     printf("\nchu cai %d \nchu so %d \nki tu dac biet %d", dcc, dcs, dkt);     
}
int main()
{
    bai1();
    bai2();
    bai3();
    bai4();
   
    return 0;
}
