#include <stdio.h>

int main(){
    //variables
 int age =25;
 int year = 2026;
 int quantity = 2;
 float gpa = 2.5;
 float price = 19.99;

    //prints
 printf("you are %d years old\n", age);
 printf("the year is %d\n",year);
 printf("you have ordered %d x items\n",quantity);
 printf("your gpa is %.1f \n",gpa);
 printf("the price of item x is $%.2f \n", price);

    return 0;
}