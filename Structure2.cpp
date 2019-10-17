#include <stdio.h>
#include <stdlib.h>
struct sit 
{
	char name[20];
	char div;
	char prn[15];
};
int main()
{
	struct sit a[4];
	int i;
	printf("Enter student details:\n");
	for(i=0;i<=3;i++)
	{
        printf("\n Name: ");
	    scanf("%s", &a[i].name);
    	printf("\n Division: ");
    	scanf("%s", &a[i].div);
    	printf("\n PRN: ");
    	scanf("%s", &a[i].prn);
    }
    printf("\n Details of the student are:");
	for(i=0;i<=3;i++)
	{
    	printf("\nName:%s", a[i].name);
    	printf("\nDivision:%c", a[i].div);
    	printf("\nPRN:%s", a[i].prn);
    	printf("\n");
   }
}

