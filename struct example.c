/*Soru 1) Bir öğrenci structi tanimlayarak öğrencinin id, ismi ve notu tutulacaktır. Vize ve final
notları bir fonksiyon aracılığıyla alınacak ve bu notlara göre öğrencinin genel notu hesaplanacaktır.
Öğrencinin genel notunu ekrana yazdıran bir program yazınız.
Öğrenci bilgiler bulunmalıdır: id, isim, not.
• Bir fonksiyon ile vize ve final notları alınıp, genel not hesaplanacaktır.
Hesaplanan genel not ekrana yazdırılacaktır.


l) The ID, name, and will be Kept by defining a student structure. A function
will and final gredes, and the overall will be to
these Write a program that the overall on the sgceen.
The student structure the information: ID, name, and graue.
A tung!jgmwill take and final grades, and the overall grade will be gaggu!aged.
The grp@will be punted on the *green.
1
*/
#include <stdio.h>

typedef struct{
    int studentId;
    char name[50];
    float grade;
}studentInfo;

void calculate(studentInfo student,float midtern,float final){
    float result= midtern*0.4+ final*0.6;
    student.grade= result;
    printf("%d student grade is: %f.2\n",student.studentId,student.grade);
}

void main (){
   studentInfo std1;
   float midterm,final;
   printf("Enter student Id:");
   scanf("%d",&std1.studentId);
   printf("Enter Student Name:");
   scanf("%s",&std1.name);
   printf("Enter Midterm:");
   scanf("%f",&midterm);
   printf("Enter Final:");
   scanf("%f",&final);
   calculate(std1,midterm,final);
}