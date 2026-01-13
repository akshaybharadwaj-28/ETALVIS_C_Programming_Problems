//Question: Get multiple numbers from the user and store them in an array. Stop getting numbers when the number is 0. If the total numbers is odd then print the middle number, otherwise print the average of the middle numbers

//Code

#include <stdio.h>
int main(){
    int i,a[20],count=0,avg,sum;
    printf("Enter multiple numbers: ");
    for(i=0;i<20;i++){
        scanf("%d",&a[i]);
        if(!a[i]){
            break;
        }
    }
    i=0;
    while(a[i]!=0){
        if(a[i]){
            count++;
        }
        i++;
    }
    printf("\n%d\n",count);
    if(count%2){
        i=(count/2);
        printf("%d",a[i]);
    }
    else{
        count=count/2;
        sum=a[count-1]+a[count];
        avg=sum/2;
        printf("\n%d",avg);
    }
}
