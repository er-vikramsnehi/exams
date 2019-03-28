#include<stdio.h>
#include<stdlib.h>

struct node
{
 int a;
 struct node *link;
};

struct node *start=NULL;

void addnode()
{
 struct node *temp,*ch;
 temp=(struct node*)malloc(sizeof(struct node));
 
 printf("\nEnter the new node data : ");
 scanf("%d",&temp->a);
 temp->link=NULL;

 if(start==NULL) //list is empty
 {
  start =temp;
 }
 else
 { 

  ch=start; 
  
 while(ch->link!=NULL) 
  { 
   ch=ch->link;
  }
  
  ch->link=temp;
 }


}

void deletenode()
{
 int l,option,count=0;
 struct node *temp,*ch,*s,*dl,*p,*disp,*liloc,*nav;
 
 temp=(struct node*)malloc(sizeof(struct node));
 ch=(struct node*)malloc(sizeof(struct node));
 s=(struct node*)malloc(sizeof(struct node));
 dl=(struct node*)malloc(sizeof(struct node));
 p=(struct node*)malloc(sizeof(struct node));
 disp=(struct node*)malloc(sizeof(struct node));
 liloc=(struct node*)malloc(sizeof(struct node));
 nav=(struct node*)malloc(sizeof(struct node));

 temp=start;
 
while(temp!=NULL)
{
 count++;
 temp=temp->link;
}

 while(1)
 {
  printf("\n1. Delete by Location");
  printf("\n2. Delete First");
  printf("\n3. Delete Last");
  printf("\n4. Exit");
  printf("\n5. Display");
  printf("\n6. GO TO MAIN");

  scanf("%d",&option);
   
  switch(option)
  {
   case 1: 
      printf("Enter the Location");
      scanf("%d",&l);
      if(count<l)
        { 
          printf("\nInvalid");
        }
      else
       {
         liloc=start;
         count=0;
         while(count<l)
          {
              nav=liloc;
              
              
              liloc=liloc->link;
              count++; 
          }
           
           nav->link=liloc->link;
           liloc->link=NULL;
           free(liloc);
       }
 
          break;
   case 2:
          if(start==NULL)
           {
            printf("LIST is Empty");
           }
           else
           {          
              
               start=start->link;
               
              ch=start;

              while(ch!=NULL)
                 {
                    printf("%d->",ch->a);
                    ch=ch->link;
                 } 
           }           

         break;
   case 3:
              if(start==NULL)
               {
                printf("Empty List");        
               }
              else
               {
                s=start;
                
                while(s->link!=NULL)
                { 
                     p=s;
                     s=s->link;
                }   
                p->link=NULL;
                free(s);            
                }  
            break;
   case 4:  exit(0);
            break;
   case 5:  
             if(start==NULL)
              { 
               printf("File is Empty");
              } 
              else 
             {
             disp=start;
              while(disp!=0)
               { printf("%d->",disp->a);
                 disp=disp->link;
               }  
             }
            break;
   case 6: main();
            break;
   default: printf("Wrong value");
            break;
  } 
  }
}
void InsertNode()
{
  
  struct node *t,*temp,*ch,*ad,*cnt;
  int loc,len=0,count=0;

  printf("Enter The Location : ");
  scanf("%d",&loc);
 t=(struct node*)malloc(sizeof(struct node));
 printf("\n enter the data:");
scanf("%d",&t->a);
t->link=NULL;

cnt=start;
temp=start;
 while(cnt->link!=NULL)
  {
  len++;
  cnt=cnt->link;
  }
 
  if(len<loc)
  { printf("Invalid location");    
    printf("current list have %d Length",len);
  }
  else
  {
    while(count<loc)
{  
  ad=temp;
  temp=temp->link;
   count ++;
  }
ad->link=t;
t->link=temp;
}
}


void DisplayNode()
{
 struct node *temp;
 temp=start;

if(temp==NULL)
 {
  printf("List is Empty");
 } 
 
while(temp!=NULL)
 {
  printf(" %d->",temp->a);
  temp=temp->link;
 }
}

void SearchData()
{
 struct node *temp,*ch,*ad;
 int data,status=0;
 
 ad->link=NULL;

 printf("Enter the data to be search");
 scanf("%d",&data);
 ch=start;
 while(ch!=NULL)
 {
 if((ch->a)==data)
 {
  status=1;
  ad=ch;

  break;
 }
  ch=ch->link;
 }
if(status==1)
{ 
printf("Found at location %d",ad);
}
else
{
 printf("Not found");
}
}

int nodelen()
{
 int count=0;
 struct node *temp;
 temp=start;

 while(temp!=NULL)
  {
   count++;
   temp=temp->link;
  }
 printf("Length is %d: ",count); 
 return count;
}

int main()
{
  struct node temp;
  int option;

while(1)
{
  printf("\nMENU -  Linked List");
  printf("\n1. Add Node");
  printf("\n2. Delete Node");
  printf("\n3. Insert Node");
  printf("\n4. Display Node");
  printf("\n5. Search Data");
  printf("\n6. Length");
  printf("\n7. Exit");
  
  printf("\nEnter the option : ");
  scanf("%d",&option);

switch(option)
{
case 1: addnode();
        break;
case 2: deletenode();
        break;
case 3: InsertNode();
        break;
case 4: DisplayNode();
        break;
case 5: SearchData();
        break;
case 6: nodelen();
        break;
case 7: exit(0);
        break;         
default: printf("\nInvalid Entry");
        break;
}
}
return 0;
}
