//Question: Write a program to get a number from the user, print whether that number is prime, and sum of digit is equal to 14.
/* Answer: 
      Input:59 Output: Prime & sum of digits is 14
      Input:77 Output: Not Prime but sum of digits is 14
      Input:13 Output: Prime & sum of digits is not 14
      Input:27 Output: Not Prime and sum of digits is not 14
*/

//Code

#include <stdio.h>
#include <stdlib.h>

int main() { 
    int num,i,digit,flag,temp,sum;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
    sum=0;
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    i=2;
    num=temp;
    while(i<num){
        flag=0;
        if(num%i==0){
            flag=1;
            if(sum==14){
            printf("Not prime but sum of digits is 14");
            exit(0);
            }
            else{
                printf("Not prime & sum of digits is not 14");
                exit(0);
            }
        }
        i++;
    }
    if(flag==0 && sum==14){
        printf("Prime & sum of digits is 14");
    }
    else{
        printf("Prime but sum of digits is not 14");
    }
}
