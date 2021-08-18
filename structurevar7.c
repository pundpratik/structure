//Demonstrate use of union and find out size of union variable and the attributes from union.
#include<stdio.h>
union size //union declaration
{
int x;					//union contain only one value which need large amount of memory
double y;

};
int main()
{
	union size s1;
	s1.x=10;
	s1.y=100.0;
	printf("%d",s1.x);
	printf("\n %lf",s1.y);//it shows the value of y bcz double need larger amount of memory than int; 
	return 0;
}
