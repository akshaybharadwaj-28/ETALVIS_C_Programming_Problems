//Question: Write a program to get two numbers from user print the LCM of those numbers.
//Input: 54 72 Output: 216 

//Code

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1,num2,lcm,i;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if(num1>num2){
        for(i=num1;i>=num1;i++){
            if(i%num1==0 && i%num2==0){
                lcm=i;
                printf("LCM of %d and %d is %d", num1, num2, lcm);
                exit(0);
            }
        }
    }
    else if(num2>num1){
        for(i=num2;i>=num2;i++){
            if(i%num1==0 && i%num2==0){
                lcm=i;
                printf("LCM of %d and %d is %d", num1, num2, lcm);
                exit(0);
            }
        }
    }
}
