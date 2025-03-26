#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 40;
    double gpa = 4.5;
    char grade = 'A';
    char phrase[] = "Giraffe Academy";
    /*hi- this is for typing in scan and
    directly enter numbers in the code after run*/
    int num1, num2;
    /*direct answer but no operation is shown in the run code*/
    int num3 =3;
    int num4 =5;


    printf("this is %s\n",phrase);
    printf("this is %d\n", age);
    printf("this is %f\n",gpa);
    printf("this is %c\n",grade);
    printf("This is another main-like function.\n");
    printf("%f\n", 8.9);
    printf("%f\n", 4.5+5.2);
    printf("%f\n", 4.5*5.2);
    printf("%f\n", 4.5/5.2);
    printf("%f\n", 4+5.2);
    printf("%f\n", pow(2,3));
    printf("%f\n", sqrt(276));
    printf("%f\n", ceil(2.5678));
    printf("%f\n", floor(45.776));
    /*direct answer but no operation is shown in the run code*/
    printf("%d\n",num3+num4);
    /*hi- this is for typing in scan and
    directly enter numbers in the code after run*/
    scanf("%d %d", &num1, &num2);
    printf("%d\n", num1 + num2);
    /*hi- this is for commenting ,
    doesn't print but u can write things here*/




    return 0;
}
