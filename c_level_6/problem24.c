//Question: Write a program to get a number from the user, print the total number of two digit perfect square numbers in the number.
//Input:163496481 Output:4    Input:364925  Output:4

//Code

#include <stdio.h>

int main() { 
    int num,i,digit,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>10){
        digit=num%100;
        i=0;
        while(i<=num){
            if(i*i==digit){
                count++;
                break;
            }
            i++;
        }
        num=num/10;
    }
    printf("Total no. of 2 digit perfect squares: %d", count);
}
