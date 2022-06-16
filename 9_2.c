#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

int main(){
    char *P,*Q,*R,*str;
    fflush(stdin);
    GetStr("P = ",&P);
    GetStr("Q = ",&Q);
    GetStr("R = ",&R);
    

    int idx_Q=isSubstring(P, Q);
    int idx_R=isSubstring(P, R);
    if(!strlen(Q) && idx_R>=0){
        printf("The pattern Q*R is found in P at idx %d\n",idx_R);
    }
    else if(!strlen(R) && idx_Q>=0){//R null
        printf("The pattern Q*R is found in P at idx %d\n",idx_Q);
    }
    else{
        if(idx_Q>=0){
            int k=0;
            char*ptr=P+idx_Q;
            char*ptr1=str;
            while(*ptr){
                *ptr1++=*ptr++;
            }
        }
        idx_R=isSubstring(str, R);
        if(idx_R>=0){
            printf("The pattern Q*R is found in P at idx %d\n",idx_Q);
        }
        else{
            printf("The pattern Q*R is not found in P\n");
        }
    }

}