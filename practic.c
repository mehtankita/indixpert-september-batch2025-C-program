#include <stdio.h>
int main()
{
int hindi;
int english;
int maths;
int computer;
int total;

printf("enter marks of hindi");
scanf("%d",&hindi);

printf ("enter marks of english");
scanf("%d",&english);

printf ("enter marks of maths");
scanf("%d",&maths);

printf ("enter marks of computer");
scanf("%d",&computer);



total=hindi+english+maths+computer;

printf(" total marks is %d");
    return 0;
}
