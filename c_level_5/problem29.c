//Question: Write a program to get three numbers from user print the LCM of those numbers.
//Input: 8 12 18 Output: 72 

//Code

#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1,num2,num3,i,lcm;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    for(i=num1;i>=num1;i++){
        if(i%num1==0 && i%num2==0 && i%num3==0){
            lcm=i;
            printf("LCM of %d, %d and %d is %d", num1, num2, num3, lcm);
            exit(0);
        }
    }
}
