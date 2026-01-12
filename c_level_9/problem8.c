//Question: Get 5 numbers from user, remove the odd numbers and create a new array and print the same

//Code 

#include <stdio.h>
int main(){
    int i,j,a[5],b[5],temp;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]%2==1){
            a[i]=0;
        }
    }
    for(i=0;i<4;i++){
        for(j=0;j<4;j++){
            if(a[j]==0){
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<5;i++){
        for(j=i;j<i+1;j++){
            b[j]=a[i];
        }
    }
    for(j=0;j<5;j++){
        printf("%d ",b[j]);
    }
    
}
