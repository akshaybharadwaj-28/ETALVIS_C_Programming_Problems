//Question: Write a program to get a number from the user, print the total number digits which are odd in number.
//Input:12345678 Output:4    Input:987531  Output:5

//Code

#include <stdio.h>

int main() { 
    int num,digit,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        digit=num%10;
        if(digit%2==1){
            count++;
        }
        num=num/10;
    }
    printf("Total no. of odd numbers: %d", count);
}
