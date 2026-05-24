#include <stdio.h>

int main(){
    int age = 0 ;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    //age
    printf("Enter your agae: ");
    scanf("%d", &age);
    printf("%d\n", age);

    //gpa
    printf("Enter your GPA: ");
    scanf("%f",&gpa);
    printf("%.1f \n",gpa);

    //grade
    printf("Enter your grade: ");
    scanf(" %c" , &grade);
    printf("%c \n",grade);

    //name
    printf("Enter your name: ");
    getchar(); //Clear input buffer
    fgets(name,sizeof(name),stdin);
    printf("%s \n",name);

    return 0;
}

