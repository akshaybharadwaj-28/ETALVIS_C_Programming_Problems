//Question: Write a program to get two numbers from user print the HCF of those numbers.
//Input: 36 48 Output: 12 

//Code

#include <stdio.h>

int main() { 
    int i,num1,num2,hcf;
    printf("Enter 2 numbers: ");
    scanf("%d %d", &num1, &num2);
    i=num1;
    while(i<=num1){
        if(num1%i==0 && num2%i==0){
            hcf=i;
            printf("HCF is %d", hcf);
            break;
        }
        i--;
    }
}
