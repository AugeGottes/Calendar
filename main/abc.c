#include <stdio.h>
#include <stdlib.h>

int shivadatta()
{
    int user = 0;
     char x[15] = "color ";
    
    x[6] = '\0';
    x[7] = '\0';

    
    printf("\n\n CHANGE COLOR OF THE TEXT AND THE BACKGROUND \n\
  PRESS 1 TO CONTINUE \n\
   PRESS 2 TO EXIT\n");
    fflush(stdin);
    scanf("%d",&user);
    
if(user==1)
{        printf("\n    PRESS THE BELOW CODES FOR COLOR-1st column for background , 2nd for text \n\
     0 = Black       8 = Gray\n\
    1 = Blue        9 = Light Blue\n\
    2 = Green       A = Light Green\n\
    3 = Aqua        B = Light Aqua\n\
    4 = Red         C = Light Red\n\
    5 = Purple      D = Light Purple\n\
    6 = Yellow      E = Light Yellow\n\
    7 = White       F = Bright White ");        printf(" \n CHOOSE ANY COLOR CODE FOR THE BACKGROUND FROM CODE");
    fflush(stdin);
    scanf("%c",&x[6]);
    printf(" \nCHOOSE ANY COLOR CODE FOR THE TEXT FROM CODE");
    fflush(stdin);
    scanf("%c",&x[7]);
    system(x);
}
else if(user==2)     
{
       printf("\n PRESS y TO EXIT OR n TO CONTINUE(y/n)   ");
        char ch;
        fflush(stdin);
        scanf("%c",&ch);
        if(ch == 'y' || ch == 'Y')
        {
            
            printf("\nTHANK YOU \n");
            
        }
    }
    

    
        
    return 0;

}
