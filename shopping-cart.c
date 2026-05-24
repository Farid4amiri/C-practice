#include<stdio.h>
#include<string.h>

int main(){
    char item[30];
    float price;
    int quantity;
    float totalprice;

    printf("What item would you like to buy?: ");
    fgets(item,sizeof(item),stdin);
    item[strlen(item) - 1] = '\0';


    printf("What is the price for each?: ");
    scanf(" %f",&price);
   

    printf("How many would you like?: ");
    scanf(" %d", &quantity);
    

    printf("You have bought %d %s/s \n",quantity,item);
    totalprice = price * quantity;
    printf("The total is: %.2f \n",totalprice);

    return 0;
}