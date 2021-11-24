//In a c programming,File is place on disk where a group of related data is stored;
//file is a structure which is stored in stdio.h header;
#include<stdio.h>
int main()
{
    FILE *file;
   file =  fopen("test1.txt","w");
   if(file == NULL)
        printf("File is not created");
   else
        printf("File created succeesfully");
        fclose(file);

    getch();
}
