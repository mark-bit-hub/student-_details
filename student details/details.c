# include <stdio.h>
# include "library.h"
# define size 10
# pragma pack(1)
struct student{
	char name[];
	int admn_no;
}co[size];
int main()
{
	int i;
	for(i=1;i<size+1;i++)
	{
		printf("Enter name for student %d :\n",i);
		scanf("%s",co[i].name);
		printf("Enter admission number for student %d :\n",i);
		scan("%d",&co[i].admn_no);
	}
	printf("names\t\tadmission no\n");
	for(i=1;i<size+1;i++)
	{
		display(co[i].name,co[i].admn_no);
	}
	
return 0;
}