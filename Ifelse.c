#include <stdio.h>
int main() {
printf("enter the Marks: ");
int marks=0;
scanf("%d",&marks);
if(marks>=85|| marks<=100)
{
printf("gradeA");
}
else if(marks>=70|| marks<=84)
{
printf("gradeB");
}

else if(marks>=55|| marks<=69)
{
printf("gradeC");
}
else if(marks>=40|| marks<=54)
{
printf("gradeD");
}
else 
{
printf("gradeF");
}
return 0;
}
