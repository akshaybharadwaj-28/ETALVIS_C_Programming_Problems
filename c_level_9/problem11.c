//Question: Get 5 numbers from the user, reverse each number, create a new array, and print the sum of all numbers in the new array

//Code

#include <stdio.h>
#include <math.h>
int main(){
    int i,j,num,count,res,digit,multi,rev[5],a[5],sum[5];
    printf("Enter 5 numbers: ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++){
        count=0;
        res=0;
        if(a[i]){
            num=a[i];
            while(num!=0){
                count++;
                num/=10;
            }
            multi=pow(10,(count-1));
            num=a[i];
            while(num!=0){
                digit=num%10;
                res=res+(digit*multi);
                multi/=10;
                num/=10;
            }
            rev[i]=res;
        }
        printf("%d ",rev[i]);
    }
    printf("\n");
    for(i=0;i<5;i++){
        res=0;
        if(rev[i]){
            num=rev[i];
            while(num!=0){
                digit=num%10;
                res=res+digit;
                num/=10;
            }
            sum[i]=res;
        }
        printf("%d ",sum[i]);
    }
}
