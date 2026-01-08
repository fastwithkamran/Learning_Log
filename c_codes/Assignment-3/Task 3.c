#include<stdio.h>
typedef struct{
	int id;
	char name[50];
	char designation[50];
	float salary;
}Employee;

void displayEmployees(Employee *emp,int numofemployee);
void findHighestSalary(Employee *emp,int numofemployee);
void searchEmployee(Employee *emp,int numofemployee);

int main()
{
	int numofemployee,i,option;
    	
	printf("Enter number of employees ");
	scanf("%d",&numofemployee);	
	Employee emp[numofemployee];
	
	for(i=0;i<numofemployee;i++)
	{
		printf("Enter Employee %d details: ",i+1);
		printf("\nEnter employee id: ");
		scanf("%d",&emp[i].id);
		printf("Enter employee name: ");
		scanf("%s",emp[i].name);
		printf("Enter employee designation: ");
		scanf("%s",emp[i].designation);
		printf("Enter employee salary: ");
		scanf("%f",&emp[i].salary);
	}
	while(1){
	printf("\nDo you want to \n1 Display all employe details\n2 Display employee with highest salary\n3 Search employee\n4 Exit\nOption: ");
	scanf("%d",&option);
	switch(option){
		case 1:
			displayEmployees(emp,numofemployee);
			break;
			case 2:
				findHighestSalary(emp,numofemployee);
				break;
				case 3:
					searchEmployee(emp,numofemployee);
					break;
					case 4:
					return 0;
					break;	
	}
}
return 0;
}

void displayEmployees(Employee *emp,int numofemployee){
	
	int i;
	printf("\nId\t\t\tName\t\t\tDesignation\t\t\tSalary");
	for(i=0;i<numofemployee;i++)
	{
		printf("\n%d\t\t\t%s\t\t\t%s\t\t\t%.2f",emp[i].id,emp[i].name,emp[i].designation,emp[i].salary);
	}
}
void findHighestSalary(Employee *emp,int numofemployee){
	 
	float max=emp[0].salary;
	int empnumber=0,i;
	for(i=0;i<numofemployee;i++)
	{
		if(max<emp[i].salary){
			max=emp[i].salary;
			empnumber=i;
		}
	}
	printf("\nid=%d\nname=%s\ndesignation=%s\nsalary=%.2f",emp[empnumber].id,emp[empnumber].name,emp[empnumber].designation,emp[empnumber].salary);
	}
	
void searchEmployee(Employee *emp,int numofemployee){
	int option,i,id;
	char name[50];
	printf("\nDo you want to search by 1-id or 2-name ");
	scanf("%d",&option);
	
	switch(option){
		case 1:
		printf("\nEnter id ");
		scanf("%d",&id);
		for(i=0;i<numofemployee;i++){
			if(emp[i].id==id)
			{
				printf("\nName=%s\nDesignation=%s\nSalary=%f\n",emp[i].name,emp[i].designation,emp[i].salary);
				break;
			}
		}
		break;
		case 2:
			printf("Enter Name ");
			scanf("%s",name);
			
			for(i=0;i<numofemployee;i++){
				if(strcmp(emp[i].name,name)==0){//using string comparison that if it result 0 then name mathces
				printf("\nId=%d\nDesignation=%s\nSalary=%.2f\n",emp[i].id,emp[i].designation,emp[i].salary);
				break;
				}
			}
			break;
	}
}/*to explain that if company wants to give 10% bonus to employees when an employee salary is less than 50000.We can use 
a function that take the array of employee structures by reference through this we can directly modify the salaries in 
quick way.We will pass the array to function, then loop through the employees,check the salary condition and update that 
salayry,and it will automatic modify without returning the array.*/
