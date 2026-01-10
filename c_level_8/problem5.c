//Question: Write a program to get a number from user print the total number of digits in that number.
//Input: 123456 Output:6    Input:76895439 Output:8    Input:675 Output:3

//Function name : count_total_digits

//Code

#include <stdio.h>
int count_total_digits(int);
int main(){
    int y,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    y=count_total_digits(num);
    printf("%d",y);
}
int count_total_digits(int num){
    int digit,count=0;
    while(num!=0){
        digit=num%10;
        count++;
        num=num/10;
    }
    return count;
}
