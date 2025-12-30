//Question:- Get a three digit number from the user and print the reverse of the number.
//Example:- Input:561 Output:165    Input:859 Output:958

//Code

#include <stdio.h>

int main() {
    int x,res=0,ones=0,tens=0;
    printf("Enter Number: ");
    scanf("%d",&x);
    ones=x%10;
    res=(ones*100);
    x=x/10;
    tens=x%10;
    res=res+(tens*10);
    x=x/10;
    res=res+x;
    printf("Result = %d",res);
}
