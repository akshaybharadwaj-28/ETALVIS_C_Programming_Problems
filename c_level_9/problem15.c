//Question: Get multiple numbers from the user and store them in an array. Stop getting numbers when the number is 0. Add each number's digits and put them in a new array and arrange the new array in ascending order and print the same

//Code

#include <stdio.h>
int main(){
    int i,j,digit,sum=0,a[20],b[20],count=0,num,temp;
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
    printf("%d\n",count);
    for(i=0;i<count;i++){
        sum=0;
        if(a[i]){
            num=a[i];
            while(num!=0){
                digit=num%10;
                sum=sum+digit;
                num/=10;
            }
            b[i]=sum;
        }
    }
    for(i=0;i<count-1;i++){
        for(j=0;j<count-1;j++){
            if(b[j]>b[j+1]){
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
    }
    for(j=0;j<count;j++){
        printf("%d ",b[j]);
    }
}
