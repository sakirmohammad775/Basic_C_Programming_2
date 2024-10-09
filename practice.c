#include <stdio.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    
  
    if ((a + b) + c == d || (a + b) - c == d || (a + b) * c == d ||
        (a - b) + c == d || (a - b) - c == d || (a - b) * c == d ||
        (a * b) + c == d || (a * b) - c == d || (a * b) * c == d ||
        a + (b + c) == d || a + (b - c) == d || a + (b * c) == d ||
        a - (b + c) == d || a - (b - c) == d || a - (b * c) == d ||
        a * (b + c) == d || a * (b - c) == d || a * (b * c) == d) {
        printf("YES\n");
    } else {
        printf("YES\n");
    }

    return 0;
}//not solve

// Examples
// InputCopy
// 3 4 5 23
// OutputCopy
// YES
// InputCopy
// 9 5 3 7
// OutputCopy
// YES
// InputCopy
// 1 2 3 1
// OutputCopy
// NO