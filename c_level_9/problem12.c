//Question: Get multiple numbers from the user and store them in an array. Stop when the number is 0. Print the total numbers entered by the user and prin the sum of nnumbers

//Code

#include <stdio.h>
int main(){
    int i=0,length,a[20],sum=0,count=0;
    printf("Enter multiple numbers: ");
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
        if(a[i]==0){
            break;
        }
    }
    i=0;
    while(a[i]!=0){
        if(a[i]){
            count++;
            sum=sum+a[i];
        }
        i++;
    }
    printf("Count is %d\n",count);
    printf("Sum is %d",sum);
}
