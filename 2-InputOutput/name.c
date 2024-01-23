#include <cs50.h>
#include <stdio.h>

int main(void){
    string first = get_string("What's your first name? ");
    string second = get_string("And you second name?");
    printf("Hello, %s %s\n", first, second);
}
