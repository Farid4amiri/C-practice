#include <stdio.h>

int main(){
    int age = 0 ;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";


    printf("Enter your agae: ");
    scanf("%d", &age);
    printf("%d\n", age);
    printf("Enter your GPA: ");
    scanf("%f",&gpa);
    printf("%f",gpa);



    return 0;
}

