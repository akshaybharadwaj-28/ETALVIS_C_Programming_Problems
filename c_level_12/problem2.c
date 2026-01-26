//Question: Get a string and a character from a user, find all the positions where the character is present, and print it.

/*Example: string: helloetalvislearning
           character: e
           Answer: 2, 6, 14 */

//Code

#include <stdio.h>
void findpos(char* a, char m);
int main() {
    char a[20], m;
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter character to be found: ");
    scanf(" %c",&m);
    findpos(a,m);
}

void findpos(char* a, char m){
    int i=0;
    while(a[i]!='\0'){
        if(a[i]==m){
            printf("%d ",i+1);
        }
        i++;
    }
}
