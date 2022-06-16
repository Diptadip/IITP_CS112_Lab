#include <stdio.h>
#include <stdlib.h>

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
    char *P,*Q,*R;
    fflush(stdin);
    GetStr("P = ",&P);
    GetStr("Q = ",&Q);
    GetStr("R = ",&R);
    

    int idx_Q=isSubstring(P, Q);
    int idx_R=isSubstring(P, R);
    if(idx_Q>=0 && idx_R >=0 && idx_Q<idx_R){
        printf("The pattern Q*R is found in P at idx %d\n",idx_Q);
    }
    else{
        printf("The pattern Q*R is not found in P\n");
    }

}