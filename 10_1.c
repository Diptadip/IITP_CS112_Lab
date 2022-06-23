#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
    int dd;
    int mm;
    int yyyy;
}DOB;

typedef struct{
    int pin;
    char sex;
    DOB dob;
}Person;

typedef struct{
    Person person;
    float salary;
}Teacher;

typedef struct{
    Person person;
    float marks;
}Student;

float Sum(Student s[5],int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=s[i].marks;
    }
    return sum;
}

int main(){
    int s,t;
    Student S[5];
    Teacher T[5];

    printf("Enter number of students (max 5): ");
    scanf("%d",&s);
    s = s >=5 ? 5 : s;
    
    printf("Enter info for %d students...\n",s);
    for(int i=0;i<s;i++){
        printf("\nStudent %d\n----------------\n",i+1);
        printf("Enter dob in dd/mm/yyyy: ");
        scanf("%d/%d/%d",&S[i].person.dob.dd,&S[i].person.dob.mm,&S[i].person.dob.yyyy);
        printf("Enter Personal identification number: ");
        scanf("%d",&S[i].person.pin);
        printf("Enter your gender (M/F): ");
        fflush(stdin);
        scanf("%c",&S[i].person.sex);
        printf("Enter your marks: ");
        scanf("%f",&S[i].marks);
    }

    printf("\nEnter number of teachers (max 5): ");
    scanf("%d",&t);
    t = t>= 5 ? 5 : t;

    printf("Enter info for %d teachers...\n",t);
    for(int i=0;i<t;i++){
        printf("\nTeacher %d\n----------------\n",i+1);
        printf("Enter dob in dd/mm/yyyy: ");
        scanf("%d/%d/%d",&T[i].person.dob.dd,&T[i].person.dob.mm,&T[i].person.dob.yyyy);
        printf("Enter Personal identification number: ");
        scanf("%d",&T[i].person.pin);
        printf("Enter your gender (M/F): ");
        fflush(stdin);
        scanf("%c",&T[i].person.sex);
        printf("Enter your salary: ");
        scanf("%f",&T[i].salary);
    }

    printf("\nPrinting Teacher Details...\n");
    for(int i=0;i<t;i++){
        printf("Teacher %d\n----------------\n",i+1);
        printf("%-30s: %d/%d/%d\n","Date of Birth",T[i].person.dob.dd,T[i].person.dob.mm,T[i].person.dob.yyyy);
        printf("%-30s: %d\n","Personal Identification Number",T[i].person.pin);
        printf("%-30s: %c\n","Gender",T[i].person.sex);
        printf("%-30s: %.2f\n","Salary",T[i].salary);
    }

    printf("\nPrinting Student Details...\n");
    for(int i=0;i<s;i++){
        printf("Student %d\n----------------\n",i+1);
        printf("%-30s: %d/%d/%d\n","Date of Birth",S[i].person.dob.dd,S[i].person.dob.mm,S[i].person.dob.yyyy);
        printf("%-30s: %d\n","Personal Identification Number",S[i].person.pin);
        printf("%-30s: %c\n","Gender",S[i].person.sex);
        printf("%-30s: %.2f\n","Marks",S[i].marks);
    }

    printf("\nAverage marks of all students: %.2f\n",Sum(S,s)/s);

    printf("Size of Student structure: %d\n",sizeof(S[0]));
}