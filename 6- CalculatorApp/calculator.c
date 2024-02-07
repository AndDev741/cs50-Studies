#include <stdio.h>
#include <cs50.h>

int addition(void);
int subtraction(void);
int multiply(void);
int division(void);

int main(void){
    int operation;
    do{
        operation = get_int("If you want addition, press 1\n If you want subtraction, press 2\n If you want to multiply, press 3\n if you want division, press 4\n I want :  ");
    }
    while(operation < 1 || operation > 4);

    switch(operation){
        case 1:
            addition();
            break;
        case 2:
            subtraction();
            break;
        case 3:
            multiply();
            break;
        case 4:
            division();
            break;
        default:
            printf("Erro\n");
    }
}

int addition(void){
    int num1 = get_int("Digite um número para somar: \n");
    int num2 = get_int("Digite outro número para somar com o anterior: \n");
    int sum = num1 + num2;
    return printf("%i\n", sum);
}

int subtraction(void){
    int num1 = get_int("Digite um número para subtrair: \n");
    int num2 = get_int("Digite outro número para subtrair com o anterior: \n");
    int subtraction = num1 - num2;
    return printf("%i\n", subtraction);
}

int multiply(void){
    int num1 = get_int("Digite um número para multiplicar: \n");
    int num2 = get_int("Digite outro número para multiplicar com o anterior: \n");
    int multiply = num1 * num2;
    return printf("%i\n", multiply);
}

int division(void){
    int num1 = get_int("Digite um número para dividir: \n");
    int num2 = get_int("Digite outro número para dividir com o anterior: \n");
    int division = num1 / num2;
    return printf("%i\n", division);
}
