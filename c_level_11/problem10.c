//Question: Write a function to concatenate two strings to another.

//Code

#include <stdio.h>
void strcon(char* a, char* b, char *c);
int main(){
    char a[10],b[10],c[20];
    printf("Enter string 1: ");
    scanf("%s",a);
    printf("Enter string 2: ");
    scanf("%s",b);
    strcon(a,b,c);
}

void strcon(char* a, char* b, char* c){
    int i=0,j=0;
    while(a[i]!='\0'){
        c[i]=a[i];
        i++;
    }
    while(b[j]!='\0'){
        c[i]=b[j];
        i++;
        j++;
    }
    printf("%s",c);
}
