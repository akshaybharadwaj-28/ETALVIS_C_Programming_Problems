//Question: Write a program to get a number from the user, print the total number of single digit prime numbers in the number.
//Input:163496481 Output:1    Input:364925  Output:3

//Code

#include <stdio.h>

int main() {
    int i,count,result=0,digit,flag;
    printf("Enter a number: ");
    scanf("%d", &i);
    for(;i!=0;){
        digit=i%10;
        i=i/10;
        flag=0;
        if(digit==1){
            flag=1;
        }
        for(count=2;count<digit;count++){
            if(digit%count==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            result++;
        }
    }
    printf("Total number of single digit prime numbers are %d", result);
}
