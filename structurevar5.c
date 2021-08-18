//WAP to demonstrate typedef keyword.
#include<stdio.h>
typedef int digit;
struct Shoes{
	digit size;
	char name[20];
	double price;
};
int main()
{
	struct Shoes s1[5];
	for(digit i=1;i<5;i++)
	{
	
		printf("\n enter the size of shoes ,name and price");
		scanf("%d%s%lf",&s1[i].size,&s1[i].name,&s1[i].price);
	}
	for(digit i=1;i<5;i++)
	{
		display(s1[i]);
	}
	return 0;
}
int display(struct Shoes s1)
{
	printf("\n the size of shoes is %d",s1.size);
	printf("\n the name of shoes is %s",s1.name);
	printf("\n the price of shoes is %lf",s1.price);
}
