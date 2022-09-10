#include<stdio.h>
#include<stdlib.h>

// node structure for single linked list
struct node
{
int data;
struct node *ref;	
};

struct node *head;

void binsert();
void display();
void search();

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
        }else if(c==3){
            search();   
        }else{
            printf("ended;");
            exit(1);
        }
    }
}
void search()
{
    int d,i;
    printf("enter search element");
    scanf("%d",&d);
	struct node *ptr;
	ptr=head;
	if(ptr==NULL)
		printf(" There are no nodes in the list \n");
	else
	{
		printf("Elements in the list are .... \n");
		i=0;
		while(ptr!=NULL)
		{
			if(ptr->data == d){
			    printf("element found at %d\n",i+1);;
			}
			ptr=ptr->ref;
			i++;
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
