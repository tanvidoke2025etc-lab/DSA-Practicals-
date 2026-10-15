\\stack using array 
#include<stdio.h> 
#define max 5 
int stack[max]; 
int top=-1; 
void push(int value){ 
if(top==max-1) 
{ 
} 
printf("\nstack is full."); 
else{ 
stack[++top]=value; 
printf("\n%d pushed to stack",value); 
} 
} 
void pop(){ 
if(top==-1){ 
printf("\nstack is underflow"); 
} 
else{ 
printf("\n%d is popped",stack[top--]); 
} 
} 
void peak(){ 
printf("\n%d is the peak element.",stack[top]); 
} 
void display(){ 
if(top==-1){ 
printf("\nstack is underflow");} 
else{ 
for(int i=max-1;i>=0;i--){ 
printf("\n%d",stack[i]); 
} 
} 
} 
int main(){ 
int value,choice,exit=0; 
do{ 
printf("\n<--------main menu--------->"); 
printf("\n1.Push"); 
printf("\n2.Pop"); 
printf("\n3.Display"); 
printf("\nEnter your choice:"); 
scanf("%d",&choice); 
switch(choice){ 
case 1: 
printf("enter item to be pushed:"); 
scanf("%d",&value); 
push(value); 
break; 
case 2: 
pop(); 
break; 
break;  
case 3: 
display(); 
break; 
default: 
printf("invalid choice"); 
} 
}while(exit==0); 
} 

\\Queue using array 
#include<stdio.h> 
#define max 5 
struct Queue{ 
int que[max]; 
int front; 
int rear; }; 
struct Queue Q; 
int QFull(){ 
if(Q.rear==max-1){ 
return 1;} 
else 
return 0; } 
int Qempty(){ 
if(Q.front==-1||(Q.front>Q.rear)){ 
return 1; } 
else 
return 0;} 
void insert(int value){ 
if(Q.front==-1){ 
Q.front++;} 
Q.que[++Q.rear]=value; 
printf("\n %d is inserted in queue.",value);} 
void delete(){ 
int value; 
value= Q.que[Q.rear--]; 
printf("\n %d is deleted",value);} 
void peak(){ 
printf("%d is the preak value:",Q.que[Q.rear]);} 
void display(){ 
printf("\n the queue looks like :"); 
for(int i=Q.front;i<=Q.rear;i++){ 
printf("\n %d",Q.que[i]);}} 
void main(){ 
int value,choice; 
Q.front=-1,Q.rear=-1; 
char ans; 
do{ 
printf("\n<---------Menu----------->"); 
printf("\n1.enqueue"); 
printf("\n2.dequeue"); 
printf("\n3.display"); 
printf("\n enter your choice:"); 
scanf("%d",&choice); 
switch(choice){ 
case 1: 
if(QFull()){ 
printf("\n queue is full.");} 
else{ 
printf("enter the value you want to insert:"); 
scanf("%d",&value); 
insert(value);} 
break; 
case 2: 
if(Qempty()){ 
printf("\n queue is empty.");} 
else{ 
delete();} 
break; 
case 3: 
display(); 
break; 
default: 
printf("\n invalid choice."); 
break; 
}printf("\n do you want to continue:"); 
scanf(" %c",&ans); 
}while(ans=='Y'||ans=='y');}
