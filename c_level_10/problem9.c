//Question: Get a string of numbers up to 50 digits and remove all leading zeros

//Code

#include <stdio.h>
int main(){
    char a[50],b[50];
    int i,j,count=0;
    printf("Enter a number: ");
    scanf("%s",a);
    i=0;
    while(a[i]=='0'){
        count++;
        i++;
    }
    for(i=count,j=0;a[i]!='\0';i++,j++){
        b[j]=a[i];
    }
    printf("%s",b);
}
