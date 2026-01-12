//Question: Get 5 numbers from user and print the sum of all numbers.

//Code

#include <stdio.h>
int main(){
    int a[5],i,sum=0;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    printf("%d",sum);
}
