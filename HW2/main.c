#include <stdio.h>

int main() {
    printf("Enter string(only numbers):");
    char str[100];
    scanf("%s",str);
    for (int i = 0; i < 100; ++i) {
        if (str[i] == '1') {
            printf("I ");
        } else if (str[i] == '2') {
            printf("II ");
        } else if (str[i] == '3') {
            printf("III ");
        } else if (str[i] == '4') {
            printf("IV ");
        } else if (str[i] == '5') {
            printf("V ");
        } else if (str[i] == '6') {
            printf("VI ");
        } else if (str[i] == '7') {
            printf("VII ");
        } else if (str[i] == '8') {
            printf("VIII ");
        } else if (str[i] == '9') {
            printf("IX ");
        }
    }
    return 0;
}
