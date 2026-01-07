//Question: Write a program to get a number from the user, print the total number of single digit perfect square numbers in the number.
//Input:123456789 Output:3    Input:987531  Output:2

//Code

#include <stdio.h>

int main() { 
    int num,i,digit,count=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        digit=num%10;
        i=0;
        while(i<=digit){
            if(i*i==digit){
                count++;
                break;
            }
            i++;
        }
        num=num/10;
    }
    printf("Total perfect squares are %d", count);
}
