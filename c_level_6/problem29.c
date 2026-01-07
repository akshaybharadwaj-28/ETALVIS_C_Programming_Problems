//Question: Write a program to get three numbers from user print the LCM of those numbers.
//Input: 8 12 18 Output: 72 

//Code

#include <stdio.h>

int main() { 
    int i,num1,num2,num3,lcm;
    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    i=num1;
    while(i>=num1){
        if(i%num1==0 && i%num2==0 && i%num3==0){
            lcm=i;
            printf("LCM is %d", lcm);
            break;
        }
        i++;
    }
}
