#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(int argc, char *argv[])
{
    float arg1, arg2, ans;
    char operator;

    printf("Question:\t");
    scanf("%f %c %f", &arg1, &operator, &arg2);

    switch(operator)
    {
        case '+': ans = arg1+arg2;
                    break;
        case '-': ans = arg1-arg2;
                    break;
        case '*': ans = arg1*arg2;
                    break;
        case '/': ans = arg1/arg2;
                    break;
        case '^': ans = pow(arg1, arg2);
                    break;
        default: goto fail;
    }

    printf("answer: %.9g\n", ans);
    goto exit;

    fail: printf("invalid input\n");

    exit: return 0;
}

