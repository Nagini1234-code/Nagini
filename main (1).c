


  
#include <stdio.h>
int main(){
    int a[100],n,i;
    printf("how many numbers do you want to enter:");
    scanf("%d",&n);
    printf("enter elements:");
    for(i=0;i<n;i++);
    {
        scanf("%d\t",&a[i]);
    }
    printf("the elments are:");
    for(i=0;i<n;i++);
    {
    printf("%d",a[i]);
    }
    return 0;
}