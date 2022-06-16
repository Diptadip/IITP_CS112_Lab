#include<stdio.h>
#include<stdlib.h>

int length(const char*arr);
int stringComparison(int a,int b);
void GetStr(char *str,char **P_strp);
int startsWith(const char *string, const char *prefix);
int compare(const char *X, int,const char *Y);
int isSubstring(const char* X, const char* Y);


int main()
{
    char *s1, *s2;
    int a=0,b=0,ch=0;
    do{
        printf("1. String comparison\n2. String prefix\n3. Substring matching\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
                gets(stdin);
                GetStr("Enter String s1: ",&s1);
                GetStr("Enter String s2: ",&s2);
    
                a=length(s1);
                b=length(s2);

                int stringCpr=stringComparison(a,b);
                if(stringCpr<0)printf("-1\n");
                else if(stringCpr>0)printf("1\n");
                else printf("0\n");

                free((void*)s1);
                free((void*)s2);
                break;

            case 2:
                gets(stdin);
                GetStr("Enter text String: ",&s1);
                GetStr("Enter prefix String: ",&s2);
                if(startsWith(s1,s2)){
                    printf("prefix detected\n");
                }
                else{
                    printf("prefix not detected\n");
                }
                free((void*)s1);
                free((void*)s2);
                break;

            case 3:
                gets(stdin);
                GetStr("Enter text String: ",&s1);
                GetStr("Enter substring: ",&s2);
                int idx=isSubstring(s1,s2);
                if(idx<0) 
                    printf("substring not matched\n");
                else{
                    printf("substring matched at %d index\n",idx);
                }
                free((void*)s1);
                free((void*)s2);
                break;

            default:
                printf("Wrong input try again\n ");
                ch=0;
        }
        printf("Try again ? (0/1)");
        scanf("%d",&ch);
        ch=!ch;

    }while(!ch);

}

int length(const char*arr){
    int len=0;
    while(*arr++){
        len++;
    }
    return len;
}

void GetStr(char *str,char **P_strp)
{ 
  printf("%s",str); 
  for(int i=0 ; 1 ; i++) 
    { 
     if(i) 
       *P_strp = (char*)realloc((*P_strp) , i+1);
      else
       *P_strp = (char*)malloc(i+1);
     (*P_strp)[i]=getchar();
     if((*P_strp)[i] == '\n')
       { 
        (*P_strp)[i]= '\0'; 
        break; 
       } 
     } 
}

int stringComparison(int a,int b){
    return a-b;
}

int startsWith(const char *string, const char *prefix)
{
    while(*prefix)
    {
        if(*prefix++ != *string++)
            return 0;
    }
    return 1;
}

int compare(const char *X,int i, const char *Y)
{
    int j=0;
    while (X[i] && Y[j])
    {
        if (X[i] != Y[j]) {
            return 0;
        }
 
        i++;
        j++;
    }
 
    return (Y[j] == '\0');
}
 
int isSubstring(const char* X, const char* Y)
{
    int i=0;
    while (X[i] != '\0')
    {
        if ((X[i] == *Y) && compare(X,i, Y)) {
            return i;
        }
        i++;
    }
 
    return -1;
}
//Code by Diptadip Mallik
