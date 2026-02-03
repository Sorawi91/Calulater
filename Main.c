#include <stdio.h>

//int Persen(int a, int b) {
    return (b != 0) ? a % b : 0;
}

//int divide(int a, int b) {
    return (b != 0) ? a / b : 0;
}

//int multiply(int a, int b) {
    return a * b;
}

//int minus(int a, int b) {
    return a - b;
}

//int plus(int a, int b) {
    return a + b;
}

int calculate(int a, char op, int b) {
    int total = a;

//    if (op == '+') total = plus(a, b);
//    else if (op == '-') total = minus(a, b);
//    else if (op == '*') total = multiply(a, b);
//    else if (op == '/') total = divide(a, b);
//    else if (op == '%') total = Persen(a, b);

    printf("Process: %d %c %d = %d\n", a, op, b, total);
    return total;
}

int main() {
    int first, next;
    char op;

    if (scanf("%d", &first) != 1) return 0;

    while (1) {
        scanf(" %c", &op);
        if (op == '=') break;

        scanf("%d", &next);
        first = calculate(first, op, next);
    }

    printf("Answer: %d\n", first);
    return 0;
}