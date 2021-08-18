#include<stdio.h>
#include<string.h>
struct Student{
	int rn;
	double fees;		//structure member
	char name[10];
};
int main()
{
	struct Student s1;
	struct Student* ptr;
	ptr=&s1;
	ptr->rn=10;
	ptr->fees=1000.0;		//accesing the value using . (dot) operator
	strcpy(ptr->name,"Pratik");
	
	Display(ptr);
	//Display(s2);
	//Display(s3);
	return 0;
}
void Display(struct Student* ptr)
{		
	printf("\n roll number =%d",ptr->rn);	//function 
	printf("\n fees=%lf",ptr->fees);
	printf("\n name =%s",ptr->name);
}

