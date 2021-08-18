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
	struct Student s2;		//structure variable
	struct Student s3={25,1200.0,"Pratik"};
	s1.rn=10;
	s1.fees=1000.0;		//accesing the value using . (dot) operator
	strcpy(s1.name,"Akshay");
	printf("\n enter roll number,fees and name ");
	scanf("%d%lf%s",&s2.rn,&s2.fees,s2.name);
	Display(s1);
	Display(s2);
	Display(s3);
	return 0;
}
void Display(struct Student s)
{		
	printf("\n roll number =%d",s.rn);	//function 
	printf("\n fees=%lf",s.fees);
	printf("\n name =%s",s.name);
}
	
