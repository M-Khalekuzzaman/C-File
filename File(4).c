//using fprintf() to write the file ;
#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    int age;
    file = fopen("test4.txt","a");
    if(file == NULL)
    {
        printf("File does not exist program");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter your name : ");
        gets(name);
        printf("Enter your age : ");
        scanf("%d",&age);
        fprintf(file," Name : %s , Age = %d\n",name,age);
        printf("File is written successfully");
        fclose(file);
    }
    getch();
}
