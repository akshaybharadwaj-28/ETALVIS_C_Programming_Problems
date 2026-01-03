//Question: Write a program to get a number from the user, print the total number digits which are odd in number.
//Input:12345678 Output:4    Input:987531  Output:5

//Code

#include <stdio.h>

int main() {
    int i,digit,count;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(count=0;i!=0;){
        digit=i%10;
        i=i/10;
        if(digit%2==1){
            count++;
        }
    }
    printf("Total number of odd digits are %d",count);
}
