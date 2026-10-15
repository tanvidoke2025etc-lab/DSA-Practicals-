#include <stdio.h> 
typedef struct student 
{ 
int roll_no; 
char name[20]; 
float marks; 
} student; 
void getStudentDetails(student *s) 
{ 
} 
printf("\nEnter Student Roll no.: "); 
scanf("%d", &s->roll_no); 
printf("Enter Student Name: "); 
scanf("%s", s->name); 
printf("Enter Student Marks: "); 
scanf("%f", &s->marks); 
void displayStudentDetails(student s) 
{ 
printf("\n--- Student Details ---\n"); 
printf("Student Roll no.: %d\n", s.roll_no); 
printf("Student Name: %s\n", s.name); 
printf("Student Marks: %.2f\n", s.marks); 
} 
void searchStudent(student s[], int count, int targetRollNo) 
{ 
int found = 0;                                  
for (int i = 0; i < count; i++) 
{ 
if (s[i].roll_no == targetRollNo) 
{ 
}} 
displayStudentDetails(s[i]); 
found = 1; 
break;  
if (!found) 
{ 
printf("\nStudent with Roll No. %d not found.\n", 
targetRollNo); 
}} 
int main() 
{ 
student s[5]; 
int choice; 
int rollToSearch; 
do 
{ 
printf("\n===== Student Menu =====\n"); 
printf("1. Get Student Details (for 5 students)\n"); 
printf("2. Display All Student Details\n"); 
printf("3. Search Student by Roll No.\n"); 
printf("4. Exit\n"); 
printf("Enter your choice: "); 
scanf("%d", &choice); 
switch(choice) 
{ 
case 1: 
for (int i = 0; i < 5; i++) 
{ 
} 
printf("\n--- Entering details for Student %d ---", i + 1); 
getStudentDetails(&s[i]); 
printf("\nAll 5 student details entered successfully!\n"); 
break; 
case 2: 
for (int i = 0; i < 5; i++) 
{ 
displayStudentDetails(s[i]); 
} 
break; 
case 3: 
printf("\nEnter Roll Number to Search: "); 
scanf("%d", &rollToSearch); 
searchStudent(s, 5, rollToSearch); 
break; 
case 4: 
printf("\nExiting program...\n"); 
break; 
default: 
printf("\nInvalid choice! Please try again.\n"); 
} 
} while(choice != 4); 
return 0; 
}
