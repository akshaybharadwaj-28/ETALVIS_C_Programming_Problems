//Question: Write a program to get two numbers from user print the LCM of those numbers.
//Input: 54 72 Output: 216 

//Code

#include <stdio.h>

int main() { 
    int num1,num2,lcm,i;
    printf("Enter a number: ");
    scanf("%d %d", &num1, &num2);
    i=num1;
    while(i>=num1){
        if(i%num1==0 && i%num2==0){
            lcm=i;
            printf("LCM is %d", lcm);
            break;
        }
        i++;
    }
}
