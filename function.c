#include <stdio.h>

int square(int num){
  
    return num * num;
}

int main (){
    int num = 0;

    printf("Please Enter a number: ");
    scanf("%d", &num);
    num = square(num);
    printf("%d", num);


    return 0;
}
