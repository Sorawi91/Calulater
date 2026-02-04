#include <stdio.h>

int Persen(int a, int b) { //หารเอาเศษ
    return (b != 0) ? a % b : 0;
}

int divide(int a, int b) { //หาร
    return (b != 0) ? a / b : 0;
}

int multiply(int a, int b) { //คูณ
    return a * b;
}

int minus(int a, int b) { //ลบ
    return a - b;
}

int plus(int a, int b) { //บวก
    return a + b;
}

int calculate(int a, char op, int b) { //ประกาศตัวแปรไว้รับค่าตัวเลขและตัวอักษรพิเศษ
    int total = a;

//    if (op == '+') total = plus(a, b);
      else if (op == '-') total = minus(a, b);
      else if (op == '*') total = multiply(a, b);
      else if (op == '/') total = divide(a, b);
      else if (op == '%') total = Persen(a, b);

    printf("Process: %d %c %d = %d\n", a, op, b, total);
    return total;
}

int main() {
    int first, next;
    char op;

    if (scanf("%d", &first) != 1) return 0; // รับค่าตัวเลขตัวแรก

    while (1) {
        scanf(" %c", &op);
        if (op == '=') break; //ถ้าตัวอักษรพิเศษเป็น = ให้หยุดการทำงาน

        scanf("%d", &next); //รับค่าตัวเลขตัวถัดไป
        first = calculate(first, op, next); //เรียกใช้ฟังก์ชันคำนวณ
    }

    printf("Answer: %d\n", first); //แสดงผลลัพธ์สุดท้าย
    return 0; 
} 