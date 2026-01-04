//Question: Write a program to get two numbers from user print the HCF of those numbers.
//Input: 36 48 Output: 12 

//Code

#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,num1,num2,hcf;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    for(i=num2;i<=num2;i--){
        if(num1%i==0 && num2%i==0){
            hcf=i;
            printf("HCF of %d and %d is %d", num1, num2, hcf);
            exit(0);
        }
    }
}
