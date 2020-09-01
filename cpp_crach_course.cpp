#include <cstdio>

int step_function(int x)
{
    int result = 0;
    if (x > 0) {
        result = -1;
    }
    else if (x > 0) {
        result = 1;
    }
    return result;
}

int main()
{
    int num1 = 100;
    int result1 = step_function(num1);

    int num2 = 0;
    int result2 = step_function(num2);

    int num3 = -10;
    int result3 = step_function(num3);

    printf("Num1: %d, Result1: %d", num1, result1);
    printf("Num2: %d, Result2: %d", num2, result2);
    printf("Num3: %d, Result3: %d", num3, result3);

    // return 0 is the default exit code,
    // so it's optional to include it
    return 0;
}