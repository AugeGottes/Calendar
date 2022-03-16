#include<stdio.h>
#include<stdlib.h>
#include"header.h"


void main()
{
    system("Color E4");
    printf("________________________WELCOME______________________________________\n");
    int choice;

    char ch='\0';
    
    
    do{
    printf("\nEnter your choice: \n");
    printf("1. Display Calendar for a YEAR\n2. Display Calendar for a MONTH IN A YEAR\n3. Find DAY OF THE WEEK FOR A GIVEN DATE\n4. SCHEDULE OR CHECK SCHEDULED EVENTS\n5. CHANGE COLOR AND FONT OF PROGRAM\n6. MONTHLY LEDGER\n7. DISPLAY MONTHLY LEDGER\n8. CLEAR SCREEN\n9. QUIT");
    scanf("%d",&choice);


    switch(choice)
    {
        case 4:
        func1();
        break;

        case 2:
        printf("\nEnter the month and the year in mm-yyyy format: ");
        int  m,y;
        scanf("%d-%d",&m, &y);
        my_cal(m,y);
        
        while(ch!='x')
        {
            printf("\nIf you want previous month press p, next moth n and exit x");
            scanf(" %c",&ch);
            if (ch=='p')
            {   
               
                m--;
                if (m==0)
                {
                    m=12;y--;
                }
                my_cal((m),y);
            }
            else if(ch=='n')
            {
               
                m++;
                if (m==13)
                {
                    m=1;y=y+1;
                }
                my_cal((m),y);
            }
            
        }
        ch='\0';
        break;

        case 3:
        printf("\nEnter dd-mm-yyyy: ");
        int dd,mm,yyyy;
        scanf("%d-%d-%d",&dd,&mm,&yyyy);
        day_calc(dd,mm,yyyy);
        break;

        case 1: 
        func2();
        break;

        case 5:
        shivadatta();
        break;

        case 9: 
        printf("Exiting......");
        break;

        case 8:
        printf("Clearing screen.....");
        system("cls");
        break;

        case 6: 
        printf("MONTHLY LEDGER");
        monthly_ledger();
        break;

        case 7:
        printf("Displaying.....");
        sort();
        break;

        default: 
        printf("Invalid choice");
    }
    }while(choice!=9);
}