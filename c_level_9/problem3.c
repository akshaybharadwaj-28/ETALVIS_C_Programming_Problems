//Question: Get 5 numbers from user and print the smallest number

//Code

#include <stdio.h>
int main(){
    int i,smallest,a[5];
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    smallest=a[0];
    for(i=0;i<5;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }
    printf("%d",smallest);
}
