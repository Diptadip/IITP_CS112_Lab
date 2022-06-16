#include <stdio.h>

int match(char src[100], char str[100], int i, int j)
{
    if (str[j] == '\0')
    {
        return 1;
    }
    else
    {
        if (str[j] != src[i])
        {
            return -1;
        }
        else
            return match(src, str, i + 1, j + 1);
    }
}


int substring(char src[100], char str[100], int i) 
{
    if (src[i] == '\0')
        return -1;
    else
    {
        if (str[0] != src[i])
        {
            return substring(src, str, i + 1);
        }
        else
        {
            if (match(src, str, i, 0) == 1)
            {
                return i;
            }
            else
                return substring(src, str, i + 1);
        }
    }
}


int main(){
    char P[100],Q[100],R[100];
    printf("P = ");
    gets(P);
    printf("Q = ");
    gets(Q);
    printf("R = ");
    gets(R);

    int idx_Q=substring(P, Q, 0);
    int idx_R=substring(P, R, 0);
    if(idx_Q>=0 && idx_R >=0 && idx_Q<idx_R){
        printf("The pattern Q*R is found in P at idx %d\n",idx_Q);
    }
    else{
        printf("The pattern Q*R is not found in P\n");
    }

}