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
    int i,count,d0,d1;
    printf("Enter a number: ");
    scanf("%d", &i);
    d0=i%10;
    d1=i/10;
    for(count=2;count<i;count++){
        if(i%count==0){
            if(d0+d1==14){
                printf("Not prime but sum of digits is 14");
                exit(0);
            }
            printf("Not prime & sum of digits not 14");
            exit(0);
        }
    }
    if(d0+d1==14){
        printf("Prime & sum of digits is 14");
    }
    else{
        printf("Prime but sum of digits is not 14");
    }
}
