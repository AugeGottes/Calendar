#include<stdio.h>
#include<stdlib.h>
void func1()
{
    int c;

    printf("Enter 0 if you want to check pre-planned events and 1 if you want to plan a new event: ");
    int choice;
    scanf("%d",&choice);

    if (choice==0)
    {
        printf("Enter the date for which you want to check in a dd-mm-yyyy format: ");

        char date[100];
        scanf("%s",date);

        date[10]='.';
        date[11]='t';
        date[12]='x';
        date[13]='t';
        date[14]='\0';

        FILE*fp= fopen(date,"r");

        if (fp==NULL)
            printf("No events exist for the given date");
        else
            while ((c = getc(fp)) != EOF)
                putchar(c);
            fclose(fp);
            printf("\n");
    }

    else
    {
        printf("Enter the date for which you want to plan events in a dd-mm-yyyy format: ");

        char date[100];
        scanf("%s",date);

        date[10]='.';
        date[11]='t';
        date[12]='x';
        date[13]='t';
        date[14]='\0';

        FILE* fw= fopen(date,"w");

        if(fw == NULL)
            {
                printf("Error");   
                exit(1);             
            }

        printf("Enter The event details: ");

        char event[500];
        scanf(" %[^\n]s",event);
        fprintf(fw,"%s",event);
        printf("Event Created\n");
        fclose(fw);
    }

}