//Question: Write a program to get a number from the user, print the total number of two digit odd numbers in the number.
//Input:12345678 Output:3    Input:987531  Output:4

//Code

#include <stdio.h>

int main() { 
    int num,i,digit,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num>10){
        digit=num%100;
        if(num%2==1){
            count++;
        }
        num=num/10;
    }
    printf("Total no. of two digit odd nos: %d", count);
}
