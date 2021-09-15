#include<stdio.h>
#include<conio.h>
int main()
{
    int marks = 0  ;
    printf("Enter marks of student");
    scanf("%d",&marks);
    printf("The grade is:\n");
    if (marks > 85 && marks<=100)
    {
        printf("A");
    }
    else if (marks<=85)
    printf("B");
    else if (marks<=70)
    printf("C");
    else if (marks<=55)
    printf("D");
    else if (marks<=40)
    printf("F");
    else
    printf("INVALID MARKS");
    return 0 ;
}
