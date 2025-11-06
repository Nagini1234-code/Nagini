


  
#include <stdio.h>
int main(){
    int a[100],n,i,sum=0;
    printf("how many numbers do you want to add:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++);
    {
        scanf("%d\t",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    sum=sum+a[i];
    }
    printf("sum is %d",sum);
    return 0;
}
