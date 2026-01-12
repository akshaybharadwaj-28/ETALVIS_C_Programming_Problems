//Question: Get 5 numbers from user and print the biggest number

//Code

#include <stdio.h>
int main(){
    int biggest,i,a[5];
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    biggest=a[0];
    for(i=0;i<5;i++){
        if(a[i]>biggest){
            biggest=a[i];
        }
    }
    printf("%d",biggest);
}
