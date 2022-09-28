#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

#define Name "Максим"
#define LastName "Соломка"
#define GroupName "RE-22"
#define Faculty "RTF"
#define University "Igor Sikorsky Kyiv Polytechnic Institute"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP (1251);
    unsigned int age = 17;
    unsigned int semestr;
    float admissionScore;
    int grade1;
    int grade2;
    int grade3;
    double averageGrade;


    printf("%s %s виконайте наступні дії: \n", Name, LastName);
    printf("Введіть номер семестру: ");
    scanf("%u", &semestr);
    printf("Введіть свій вік: ");
    scanf("%u", &age);
    printf("Введіть свій вступний бал: ");
    scanf("%f", &admissionScore);
    printf("Введіть оцінку за предмет №1: ");
    scanf("%d", &grade1);
    printf("Введіть оцінку за предмет №2: ");
    scanf("%d", &grade2);
    printf("Введіть оцінку за предмет №3: ");
    scanf("%d", &grade3);

    averageGrade = (double)(grade1 + grade2 + grade3) / 3;
    printf("\n\t average grade = %.3lf", averageGrade);

     system("CLS");
     printf("%s", University);
     printf("\n%s", Faculty);
     printf("\n%s", GroupName);
     printf("\n---------------------------");
     printf("\nstudent: %s %s", Name, LastName );
     printf("\nage: %u", age);
     printf("\nsemestr: %u", semestr);
     printf("\n---------------------------");
     printf("\nadmission score: %.2f", admissionScore);
     printf("\naverage grade = %.31f", averageGrade);
     printf("\n");



      return 0;


}
