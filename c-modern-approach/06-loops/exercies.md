4.
c because the increment happens after the check before the execution of the body.

10.

```c
while(...) {
    continue;
}
```

```c
while(...) {
    goto loop_end;

    loop_end: ;
}
```


12.

```c
for (d = 2; d * d <= n; d++) {
    if (n % d == 0)
       break;
}

```

14. Remove the semicolon in the first line. The body of the loop is null.
