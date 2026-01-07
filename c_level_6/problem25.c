//Question: Write a program to get a number from the user, print the total number of single digit prime numbers in the number.
//Input:163496481 Output:1    Input:364925  Output:3

//Code

#include <stdio.h>

int main() { 
    int num,flag,i,count=0,digit;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        digit=num%10;
        i=2;
        if(digit==1){
            flag=1;
        }
        while(i<digit){
            flag=0;
            if(digit%i==0){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0){
            count++;
        }
        num=num/10;
    }
    printf("Total no. of single digit prime nos: %d", count);
}
