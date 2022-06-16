#include <stdio.h>
#include <stdlib.h>
// function to compare the strings

int compare(char Str1[1000], char Str2[1000], int i)
{
    if (Str1[i] == '\0' && Str2[i] == '\0')
        return 0;
    else
    {
        if (Str1[i] == Str2[i])
            return compare(Str1, Str2, i + 1);
        else
            return Str1[i] - Str2[i];
    }
}

// to check whether pattern is string is prefix of text string
int prefix(char s1[1000], char s2[1000], int i)
{
    if (s1[i] != s2[i])
        return -1;
    else
    {
        if (s2[i + 1] == '\0')
            return 1;
        else
            prefix(s1, s2, i + 1);
    }
}
int match(char src[1000], char str[1000], int i, int j)
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

// to check whether a string is substring or not
int substring(char src[1000], char str[1000], int i) // a function to search if s2 is substring of s1 or not
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


int main()
{
    char choice, index, value; // defining the required variables
    char s1[1000], s2[1000];
    printf("Enter string 1:\n");
    gets(s1);
    printf("Enter string 2:\n");
    gets(s2);

    printf("Enter a for string comparison:\n"); // asking the user which operation he wants to perform
    printf("Enter b for String prefix:\n");
    printf("Enter c for Substring matching:\n");

    scanf("%c", &choice);

    switch (choice)
    {
    case 'a':
        printf("Comparing the strings\n"); // when the selected choice is a

        value = compare(s1, s2, 0); // calling the function compare made above

        if (value == 0)
            printf("string s1 and s2 are equal");

        else if (value > 0)
            printf("string s1>string s2");

        else
            printf("string s1<string s2");

        break;

    case 'b':
        printf("To check if s2 is prefix of s1 or not\n"); // when the choice selected is b

        value = prefix(s1, s2, 0); // calling the fuction prefix defined above

        if (value == 1)
            printf("string s2 is prefix of string s1");

        else
            printf("string s2 is not prefix of s1");

        break;
    case 'c':
        printf("To check if s2 is substring of s1 or not\n"); // when the choice is made for checking substring

        index = substring(s1, s2, 0); // calling the fuction defined above

        if (index == -1)
            printf("The string s2 is not a substring of s1");

        else
            printf("The s2 is found at %d in s1", index); // printing the index where string 2 is first found

        break;

    default:
        printf("Please enter the choice among a,b and c");
    }
}