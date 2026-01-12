//Question: Get 5 numbers from user and print the average of all the numbers.

//Code

#include <stdio.h>
int main(){
    int i,sum=0,avg,a[5];
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        sum=sum+a[i];
    }
    avg=sum/5;
    printf("%d",avg);
}
