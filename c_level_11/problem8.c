//Question: Write a function to compare two strings. Print Success or Failure.

//Code

#include <stdio.h>
void strcomp(char *a, char *b);
int main(){
    char a[10],b[10];
    printf("Enter string 1: ");
    scanf("%s",a);
    printf("Enter string 2: ");
    scanf("%s",b);
    strcomp(a,b);
}

void strcomp(char *a, char *b){
    int i=0,flag=1;
    while(a[i]!='\0'){
        if(a[i]==b[i]){
            flag=1;
        }
        else if(a[i]!=b[i]){
            flag=0;
        }
        i++;
    }
    if(flag==1){
        printf("Success");
    }
    else if(flag==0){
        printf("Failure");
    }
}
