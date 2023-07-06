#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head=NULL;

void f_insert()
{
struct node *newnode,*temp;
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element to be inserted\n");
scanf("%d",&newnode->data);
newnode->next = newnode;
if(head==NULL)
{
  head=newnode;
}

else
{
  temp=head;
  newnode->next=head;
  do
  {
    temp=temp->next;
  }while(temp->next!=head);
  temp->next=newnode;
  head=newnode;
}
return;
}
void b_insert()
{

struct node *newnode,*temp;
if(head==NULL)
  f_insert();
else
{
newnode=(struct node*)malloc(sizeof(struct node));
printf("enter the element to be inserted\n");
scanf("%d",&newnode->data);
newnode->next=newnode;
temp=head;
while(temp->next!=head)
{
  temp=temp->next;
}
temp->next=newnode;
newnode->next=head;
}
return;
}
void b_delete()
{
struct node *temp,*prev;
if(head==NULL)
{
 return;
}
if(head->next==head)
{
  printf("the deleted node is %d\n",head->data);
  head=NULL;
  return;
}
else
{
 temp=head;
  while(temp->next!=head)
  {
    prev=temp;
    temp=temp->next;
 }
 prev->next=head;
 free(temp);
}
  return;
}

void f_delete()
{
struct node *temp,*last;
last=head;
if(head==NULL)
{
 printf("the list is empty\n");
 return;
}
else if(head->next==head)
{
  printf("the deleted node is %d\n",head->data);
  head=NULL;
  return;
}

else
{
while(last->next!=head)
  last=last->next;
temp=head;
head=head->next;
printf("the deleted node is %d\n",temp->data);
free(temp);
last->next=head;
}
}
void display()
{
  struct node *temp;
  temp=head;
  if(head==NULL)
  {
    printf("the list is empty\n");
    return;
  }
 do
  {
    printf("%d->",temp->data);
    temp=temp->next;
  }while(temp!=head);
  printf("\n");
  return;
}

int main()
{
  int choice;

  do
  {
   printf("do you want to continue\n 1-insert in the front \t");
   printf("2-insert at the back\t3-delete from front");
   printf("4-delete from back\n5-exit\n");
   scanf("%d",&choice);
   switch(choice)
   {
     case 1:
	     f_insert();
	     display();
	     break;

     case 2: b_insert();
	     display();
	     break;
     case 3: f_delete();
	     display();
	     break;

     case 4: b_delete();
	     display();
	     break;
   }
   }while(choice!=5);
printf("");
return 0;
}
