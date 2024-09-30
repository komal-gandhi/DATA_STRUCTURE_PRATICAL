#include<stdio.h>
#include<conio.h>
int main()
{
    int k,h;
    // int  a[k][h],b[k][h],c[k][h];
    printf("enter a value you want enter in matrices :");
    scanf("%d %d",&k,&h);
     int  a[k][h],b[k][h],c[k][h];
    printf("enter elements of first matrix :\n");
    for(int i=0;i<2;i++)
    
    {
        for(  int j=0;j<2;j++) 
        {             
            scanf("%d",&a[i][j]);

        }    
    }
    printf("enter elements of second matrix :\n");
    for(int i=0;i<2;i++)
     {
        for(int j=0;j<2;j++) 
         {
            scanf("%d",&b[i][j]);
            
           }
     }
    printf("multiplication of two matrices :\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            c[i][j]=a[i][j]*b[i][j];
            printf("%d ",c[i][j]);
        }

        printf("\n");
    } 
}
