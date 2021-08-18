//Create a structure Employee. Pass it to a function by value.
#include<stdio.h>
typedef int digit;
struct Employee{
	digit id;
	char name[20];
	double salary;
};
int main()
{
	struct Employee s1[5];
	for(digit i=1;i<5;i++)
	{
	
		printf("\n enter the id of employees,name and salary");
		scanf("%d%s%lf",&s1[i].id,&s1[i].name,&s1[i].salary);
	}
	for(digit i=1;i<5;i++)
	{
		display(s1[i]);
	}
	return 0;
}
int display(struct Employee s1)
{
	printf("\n the id of employeeis %d",s1.id);
	printf("\n the name of employee is %s",s1.name);
	printf("\n the salary of employee is %lf",s1.salary);
}
