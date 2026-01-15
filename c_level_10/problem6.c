//Question: Get an integer and print each digit as character. Print one character on one line.

//Code

#include <stdio.h>
int main(){
    int n,i,count,digit,temp;
    char a[10];
    printf("Enter a number: ");
    scanf("%d",&n);
    temp=n;
    i=0;
    count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    n=temp;
    a[count]=0;
    for(i=count-1;i>=0;i--){
        digit=n%10;
        digit=digit + '0';
        a[i]=digit;
        n/=10;
    }
    for(i=0;i<count;i++){
        printf("%c\n",a[i]);
    }
}
