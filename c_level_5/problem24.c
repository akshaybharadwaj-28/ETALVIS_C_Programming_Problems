//Question: Write a program to get a number from the user, print the total number of two digit perfect square numbers in the number.
//Input:163496481 Output:4    Input:364925  Output:4

//Code

#include <stdio.h>

int main() {
    int i,count,checker,digit;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(count=0;i>10;){
        digit=i%100;
        i=i/10;
        for(checker=0;checker<digit;checker++){
            if(checker*checker==digit){
                count++;
                break;
            }
        }
    }
    printf("Total number of two digit perfect squares are %d", count);
}
