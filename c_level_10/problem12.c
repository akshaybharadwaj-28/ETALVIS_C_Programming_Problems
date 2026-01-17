//Question: Convert an integer array of up to 50 digits to a character array and print using "printf("%s", ....);"

/*Example: 
          Array - 1 4 5 8 7 6 3
          Answer: 1458763
*/

//Code

#include <stdio.h>
int main(){
    int i,count,a[50];
    char res[51];
    printf("Enter number of digits: ");
    scanf("%d", &count);
    printf("Enter a number: ");
    for(i=0;i<count;i++){
        scanf("%d", &a[i]);
    }
    for(i=0;i<count;i++){
        res[i]=a[i]+'0';
    }
    printf("%s",res);
}
