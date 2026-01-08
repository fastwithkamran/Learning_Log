#include<stdio.h>
#include<stdlib.h>

typedef struct{
	int day,month,year;
}Registrationdate;//this is a struct for registration date
typedef struct{
	int day,month,year;
}Birthdate;//a struct for birth date
typedef struct{
	int id;
	char fullname[100];
	char batch[50];
	char membership[50];
	Registrationdate registration;
	Birthdate birth;
	char interest[10];
}Student;//a struct to store the student information

Student* loadDatabase(const char *filename,int *count);//filename variable is to pass that filename in which we are storing the members details,this parameter is used to increase effectiveness,count is declare to count number of students
void saveDatabase(const char *filename,Student *s,int count);
void addStudent(Student **s,int *count,const char *filename);
void updateStudent(Student *s,int count,const char *filename,int studentID);
void deleteStudent(Student **s,int* count,const char *filename,int studentID);
void viewregistrations(Student *s,int count);
void batchwisereport(Student *s,int count);
int main()
{
	int option,size,studentid,count=0;
    Student *s=loadDatabase("members",&count);//this will load the database from file and stores the details in memory
	 
	while(1){
		printf("Enter \n1-Register a new student\n2-Update membership type or batch\n3-Delete a student registration\n4-View all registrations\n5-Generate batch wise reports\n6-Exit\nOption ");
		scanf("%d",&option);
		
 		switch(option){
			case 1:
			    addStudent(&s,&count,"members");
				break;
				case 2:
					printf("Enter student id");
					scanf("%d",&studentid);
					updateStudent(s,count,"members",studentid);
		            break;
					case 3:
					printf("Enter student id");
					scanf("%d",&studentid);
					deleteStudent(s,&count,"members",studentid);
					break;
						case 4:
							viewregistrations(s,count);
							break;
								case 5:
									batchwisereport(s,count);
									break;
									case 6:
										return 0;
										break;
									}
										
		}
	}

Student* loadDatabase(const char *filename,int *count){
	Student temp;

	FILE *file=	fopen(filename,"rb");//rb is to open file in binary read mode
	if(file==NULL){
		*count=0;
		printf("Error file not opened");
		return NULL;
	}
	
	while(fread(&temp,sizeof(Student),1,file)==1){
		(*count)++;
	}
	if(*count==0){
    fclose(file);
	return NULL;
}
	Student *s=(Student*) malloc((*count)*sizeof(Student));//assigning memory to *s 
	if(s==NULL){
		printf("Memory allocation error");
		fclose(file);
		*count=0;
		 return NULL;//this will return NULL since there is not written in assignment that program will terminate
	}
	rewind(file);//move the pointer to start of the file
	fread(s,sizeof(Student),*count,file);//reading the line on the file storing it in s 
	fclose(file);//closing that file
	return s;
}

void saveDatabase(const char *filename,Student *s,int count){
	
	FILE *file=fopen(filename,"wb");//wb is define as binary writing mode
	if(file==NULL){
		printf("Error file cant be opened");
		return;
	}
	if(fwrite(s,sizeof(Student),count,file)!=count){//saving the records in the file
		printf("Error file cannot write");
	}
	fclose(file);
	return;
}
	
void addStudent(Student **s,int* count,const char *filename){
	Student stu;//a local declaration of struct
    int i;
    printf("Enter id ");
    scanf("%d",&stu.id);
    
 for(i=0;i<*count;i++){//to check id is not duplicate
 	if((*s)[i].id==stu.id){
 	printf("ID is duplicate");
 	return;
	 }
 }
    getchar();//to remove the \n from previous scanf
    printf("Enter full name ");
    fgets(stu.fullname,sizeof(stu.fullname),stdin);
    stu.fullname[strcspn(stu.fullname,"\n")]='\0';
	printf("Enter membership type");
	scanf("%s",stu.membership);
	printf("Enter Registration Date Day-Month-Year");
    scanf("%d %d %d",&stu.registration.day,&stu.registration.month,&stu.registration.year);
    printf("Enter date of birth Day-Month-Year");
	scanf("%d %d %d",&stu.birth.day,&stu.birth.month,&stu.birth.year);
	printf("Enter interest");
	scanf("%s",stu.interest);
	*s=(Student*) realloc(*s,(*count+1)*sizeof(Student));//reallocating the memory of s with student datatype
	if(*s==NULL){
		printf("Memory reallocation failed");
		return;
	}
	(*s)[*count]=stu;
	(*count)++;//updating the counter of students
	
	saveDatabase(filename,*s,*count);
	return;
}
void updateStudent(Student *s, int count, const char *filename, int studentID){
	int option,find=0;//find to check if that id is found or not
	int i;
	for(i=0;i<count;i++){
		if(s[i].id==studentID){
			find=1;
			printf("Update 1-Batch or 2-Membership ");
			scanf("%d",&option);
			if(option==1){
				printf("Enter new batch ");
				scanf("%s",s[i].batch);
			}
			else{
				printf("Enter membership type ");
				scanf("%s",s[i].membership);
			}
			break;
		}
	}
	if(find==0){
		printf("Student id not find");
		return;
	}
	saveDatabase(filename,s,count);
	return;
}
void deleteStudent(Student **s,int* count,const char *filename,int studentID){
	int find=0;
	int i,j;
	for(i=0;i<*count;i++){
		if((*s)[i].id==studentID){
			find=1;
			for(j=i;j<*count-1;j++)
			{
				(*s)[j]=(*s)[j+1];
			}
			(*count)--;
			*s=(Student*) realloc(*s,(*count)*sizeof(Student));
			break;
		}
	}
	if(find==0)
	{
		printf("Student id not found");
		return;
	}
	saveDatabase(filename,*s,*count);
	return;
} 
void viewregistrations(Student *s,int count){
	int i;

	for(i=0;i<count;i++){
	printf("\nId=%d Name=%s Batch=%s Membershiptype=%s Registration Date=%d-%d-%d Birth Date=%d-%d-%d Interest=%s",s[i].id,s[i].fullname,s[i].batch,s[i].membership,s[i].registration.year,s[i].registration.month,s[i].registration.day,s[i].birth.year,s[i].birth.month,s[i].birth.day,s[i].interest);
  }   
}
void batchwisereport(Student *s,int count){
	int option,i;
	char batch[50];
	printf("Enter batch ");
	scanf("%s",batch);
	printf("Enter 1-IEEE 2-ACM 3-both");
	scanf("%d",&option);
	
	for(i=0;i<count;i++){
		if(strcmp(s[i].batch,batch)==0){//checking the batch
			if(option==1){
			if(strcmp(s[i].membership,"IEEE")==0){
			printf("Id=%d Name=%s\n",s[i].id,s[i].fullname);
			}
		}
		if(option==2){
		if(strcmp(s[i].membership,"ACM")==0){
		printf("Id=%d Name=%s\n",s[i].id,s[i].fullname);
    } 
  }
		if(option==3){
		printf("Id=%d Name=%s\n",s[i].id,s[i].fullname);
	}
 }    
}
}

