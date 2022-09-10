/*LINKED LIST */

#include<stdio.h>
#include<stdlib.h>

// node structure for single linked list
struct node
{
int data;
struct node *ref;	
};

struct node *head;

void binsert();// insertion at begin
void display();// shows how many elements in the list

void main()
{
	  while(1){
        int c;
        printf("enter choice");
        scanf("%d",&c);
        if(c==1){
            binsert();
        }else if(c==2){
            display();   
        }else{
            printf("ended;");
            exit(1);
        }
    }
}

void display()
{
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
		printf(" There are no nodes in the list \n");
	else
	{
		printf("Elements in the list are .... \n");
		while(ptr!=NULL)
		{
			printf("%d ",ptr->data);
			ptr=ptr->ref;
		}
	}
}

void binsert() // function definition or body
{
	struct node *ptr;
	int ele;
	ptr=(struct node *)malloc(sizeof(struct node));
	
	if(ptr==NULL)
		printf(" We can't insert any elements \n");
	else
	{
		printf("Enter any element to insert \n");
		scanf("%d",&ele);
		ptr->data=ele;
		ptr->ref=head;
		head=ptr;
		printf("Element is inserted successfully \n");
	}
}
