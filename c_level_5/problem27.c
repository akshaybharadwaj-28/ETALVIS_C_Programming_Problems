//Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14
//Answer: 2710

//Code

#include <stdio.h>

int main() {
    int num,sum,count=0,digit,temp;
    for(num=10;num<100000;num++){
        temp=num;
        sum=0;
        for(;temp!=0;temp=temp/10){
            digit=temp%10;
            sum=sum+digit;
        }
        if(sum==14){
            //printf("Sum of digits of %d is %d\n", num, sum);
            count++;
        }
    }
    printf("Total no count below 100000 whose sum of digits is 14 are %d",count);
}
