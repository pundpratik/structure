//Create a structure Student. Create array of 10 students using MACRO and display data in tabular form.
#include<stdio.h>
#define size 10
struct student{
	int rollnum;
	char name[size];
	float per;
};
int main()
{
	struct student s[size];
	int i;
	for(i=1;i<=size;i++)
	{
		printf("\n enter student roll number ,name and percentage");
		scanf("%d%s%f",&s[i].rollnum,s[i].name,&s[i].per);
	}
	 for(i=1;i<=size;i++)
	 {
	 	Display(s[i]);
	 }
	return 0;
}
void Display(struct student s)
{		
	printf("\n roll number =%d",s.rollnum);	//function 
	
	printf("\n name =%s",s.name);
	printf("\n fees=%lf",s.per);
}
