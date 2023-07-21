#include <stdio.h>
#include <math.h>

int is_pentagonal(long long n)
{
    double x = (sqrt(24 * n + 1) + 1) / 6;
    return x == (int)x;
}

int is_hexagonal(long long n)
{
    double x = (sqrt(8 * n + 1) + 1) / 4;
    return x == (int)x;
}

int main() {
    long long t = 286, p = 166, h = 144;
    long long triangle, pentagonal, hexagonal;
    while (1) {
        triangle = t * (t + 1) / 2;
        pentagonal = p * (3 * p - 1) / 2;
        hexagonal = h * (2 * h - 1);
        if (is_pentagonal(triangle) && is_hexagonal(triangle)) {
            printf("%lld\n", triangle);
            break;
        }
        if (pentagonal < triangle) p++;
        if (hexagonal < triangle) h++;
        t++;
    }
    return 0;
}
