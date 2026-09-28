#include <stdio.h>
#include <stdbool.h>

int main() {
    //temmperature converter
    int choice = 0;
    float kelvin = 0.0;
    float celcius = 0.0;
   

     //Home Screen
   

    do{

    printf("Temperature Converter\n");
    printf("1. Celcius to Kelvin\n");
    printf("2. Kelvin to Celcius\n");
    printf("3. Exit Calculator\n");
    printf("Select Conversion Type\n");
   
    //Algorithim
    
    scanf("%d", &choice);
    if(choice == 1){
        printf("Enter Temperature in Celcius:\n");
        scanf("%f", &celcius);
        kelvin = celcius + 273.15;
        printf("= %.2f K\n", kelvin);
    }
    else if(choice == 2){
        printf("Enter Temperature in Kelvin:\n");
        scanf("%f", &kelvin);
        celcius = kelvin - 273.15;
        printf("= %.2f C\n", celcius);
    }
    else if(choice == 3){
        printf("Goodbye!\n");
    }
    else{
        printf("Invalid Choice\n");
        printf("Please Choose a Valid Input\n");}
    } while (choice != 3);
    return 0;
}

 