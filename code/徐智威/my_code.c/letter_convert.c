#include<stdio.h>

#define gap 32

unsigned char ch1, ch2;

unsigned char ch1, ch2;

int main()
{
        do
        {
                printf("请输入“单”个“字母”:");
                scanf("%s", &ch1);
                while (getchar() != '\n');
        } while (ch1 < 'A' || ch1>'z' || ch1 > 'Z' && ch1 < 'a');

        if (ch1 >= 'A' && ch1 <= 'Z') ch2 = ch1 + gap;
        if (ch1 >= 'a' && ch1 <= 'z') ch2 = ch1 - gap;

        printf("%c\n", ch2);
        return 0;
}
