# Programming projects

## 1

### Analysis

You have saved $500 to use as down payment on a car. Before beginning your car shopping, you decide to write a program to help you figure out what your monthly payment will be, given the car's purchas price, the monthly interst rate, and the time period over which you will pay beck the loan. the formula for calculating your payment is

`payment = iP / (1 - (1 + i)^(-n))`

where P = principal (the amount you borrow)  
i = monthly interest rate (1/12 of the annual rate)  
n = total number of payments  

your program should prompt the user for the purchase price, the down payment, the annual interest rate, and the total number of payments (usually 36, 48, or 60). It should then display the amount borowwed and the monthly payment including a dollar sign and two decimal places.

### input

1. purchase price
2. down payment
3. annual interest rate
4. number of payments

### output

1. amount borowwed
2. monthly payment

### process

1. get purchase price, down payment, annual interest rate, number of payments
2. compute amount borowwed
3. compute monthly payment
4. Display amount borowwed and monthly payment

#### 2 refinement process

2.1 amount borowwed = purchase price - down payment

#### 3 refinement process

3.1 payment = amount borowwed * monthly interest rate / (1 - (1 + monthly interest rate)^(-number of payments))

#### 3.1 refinement process

monthly interest rate = 1/12 of the annual rate

### source code

[payment calculator](payment.c)

## 3

### 3 Analysis

Write a program that promts the user to enter the radius of the circle base of a cone and the slant height of the cone. The program must compute the total surface area of a right circular cone and display it back to the user. (Hint: pi will be used in the equation to calculate the total surface area and hence, you may have to use an appropriate value for it.)

### 3 input

1. base radius
2. slant height of the cone

### 3 output

1. surface area

### 3 process

1. get base radius, and slant height
2. compute the total surface area
3. display total surface area

#### 3.2 refinement

3.2.1 total surface area = pi * base radius (base radius + slant height)

### 3 source code

[total cone surface area calculator](cone_total_surface.c)

## 4

### 4 analysis

For any integer `n > 0`, `n!` is defined as the product `n * n-1 * n-2 ....* 2 * 1` 0! is defined to be 1. It is sometimes useful to have a closed-form definition istead; For this purpose, an approximation can be used. R. W. Gosper proposed the following such approximation formula

`n! ~= n^n * e^(-n) ((2n + 1/3)pi)^0.5`

Create a program that prompts the user to enter an integer n, uses Gosper's formula to approximate n!, and then displays the result. The message displaying result should look something like this:

`5! equals approximately 119.97003`

Your program will be easier to debug if you use some intermediate values instead of trying to compute the result in a single expression. If you are not getting the correct results, then you can compare the results of your intermediate values to what you get when you do the calculations by hand. Use at least Display two each intermediate of these intermediate variables—one values for 2n to simplify + 3 1 and debugging. one for 2(2n Be sure + 13). to use a named constant for PI, and use the approximation 3.14159265. Test the program on nonnegative integers less than 8.

### 4 input

n

### 4 output

the n!

### 4 process

1. get n
2. compute n!
3. display n!

#### 4.2 refinement

4.2.1 n! ~= eq1 * sqrt(eq2)

#### 4.2.2 refinement

4.2.2 eq1 = pow(n, n) \* exp(-n)
4.2.3.eq2 = (2n + 1/3) \* pi

### 4 source code

[n! calculator](n.c)

## 5 student finance calculator

### 5 input

1. monthly_payment
2. hourly rate work income
3. monthly install

### 5 outpu

1. How many hours have to work

### 5 process

1. get monthly_payment, hourly_rate, monhtly_install
2. compute hour neeeded
3. display the hour needed

#### 5.2 refinement

5.2.1 hour needed = install_income_gap / hourly_rate

#### 5.2.1 refinement

5.2.1.1 install_income_gap = monthly_install - monthly_payment

### 5 source code

[hour needed calculator](hour_needed.c)
