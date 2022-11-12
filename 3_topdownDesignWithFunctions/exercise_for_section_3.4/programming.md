# Programming

## 1

Write a function `draw_parallel` that draws parallel lines and a function `draw_rectangle` that uses `draw_parallel` and `draw_base` to draw a rectangle.

```c
void draw_parallel(void)
{
    printf("| |");
}
void draw_base(void)
{
    printf("_");
}
void draw_rectangle(void)
{
    draw_base();
    draw_parallel();
    draw_basae();
}
```

## 2

Write a complete program for the problem described in self-check exercise 2.

[vertical DOLL displayer program](doll.c)

## 3

Rewrite the miles-to-kilometers conversion program shown in Fig. 2.1, so that it includes a function that displays instruction to its user.

[miles to kilometers converter](miles_to_kilometers.c)
