//Question: Write a program to get a number from the user, print whether that number is prime, and sum of digit is equal to 14.
/* Answer: 
      Input:59 Output: Prime & sum of digits is 14
      Input:77 Output: Not Prime but sum of digits is 14
      Input:13 Output: Prime & sum of digits is not 14
      Input:27 Output: Not Prime and sum of digits is not 14
*/

//Function name : check_prime_and_sum14

//Code

#include <stdio.h>
int check_prime_and_sum14();
int main(){
    check_prime_and_sum14();
}

int check_prime_and_sum14(){
    int num,i,sum=0,flag=0,temp,digit;
    printf("Enter a number: ");
    scanf("%d",&num);
    temp=num;
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num=num/10;
    }
    num=temp;
    for(i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            if(sum==14){
                printf("Not prime & sum is 14");
                break;
            }
            else{
                printf("Not prime but sum is not 14");
                break;
            }
        }
    }
    if(flag==0){
        if(sum==14){
            printf("Prime & sum is 14");
        }
        else{
            printf("Prime but sum is not 14");
        }
    }
}
