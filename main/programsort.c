 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
//#include"header.h"
struct calendar
{
    int date;
    char name[200];

};
void disp(struct calendar *p[],int n);
void sort_data(struct calendar* p[],int n,int (*)(const struct calendar*,const struct calendar*));
void swap(struct calendar **x,struct calendar **y);
int date_month(const struct calendar* s1,const struct calendar* s2);
struct calendar s[1000];
int sort()
{   int choice;
    char str[1024];
    printf("----------------------------------which months ledger ------------------\n PRESS 1 FOR JAN 2 FOR FEB 3 FOR MARCH 4 FOR APRIL 5 FOR MAY 6 FOR JUNE 7 FOR JULY 8 FOR AUG 9 FOR SEP 10 FOR OCT 11 FOR NOV 12 FOR DEC ");
 scanf("%d",&choice);
    switch(choice)
    {   case 1:
        strcpy(str,"stud_1.txt");
        break;
       case 2:
       strcpy(str,"stud_2.txt");
        break;
        case 3:
        strcpy(str,"stud_3.txt");
        break;
        case 4:
        strcpy(str,"stud_4.txt");
        break;
        case 5:
        strcpy(str,"stud_5.txt");
        break;
        case 6:
        strcpy(str,"stud_6.txt");
        break;
        case 7:
        strcpy(str,"stud_7.txt");
        break;
        case 8:
        strcpy(str,"stud_8.txt");
        break;
        case 9:
        strcpy(str,"stud_9.txt");
        break;
        case 10:
        strcpy(str,"stud_10.txt");
        break;
        case 11:
        strcpy(str,"stud_11.txt");
        break;
        case 12:
        strcpy(str,"stud_12.txt");
        break;
        default: 
        printf("Invalid choice");
    }
    FILE *fp=fopen(str,"r");
    if(fp == NULL){
        perror("Error: ");
        exit(1);
    }
    else
    {
        
        int i=0;
        char a[100];
        fgets(a,sizeof(a),fp);
        while(fgets(a,sizeof(a),fp))
        {
          char *tk;
          tk = strtok(a,",");
          s[i].date=atoi(tk);

          tk = strtok(NULL,",");
          strcpy(s[i].name,tk);
          i++;

        }
        fclose(fp);
        int n=i;

        struct calendar *p[100];
        for(int j=0;j<n;j++)
            p[j]=&s[j];
		printf("contents before sorting:\n");
        disp(p,n);
	int c;
	int count=0;
    if(count==1)
    exit(1);
        printf("\n press 1 if you want to sort it");
        scanf("%d",&c);
        
        if(c==1&&count!=1){
            count+=1;
			    sort_data(p,n,date_month);
                printf("sorted \n");
                disp(p,n);
    }
        printf("/t/thello/t%s",str);
            FILE *fw=fopen("str","r");
        fprintf(fw,"hello\n");
        i=0;
        while(i<n)
        {
            fprintf(fw,"%d,%s",p[i]->date,p[i]->name);
            i++;
         }
    }
return 0;
}
void disp(struct calendar *p[],int n)
{
    for(int j=0;j<n;j++)
        printf("%d\t %s\n",p[j]->date,p[j]->name);
}
//swap function
void swap(struct calendar **x,struct calendar **y)
{
    struct calendar* temp = *x;
    *x = *y;
    *y = temp;
}
int date_month(const struct calendar* s1,const struct calendar* s2)
{
    return s1->date>s2->date;
}
void sort_data(struct calendar* p[],int n,int (*op)(const struct calendar *,const struct calendar *))
{
   int i,j;
   for (i= 0;i<n-1;i++)
       for (j=0;j<n-i-1;j++)
           if(op(p[j],p[j+1]))
              swap(&p[j], &p[j+1]);

}
