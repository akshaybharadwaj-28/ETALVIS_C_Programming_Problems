//Question: Write a program to get a number from the user, print the total number of single digit perfect square numbers in the number.
//Input:123456789 Output:3    Input:987531  Output:2

//Code

#include <stdio.h>

int main() {
    int i,checker,count,digit;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(count=0;i!=0;){
        digit=i%10;
        i=i/10;
        for(checker=0;checker<=digit;checker++){
            if(checker*checker==digit){
                count++;
                break;
            }
        }
    }
    printf("Total number of perfect squares are %d", count);
}
