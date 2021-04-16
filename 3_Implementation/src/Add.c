#include<stdio.h>

void add(){
    FILE *fp;
    fp= fopen("StudentRC","a");
    printf("Enter Name: ");
    scanf("%s",&stu.name);
    printf("Enter Standard: ");
    scanf("%s",&stu.standard);
    printf("Enter Roll Number: ");
    scanf("%d",&stu.rollno);
    printf("Enter Phone Number: ");
    scanf("%ld",&stu.phoneNo);
    printf("\n******Data added successfully******");
    fwrite(&stu,sizeof(stu),1,fp);
    fclose(fp);
}