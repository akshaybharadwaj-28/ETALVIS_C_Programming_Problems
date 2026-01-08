//Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14
//Answer: 2710

//Function name : disp_count_sum14

//Code

#include <stdio.h>
int disp_count_sum14();
int main(){
    disp_count_sum14();
}

int disp_count_sum14(){
    int num,digit,sum,temp,count=0;
    for(num=1;num<100000;num++){
        sum=0;
        temp=num;
        while(temp!=0){
            digit=temp%10;
            sum=sum+digit;
            temp=temp/10;
        }
        if(sum==14){
            count++;
        }
    }
    printf("%d",count);
}
