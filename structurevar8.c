/*WAP to copy one structure into another. Use concept of nested structures.
a. Create Employee structure having attributes as id, name and basic salary.
b. Create Date structure having attributes as dd,mm,yy.
c. Nest Date structure into Employee as to display joining date of employee.*/
#include<stdio.h>
#include<string.h>
struct empolyee {
	int id;
	char name[20];
	double sal;

struct data{
	int dd,mm,yy;
}d;
};
int main()
{
	struct empolyee e1;
	e1.id=100;
	strcpy(e1.name,"yogesh");
	e1.sal=200.5;
	e1.d.dd=04;
	e1.d.mm=05;
	e1.d.yy=16;
	printf("\n employee id=%d,employee name=%s and employee sal %lf",e1.id,e1.name,e1.sal);
	printf("\n joining date of employee %d/%d/%d",e1.d.dd,e1.d.mm,e1.d.yy);
	return 0;
}
	
	
	 
