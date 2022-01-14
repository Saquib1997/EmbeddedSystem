#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *link;
};

struct node *head;

void InsertBeg(int n){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = n;
    if(head == NULL){
        head = temp;
        head->link = NULL;
    }
    else{
        temp->link = head;
        head = temp;
    }
}

void InsertEnd(int n){
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = n;
    if(head == NULL){
        temp->link = NULL;
        head = temp;
    }
    else{
        temp->link = NULL;
        struct node *temp2;
        temp2 = head;
        while(temp2->link != NULL)
        temp2 = temp2->link;
        temp2->link = temp;
    }
}

void DeleteBeg(){
    struct node *temp;
    if(head == NULL)
        printf("Nothing to delete in the list\n");
    else{
        temp = head;
        head = head->link;
        free(head);
    }
}

void DeleteEnd(){
    struct node *temp;
    if(head == NULL)
        printf("Nothing to delete in the list\n");
    else{
        temp = head;
    while(temp->link != NULL)
        temp = temp->link;
        free(temp);
        }
}

void PrintList(void){
    if(head == NULL)
        printf("The Singly Linked List is Empty\n");
    else{
        struct node *temp;
        temp = head;
        printf("The Singly Linked List data's are: ");
        while(temp != NULL){
            printf("%d ",temp->data);
            temp = temp->link;
        }
        printf("\n");
    }
}

int main()
{
    int i, n;

    while(1){
        printf("\nList Operations\n");
        printf("1.Insert at Beginning\n");
        printf("2.Insert at End\n");
        printf("3.Delete from Beginning\n");
        printf("4.Delete from End\n");
        printf("5.Printing and Traversing\n");
        printf("Enter your choice : ");
        if(scanf("%d",&i)<=0){
            printf("Enter only an Integer\n");
            exit(0);
        } 
    else{
        switch (i){
            case 1:
            printf("Enter the number to insert at the beginning : ");
            scanf("%d",&n);
            InsertBeg(n);
            break;
            case 2:
            printf("Enter the number to insert at the beginning : ");
            scanf("%d",&n);
            InsertEnd(n);
            break;
            case 3:
            DeleteBeg();
            break;
            case 4:
            DeleteEnd();
            break;
            case 5:
            PrintList();
            break;
            }

    }
}
return 0;
}