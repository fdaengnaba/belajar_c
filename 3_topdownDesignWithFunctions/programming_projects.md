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

## 6

Four track stars have entered the mile race at the Penn Relays. Write a program that scans in the race time in minutes and seconds for a runner and compute and displays the speed in feet per second(fps) and in meters per second(mps). (Hints: There are 5.280 feet in one mile, and one kilometer equals 3.282 feet.) Write and call a function that displays instructions to the program user. Run the program for each star's data.

### 6 input

1. time in minutes and second

### 6 output

1. speed in feet per second
2. speed in meter per second

### 6 related equation

1. 1 mile = 5.280 feets
2. 1 km   = 3.282 feets

### 6 process

1. get minutes, seconds
2. compute speed in fps
3. convert fps to mps

#### 6.2 refinement

6.2.1 convert minutes and seconds to time in seconds
6.2.2 fps = feet / time

#### 6.3 refinement

6.3.1 fps to mps = fps * 1000 / 3282

### 6 source code

[speed calculator](speed.c)

## 7

In shopping for a new house, you must consider several factors. In this problem the initial cost of the house, the estimated annual fuel cost, and the annual tax rate are available. Write a program that will determine the total cost of a house after five-year period and run the program for each of the following sest of data

| Initial House cost | Annual Fuel Cost | Tax Rate |
|--------------------|------------------|----------|
| 67000 | 2300 | 0.025 |
| 62000 | 2500 | 0.025 |
| 75000 | 1850 | 0.020 |

to calculate the house cost, add the initial cost tho the fuel cost for 5 years, then add the taxes fo five years. Taxes for one year are computed by multiplying the tax rate by the initial cost. Write and call a function that display instructions to the program user.

### 7 input

1. initial house cost
2. annual fuel cost
3. tax rate

### 7 output

1. house cost

### 7 process

1. display instruction
2. get initial house cost, annual fuel cost, tax rate
3. compute house cost
4. display house cost

#### 7.1 refinement

7.1.1 display program description
7.1.2 display when to input input

#### 7.3 refinement

7.3.1 compute the 5 years fuel cost
7.3.2 compute 5 years tax
7.3.3 house cost = initial house cost + fuel cost  + tax

### 7 source code

[house cost calculator](house.c)

## 8

A bullet train slows from a speed of 200 mi/hr to 150 mi/hr in one minute. Write a computer program that calculates the bullet train's constant rate of acceleration and determines how long the bullet train will take to come to rest, given an initial speed of 200 mi/hr.

a = v~f~ - v~i~ / t

where a is acceleration, t is time interval, v~i~ is initial velocity, and v~f~ is final velosity

Write and call a funtion that displays instructions to the program user and a function that computes a, given t, v~f~ and v~i~

### 8 input

1. initial speed
2. final speed
3. time elapsed

### 8 output

1. acceleration
2. time till stop

### 8 process

1. get initial speed, final speed
2. compute acceleration
3. compute time till stop
4. display result

### 8 source code

[acceleration calc](acceleration.c)

## 9

[flu epidemic prediction](flu.c)
