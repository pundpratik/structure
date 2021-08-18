//Create a structure Employee. Accept data for 5 employees and display it.
#include<stdio.h>
typedef int prat
struct Employee{
	prat id;
	char name[10];
	double sal;
};
int main()
{
	struct Employee e[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("\n enter emplyee id, name and salary ");
		scanf("%d%s%lf",&e[i].id,e[i].name,&e[i].sal);
	}
	for(i=0;i<5;i++)
	{
	 	Display(e[i]);
	 }
	return 0;
}
void Display(struct Employee e)
{		
	printf("\n id =%d",e.id);	//function 
	
	printf("\n name =%s",e.name);
	printf("\n salary=%lf",e.sal);
}

