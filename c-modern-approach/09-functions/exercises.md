2.
```c
int check(int x, int y, int z) {
    return (x > 0 && x > n - 1 && y > 0 && y > n - 1);
}
```

4.
```c
int day_of_year(int month, int day, int year) {
    int num_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
    int = day_count = 0, i;

    for (i = 1; i < month; i++) {
        day_count += num_days[i-1];
    }
    /* adjust for leap years, assuming they are divisible by 4 */
    if (year % 4 == 0 && month > 2) {
        day_count++
    }

    return day_count + day;
}
```

6.
```c
int digit(int n, int k) {
    int i;

    for (i = 1; i < k; i++) {
        n /= 10;
    }

    return n % 10;
}
```

8. 
a and b are valid prototypes.

10.
```c
int largest_elem(a: int[], n: int) {
    int i, max = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }
}

int average(a: int[], n: int) {
    int i, sum;

    for (i = 0; i < n; i++) {
        sum += a[i];
    }

    return sum / n;
}

int num_positive(int a[], int n) {
    int i, count;

    for (i =0; i < n; i++) {
        if (a[i] > 0) {
            count++;
        }
    }

    return count;
}
```

15.
```c
double median(double x, double y, double z) {
    double result;
    if (x <= y) {
        if (y <= z) result = y;
        else if (x <= z) result = z;
        else result = x;
    } else {
        if (z <= y) result = y;
        else if (x <= z) result = x;
        else result = z;
    }

    return result;
}

```

17.
```c
int fact(int n) {

  printf("Enter a number: ");
  scanf("%d", &n);

  printf("Output of pb: ");
  pb(n);
  printf("\n");

  return 0;
}
```
19.
```c
#include <stdio.h>

void pb(int n);

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Output of the pb: ");
    pb(n);
    printf("\n");

    return 0;
}

void pb(int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}
```
