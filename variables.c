#include <stdio.h>

int main(){
    //variables
 int age =25;
 int year = 2026;
 int quantity = 2;

 float gpa = 2.5;
 float price = 19.99;
 float temperature = -10.1;

 double pi = 3.14159265358979;
 double e = 2.7112389047987123;

 char grade = 'A';


    //prints
 printf("you are %d years old\n", age);
 printf("the year is %d\n",year);
 printf("you have ordered %d x items\n",quantity);

 printf("your gpa is %.1f \n",gpa);
 printf("the price of item x is $%.2f \n", price);
 printf("the temperature is %.1f °C\n", temperature);

 printf("the pi number is %.15lf \n" , pi);
 printf("The value of e is %.15lf \n", e );

 printf("your grade is %c \n" , grade);

    return 0;
}