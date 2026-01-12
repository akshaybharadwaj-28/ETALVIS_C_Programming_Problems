//Question: Get 5 numbers from the user, remove the prime numbers, and create a new array, then print the same

//Code

#include <stdio.h>
int main(){
    int i,j,temp,a[5],b[5],flag;
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        if(a[i]==1){
                flag=1;
        }
        if(a[i]==2){
            flag=0;
        }
        for(j=2;j<a[i];j++){
            flag=0;
            if(a[i]%j==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
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
    for(i=0;i<5;i++){
        printf("%d ",b[i]);
    }
}
