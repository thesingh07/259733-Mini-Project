#include<stdio.h>

//Using structure to define the schema of our records
struct students {
    char name[50];
    int standard;
    int rollno;
    long unsigned int phoneNo;
} stu;

//Function to add records in file
void add(){
    FILE *fp;
    fp= fopen("StudentRC","a");
    printf("Enter Name: ");
    scanf("%s",&stu.name);
    printf("Enter Standard: ");
    scanf("%d",&stu.standard);
    printf("Enter Roll Number: ");
    scanf("%d",&stu.rollno);
    printf("Enter Phone Number: ");
    scanf("%ld",&stu.phoneNo);
    printf("\n******Data added successfully******");
    fwrite(&stu,sizeof(stu),1,fp);
    fclose(fp);
}

//Function to delete record from our file
void deleteRec(){
    FILE *fp1;
    FILE *fp2;
    int roll,a;
    printf("Enter Roll number you want to delete: ");
    scanf("%d",&roll);
    //To check whether record is available
        if(checkrollno(roll) == 0){
            printf("Incorrect Roll number \n");
        }
        else {
            fp1=fopen("StudentRC","r");
            fp2=fopen("DelFile","w");
                while(fread(&stu,sizeof(stu),1,fp1)){
                    a=stu.rollno;
                    if(a != roll) fwrite(&stu,sizeof(stu),1,fp2);
                }
            fclose(fp1);
            fclose(fp2);
        //Delete Record
        fp1=fopen("StudentRC","w");
        fp2=fopen("DelFile","r");
            while(fread(&stu,sizeof(stu),1,fp2)){
            fwrite(&stu,sizeof(stu),1,fp1);
        }
        printf("\n******Data deleted successfully******");
        fclose(fp1);
        fclose(fp2);
        }
}

//Function to find any record from roll number
void find(){
	FILE *fp3;
	int roll,a,check;
	printf("Enter Roll number you want to find: ");
	scanf("%d",&roll);
	//Check if roll number exist
	check=checkrollno(roll);
	if(check == 0){
		printf("Incorrect Roll number \n");
	}
	else{
		fp3=fopen("StudentRC","r");
		while (fread(&stu,sizeof(stu),1,fp3)){
			a=stu.rollno;
			if(a==roll){
				printf("\nName: %s",stu.name);
				printf("\nStandard: %d",stu.standard);
				printf("\nRoll Number: %d",stu.rollno);
				printf("\nPhone Number: %ld",stu.phoneNo);
			}
		}
	fclose(fp3);
	}
}
//Function to generate report i.e. records of all students in our file
void show(){
	FILE *fp4;
	fp4=fopen("StudentRC","r");
	printf("\nName \t Standard \t Roll Number \t Phone Number");
	printf("\n----------------------------------------------------");
	while(fread(&stu,sizeof(stu),1,fp4)){
	printf("\n%s \t %d \t\t %d \t\t %ld",stu.name,stu.standard,stu.rollno,stu.phoneNo);
	}
	fclose(fp4);
}

//Function to verify the file is not empty
int checkempty(){
	FILE *fp5;
	int ch=0;
	fp5=fopen("StudentRC","r");
	while(fread(&stu,sizeof(stu),1,fp5)){
		ch=1;
		fclose(fp5);
		return ch;
	}
}

//Function to check record
int checkrollno(int rollnum){
	FILE *fp6;
	int ch = 0;
	fp6=fopen("StudentRC","r");
	//Searching all records till the end of the file(eof)
	while(!feof(fp6)){
		fread(&stu,sizeof(stu),1,fp6);
		if(rollnum == stu.rollno){
			fclose(fp6);
			return 1;
		}
	}
	fclose(fp6);
	return 0;
}

//Main function

void main(){
	int ch, e;
	do{
		printf("\n\n----------------------");
		printf("\nStudent Record System");
		printf("\n----------------------");
		printf("\n MENU");
		printf("\n 1. Add Record");
		printf("\n 2. Delete Record");
		printf("\n 3. Find Record");
		printf("\n 4. Generate Report");
		printf("\n 5. Exit"); //to exit the do while loop
		printf("\n Enter your choice: ");
		scanf("%d",&ch);
		switch(ch){
			case 1: add(); break;
			case 2: deleteRec(); break;
			case 3: find(); break;
			case 4: e= checkempty();
					if(e ==0)
						printf("\n Record empty\n");
					else
						show();
					break;
			case 5: exit(1); break;
			default: printf("\n Invalid input. Please enter again !\n"); break;
		}
	}while(ch!=5);
}
