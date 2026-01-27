//Question: Get a main string and substring. Check the substring in the main string and print the position.

/* Example: 
            string: helloetalvislearning
            substring: etal
            Answer: 6    */

//Code

#include <stdio.h>
void findstring(char* a, char* b);
int main(){
    char a[20], b[10];
    printf("Enter a string: ");
    scanf("%s",a);
    printf("Enter sub string to be found: ");
    scanf("%s",b);
    findstring(a,b);
}

void findstring(char* a, char* b){
    int i,j=0;
    for(i=0;a[i]!='\0';i++){
        for(j=0;b[j]!='\0';j++){
            if(a[i+j]!=b[j]){
                break;
            }
        }
        if(b[j]=='\0'){
            printf("%d",i+1);
            return;
        }
    }
    printf("Substring not found");
}
