#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int monthly_ledger()
{
    printf("Ledger for month press 1-12 for JAN_DEC");
    int ch;
    scanf("%d",&ch);
    switch (ch)//ledger for which month
    { 
        int k;FILE *fp1;// creating file pointers
    FILE *fp2;
        FILE *fp3;
            FILE *fp4;
                FILE *fp5;
                    FILE *fp6;
                        FILE *fp7;
        FILE *fp8;
            FILE *fp9;
                FILE *fp10;
                    FILE *fp11;
                        FILE *fp12;
        char buffer1[1000];char buffer2[1000];char buffer3[1000];char buffer4[1000];char buffer5[1000];char buffer6[1000];char buffer7[1000];char buffer8[1000];char buffer9[1000];char buffer10[1000];char buffer11[1000];char buffer12[1000];
    case 1:
       k=1;
          fp1=fopen("stud_1.txt","a+");//opening file in append mode
          fprintf(fp1,"----------------Ledger------------------------\n");
          do{
          
        printf("enter details");
        scanf("%s",buffer1);// to enter into array
        fputs(buffer1,fp1);//to put input in file
        printf("succesfully added");
        fprintf(fp1,"\n");//to add new line to file
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);//loop to ensure we get multiple inputs for ledger
        fclose(fp1);
         break;
        case 2:
         k=1;
          fp2=fopen("stud_2.txt","a+");
                    fprintf(fp2,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer2);
        fputs(buffer2,fp2);
        printf("succesfully added");
        fprintf(fp2,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp2);
        break;
     case 3:
          k=1;
          fp3=fopen("stud_3.txt","a+");
                    fprintf(fp3,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer3);
        fputs(buffer3,fp3);
        printf("succesfully added");
        fprintf(fp3,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp3);
        break;
         case 4:
          k=1;
          fp4=fopen("stud_4.txt","a+");
                    fprintf(fp4,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer4);
        fputs(buffer4,fp4);
        printf("succesfully added");
        fprintf(fp4,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp4);
        break;
         case 5:
        k=1;
          fp5=fopen("stud_5.txt","a+");
                    fprintf(fp5,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer5);
        fputs(buffer5,fp5);
        printf("succesfully added");
        fprintf(fp5,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp5);
        break;
         case 6:
          k=1;
          fp6=fopen("stud_6.txt","a+");
                    fprintf(fp6,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer6);
        fputs(buffer6,fp6);
        printf("succesfully added");
        fprintf(fp6,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp6);
        break;
         case 7:
       k=1;
          fp7=fopen("stud_7.txt","a+");
                    fprintf(fp7,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer7);
        fputs(buffer7,fp7);
        printf("succesfully added");
        fprintf(fp7,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp7);
        break;
         case 8:
         k=1;
          fp8=fopen("stud_8.txt","a+");
                    fprintf(fp8,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer8);
        fputs(buffer8,fp8);
        printf("succesfully added");
        fprintf(fp8,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp8);
        break;
         case 9:
         k=1;
          fp9=fopen("stud_9.txt","a+");
                    fprintf(fp9,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer9);
        fputs(buffer9,fp9);
        printf("succesfully added");
        fprintf(fp9,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp9);
        break;
         case 10:
         k=1;
          fp10=fopen("stud_10.txt","a+");
                    fprintf(fp10,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer10);
        fputs(buffer10,fp10);
        printf("succesfully added");
        fprintf(fp10,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp10);
        break;
         case 11:
        k=1;
          fp11=fopen("stud_11.txt","a+");
                    fprintf(fp11,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer11);
        fputs(buffer11,fp11);
        printf("succesfully added");
        fprintf(fp11,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp11);
        break;
         case 12:
         k=1;
          fp12=fopen("stud_12.txt","a+");
                    fprintf(fp12,"----------------Ledger------------------------\n");

          do{
          
        printf("enter details");
        scanf("%s",buffer12);
        fputs(buffer12,fp12);
        printf("succesfully added");
        fprintf(fp12,"\n");
        printf("\nif you want to exit press 8 else press any other buttons \n");
        scanf("%d",&k);
          }while(k!=8);
        fclose(fp12);
        break;
    default:
        break;
    }// end of switch
    return 0;

}// end of main