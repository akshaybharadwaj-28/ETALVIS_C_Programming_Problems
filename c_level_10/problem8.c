//Question: Get a string of numbers upto 50 digits and validate the number.

//Code

#include <stdio.h>
int main() {
    char a[50];
    int i,flag;
    printf("Enter a number: ");
    scanf("%s",a);
    i=0;
    while(a[i]!='\0'){
        flag=0;
        if(a[i]>='0' && a[i]<='9'){
            flag=1;
        }
        if(!(a[i]>='0' && a[i]<='9')){
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1){
        printf("Valid number");
    }
    else if(flag==0){
        printf("Invalid number");
    }
}
