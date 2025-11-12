#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

int mult(int a, int b)
{
    return a * b;
}

int div(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    } else {
        return -1;
    }
}

void calc(int a, int b, int (*operation)(int, int))
{
    printf("%d\n", operation(a, b));
}

void main()
{
    int a, b;
    char op;
    printf("Enter expression: ");
    scanf("%d %c %d", &a, &op, &b);

    switch (op) {
        case '+': 
            calc(a, b, add);
            break;
        case '-':
            calc(a, b, sub);
            break;
        case '*':
            calc(a, b, mult);
            break;
        case '/':
            calc(a, b, div);
            break;
        default:
            printf("[ERROR] Unknown operation.\n");
            break;
    }
}
