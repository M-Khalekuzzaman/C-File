#include<stdio.h>
int main()
{
    FILE *file;
    char ch;
    file = fopen("test5.txt","r");
    if(file == NULL)
    {
        printf("File does not exist program");
    }
    else
    {
        printf(" File is opened\n");
        /*
        printf("Enter your name : ");
        gets(name);
        printf("Enter your age : ");
        scanf("%d",&age);
        fprintf(file," Name : %s , Age = %d\n",name,age);
        */
        while(!feof(file))
        {
            ch = fgetc(file);
            printf("%c",ch);
        }
        printf("File is written successfully");
        fclose(file);
    }
    getch();
}
