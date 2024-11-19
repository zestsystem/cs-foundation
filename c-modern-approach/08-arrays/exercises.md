1.
The problem with sizeof(a) / sizeof(t) as opposed to sizeof(a) / sizeof(a[0]) is that the user would have to locate the declaration of and make sure that its element have type t.

2. 
To use digit as a subscript you would do something like this:
```c
a[d - '1'];
```

7.
```c
const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1 },
    {0, 1, 1},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 1, 1},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0, 1, 1}
}

```

