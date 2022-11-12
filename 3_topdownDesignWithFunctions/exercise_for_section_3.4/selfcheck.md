# Self-Check

## 1

Assume that you have functions `print_h, print_i, print_m, print_o` each of which draws a large block letter. What is the effect of executing the following main function?

```c
int main(void)
{
    print_h();
    print_i();
    printf("\n\n\n");
    print_m();
    print_o();
    print_m();

    return 0;
}
```

`"HI\n\n\nMOM"`

## 2

Draw a structure chart for a program with three function subprograms that display DOLL in a vertical Column of block letters.

[structure chart picture](structure_chart.bmp)
[structure chart graphml](structure_chart.graphml)
