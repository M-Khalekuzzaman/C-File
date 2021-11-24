//using puts() to written to file;
#include<stdio.h>
int main()
{
    FILE *file;
    char name[50];
    file = fopen("test3.txt","w");
    if(file == NULL)
        printf("File does not exist");
    else
    {
        printf("File is opened\n");
        printf("Enter your full name : ");
        gets(name);

        fputs(name,file);
        printf("File is written successfully ");
        fclose(file);
    }

    getch();
}
