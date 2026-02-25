/*
Question: Create a link list for the following structure and get user inputs for id, maths mark and science mark. Once user inputs id as -1, exit the input mode and display all the entries.
          struct student{
          int id;
          int maths;
          int science;
          struct student *next;
          }
*/

//Code

#include <stdio.h>
#include <stdlib.h>

struct student{
    int id;
    int maths;
    int science;
    struct student *next;
};

int main(){
    struct student *head=NULL;
    struct student *current=NULL;
    struct student *newnode=NULL;
    int i=1;

    while(1){
        newnode=(struct student*)malloc(sizeof(struct student));
        printf("Enter student %d id: ",i);
        scanf("%d",&newnode->id);
        if(newnode->id==-1){
            free(newnode);
            break;
        }
        printf("Enter student %d maths mark: ",i);
        scanf("%d",&newnode->maths);
        printf("Enter student %d science mark: ",i);
        scanf("%d",&newnode->science);
        newnode->next=NULL;
        if(head==NULL){
            head=newnode;
            current=newnode;
        }else{
            current->next=newnode;
            current=newnode;
        }
        i++;
    }

    printf("\n Student Data \n");
    current=head;
    i=1;
    while(current!=NULL){
        printf("Student %d id: %d\n",i,current->id);
        printf("Student %d maths mark: %d\n",i,current->maths);
        printf("Student %d science mark: %d\n",i,current->science);
        printf("\n");
        current=current->next;
        i++;
    }
    return 0;
}
