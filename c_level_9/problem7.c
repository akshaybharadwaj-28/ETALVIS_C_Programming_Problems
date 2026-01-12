//Question: Get 5 numbers from the user and arrange in descending order and print the same

//Code

#include <stdio.h>
int main(){
    int i,j,a[5],temp;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[j]<a[j+1]){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }
}
