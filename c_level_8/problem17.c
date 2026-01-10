//Question: Write a program to print the total count of numbers which are less than 100000 and whose sum of digits is 14
//Answer: 2710

//Function name : disp_count_sum14

//Code

#include <stdio.h>
int disp_count_sum14(int);
int main(){
    int y,sum=0;
    y=disp_count_sum14(sum);
    printf("%d",y);
}

int disp_count_sum14(int sum){
    int digit,count=0,i,temp;
    for(i=0;i<100000;i++){
        sum=0;
        temp=i;
        while(temp!=0){
            digit=temp%10;
            sum=sum+digit;
            temp/=10;
        }
        if(sum==14){
            count++;
        }
    }
    return count;
}
