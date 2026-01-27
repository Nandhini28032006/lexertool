#include <stdio.h>

extern int yylex();

int main() {
    printf("Enter input (Ctrl+D to stop):\n");
    yylex();
    return 0;
}
