#include <stdio.h>
int main(void)
{
    unsigned long num, div;
    int isPrime = 1;

    printf("Please enter an integer for analysis(q to stop):\n");
    while ((scanf("%lu", &num)) == 1)
    {
        for (int div = 2; (div * div) <= num; div++)
        {
            if (num % div == 0) // 判断整除
            {
                isPrime = 1;
                if ((div * div) == num)
                    printf("%lu is devided by %ld.\n", num, div);
                else
                    printf("%lu is devided by %ld and %d.\n", num, div, num / div);
                isPrime = 0; // 用来判断是否流入循环
            };
        };
        if (isPrime == 1)
            printf("%lu is a prime.\n", num);
        printf("Please enter next integer to analysis(q to quit):\n");
    };
    printf("Done.");

    return 0;
}
