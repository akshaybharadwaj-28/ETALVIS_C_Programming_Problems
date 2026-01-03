//Question: Write a program to get a number from the user, print the total number of two digit odd numbers in the number.
//Input:12345678 Output:3    Input:987531  Output:4

//Code

#include <stdio.h>

int main() {
    int i,digit,count;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(count=0;i>10;){
        digit=i%100;
        i=i/10;
        if(digit%2==1){
            count++;
        }
    }
    printf("Total number of two digit odd numbers are %d", count);
}
