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
