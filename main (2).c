#include<stdio.h>
int main(){
    int a[100][100],r,c,i,j;
    printf("how many rows and columns do you want to enter:");
    scanf("%d %d",&r,&c);
    printf("\nenter elements\n");
    for(i=0;i<r;i++)
    {
    for(j=0;j<r;j++) 
    {
     scanf("%d",&a[i][j]);
    }
    }
    for(i=0;i<r;i++)
    {
    for(j=0;j<r;j++)
    {
    printf("\n%d,2d array is:\n",a[i][j]);
    }
    }
    return 0;
    }
    
        
    
    