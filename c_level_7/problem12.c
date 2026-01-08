//Question: Write a program to get a number from user print the sum of all digits.
//Input: 123456 Output:21    Input:76895439 Output:51    Input:675 Output:18

//Function name : disp_sum_all_digits

//Code

#include <stdio.h>
int disp_sum_all_digits();
int main(){
    disp_sum_all_digits();
}

int disp_sum_all_digits(){
    int num,sum=0,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    printf("%d",sum);
}
