//Question:- Get a two digit number from the user, make the one's digit zero, then print it.
//Example:- Input:95 Output:90    Input:18 Output:10

//Code

#include <stdio.h>

int main() {
    int x,res=0,num=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    num=x%10;
    num=num*0;
    x=x/10;
    res=(x*10)+num;
    printf("Result = %d",res);
}
