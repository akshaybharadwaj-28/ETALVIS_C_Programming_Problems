//Question: Write a program to get a number from user print the total number of digits in that number.
//Input: 123456 Output:6    Input:76895439 Output:8    Input:675 Output:3

//Function name : count_total_digits

//Code

#include <stdio.h>
int count_total_digits();
int main(){
    count_total_digits();
}

int count_total_digits(){
    int num,count=0,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        count++;
        num=num/10;
    }
    printf("%d",count);
}
