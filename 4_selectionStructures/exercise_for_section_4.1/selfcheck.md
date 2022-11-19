# Self-Check

1. Assuming x is 15.0, and y is 25.0, what are the values of the following conditions?

    `x != y` is true  
    `x < x` is false  
    `x >= y - x` is true  
    `x == y + x - y` is true
2. Evaluate each of the following expressions if

    `a = 6`  
    `b = 9`  
    `c = 14`  
    `flag = 1`

    a. `c == a + b || !flag` is false  
    b. `a != 7 && flag || c >= 6`is true  
    c. `!(b <= 12) && a % 2 == 0`is false  
    d. `!( a > 5 || c < a + b )` is true

3. Show step-by-step evaluation of expression 4 in Example 4.2

    `!(flag || (y + z >= x - z))`

    `y + z` = 6  
    `x - z` = 1  
    `y + z >= x - z` = true  
    `(flag || (y + x >= x - x))` = true  
    `!(flag || (y + z >= x - z))` = false
4. Complement each expression in Exercise 2. Use DeMorgan's theorem if applicable!

    a. `c != a + b && flag`  
    b. `a == 7 || !flag && c < 6`  
    c. `b <= 12 && a % 2 != 0`  
    d. `b > 5 && c >= a + b`
