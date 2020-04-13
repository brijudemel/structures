#include <stdio.h>
#include<string.h>
struct employees 
{ 
   char name[50]; 
   int emp_no; 
   char department_name[50]; 
   int salary; 
};
int main()
{
	int i,j;
	struct employees employee[20];
	for(i=0;i<20;i++)
	{
		printf("Enter the employee %d name: \n",(i+1));
		scanf("%s",employee[i].name);
		printf("Enter the employee %d ID number: \n",(i+1));
		scanf("%d",&employee[i].emp_no);
		printf("Enter the employee %d Department name: \n",(i+1));
		scanf("%s",employee[i].department_name);
		printf("Enter the employee %d salary: \n",(i+1));
		scanf("%d", &employee[i].salary);		
	}
	printf("Enter the employee number of whom details is requried: \n");
	scanf("%d",&j);
	printf("name: %s\n",employee[j-1].name);
	printf("ID number: %d\n",employee[j-1].emp_no);
	printf("Department name: %s \n",employee[j-1].department_name);
	printf("salary: %d\n",employee[j-1].salary);
	return 0;
}
