# exams

#include<stdio.h>
#include<stdlib.h>
  struct node
{
  int data;
struct node* link;
};
struct node* head=NULL;

 void addfirst()
{
 struct node* temp,*p;
 p=head;
 temp=(struct node*)malloc(sizeof(struct node));
  printf("\n enter the data in the first:");
  scanf("%d",&temp->data);
  temp->link=NULL;
  if(head==NULL)
   head=temp;
 else
{
temp->link=p;
 head=temp;
 }
}

void deletefirst()
{
  struct node *temp;
temp=head;
if(head==NULL)
printf("\n deletion is not possible:");
else
{
head=temp->link;
temp->link=NULL;
}
}

void deletechoice()
{
  struct node *temp,*t,*p;
 int i=0,n;
   temp=head;
  if(head==NULL)
  printf("\n deletion is not possible:");

  printf("\n enter the position to delete:");
   scanf("%d",&n);
 while(i<n)
 {
  p=temp;
 temp=temp->link;
}
t=temp->link;
p->link=t;
temp->link=NULL;
free(temp);
}

void deletelast()
{
 struct node *temp,*p;
  temp=head;
  if(head==NULL)
  printf("\n deletion is not possible:");
else
{
 while(temp->link!=NULL)
{
p=temp;
temp=temp->link;
}
p->link=NULL;
free(temp);
}
}
void addlast()
{

 struct node* temp;
 struct node* pump;

 temp=(struct node*)malloc(sizeof(struct node));
 printf("\n enter the data in last:");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL)
head=temp;
else
{
pump=head;
while(pump->link!=NULL)
{
pump=pump->link;
}
pump->link=temp;
}
}


void print()
{
struct node* temp;
temp=head;
if(head==NULL)
  printf("node is empty");
while(temp!=NULL)
{
printf("%d->",temp->data);
temp=temp->link;
}
}

void addchoice()
{
  int i,n;
 struct node *p,*tum,*temp;
 printf("\n enter the valid position:");
scanf("%d",&n);
p=head;
temp=(struct node*)malloc(sizeof(struct node));
printf("\n enter the data ur own choice:");
scanf("%d",&temp->data);
temp->link=NULL;
if(head==NULL)
head=temp;
while(i<n)
{
p=p->link;
i++;
}
tum=p->link;
 p->link=temp;
temp->link=tum;
}

void search()
{
struct node *temp;
int n,f=0;;
   printf("\n enter the data to search:");
  scanf("%d",&n);
temp=head;
if(head==NULL)
printf("\n searching not possible:");
else
{
  while(temp->link!=NULL)
{
if(temp->data==n)
{
f=1;
//printf("%d data found:",n);
break;
}
temp=temp->link;
}
if(f==1)
printf("%d data is found:");
else
printf("%d data is not found:");
}
}


void reverse()
{

struct node *prev,*curr,*next;
curr=head;
prev=NULL;
while(curr!=NULL)
{
 next=curr->link;
curr->link=prev;
prev=curr;
curr=next;
}
head=prev;
}


int main()
{
  int ch;
int  pl;
do
{
  printf("1..for addlast\n");
 printf("2..for addfirst\n");
 printf("3..for print\n");
 printf("4..for addlchoice\n");
 printf("5..for deletefirst\n");
 printf("6..for deletelast\n");
 printf("7..for deletechoice\n");
 printf("8..for searching\n");
 printf("9..for reversing\n");
 printf("10..for exit...\n");

 printf("\n enter the choice to print:");
   scanf("%d",&ch);
  switch(ch)
{
case 1:addlast();
        break;
case 2:addfirst();
        break;
case 3:print();
      break;
case 4:addchoice();
      break;
          case 4:addchoice();
      break;
case 5:deletefirst();
        break;
case 6:deletelast();
        break;
case 7:deletechoice();
        break;
case 8:search();
        break;
case 9: reverse();
        break;
case 10:exit(0);
        break;
default: printf("entered invalid choice:");


}
printf("do u want to continue:\n");
scanf("%d",&pl);
}while(pl==1);
return 0;
}
                                          
