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
