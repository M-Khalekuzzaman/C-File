#include<stdio.h>
int main()
{
    FILE *file;
    char name[] = " Khalekuzzaman kaochar ";
    int len = strlen(name);
    int i;
   file =  fopen("test1.txt","a");
   if(file == NULL)
        printf("File is not created");
   else
        printf("File created succesfully\n");
        for(i =0 ; i<len ; i++)
        {
            fputc(name[i],file);
        }
        printf("File is written succesfully\n");
        fclose(file);

    getch();
}
