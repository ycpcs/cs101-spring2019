---
layout: default
title: "Assignment 4: Roulette"
---

**Due dates**:

* Code due: **Wednesday, Oct 24th** by 11:59 PM

Getting Started
===============

Start by downloading [CS101\_Assign04.zip](CS101_Assign04.zip), saving it in the directory **H:\\CS101**.

Start a **Cygwin Bash Shell** and run the following commands:

    cd h:
    cd CS101
    unzip CS101_Assign04.zip
    cd CS101_Assign04

Using **Notepad++**, open the file

> **H:\\CS101\\CS101\_Assign04\\Roulette.cpp**

You will add your code to this file.

When you are ready to compile the program, in the Cygwin window type the command

    make

To run the program, type the command

    ./Roulette.exe

Your Task
=========

The program should prompt the user to enter the initial amount of money they are starting with, obtain a bet amount and the bet type, then spin of the wheel to determine whether the user won or lost updating the user's account. The user should then be prompted to play again until they chose to quit or run out of money.

**Summary of Roulette**:
There are 38 slots, two green, and the rest numbered 1 through 36.  If you land
on green, you automatically lose your bet.  If you bet odd or even and you win,
you win the same amount that you bet plus you get your bet back.  If you bet on
a number and win, you win 35 times your bet plus you get your bet back.

Here is an example run (user input in bold):

<pre>
Enter the amount of money you are starting with: $ <b>100</b>

Enter your bet: $ <b>3</b>

How do you wish to bet?
1 To bet on Odd
2 To bet on Even
3 To bet on a Particular Number

<b>1</b>

The ball landed on a green slot.
Sorry, you lose $3.00

Your total winnings are $-3.00
Your current account is $97.00

Enter 0 to Quit, 1 to Continue: <b>1</b>

Enter your bet: $ <b>4</b>

How do you wish to bet?
1 To bet on Odd
2 To bet on Even
3 To bet on a Particular Number

<b>2</b>

The ball landed on 16.
That's even, you win $4.00

Your total winnings are $1.00
Your current account is $101.00

Enter 0 to Quit, 1 to Continue: <b>1</b>

Enter your bet: $ <b>3</b>

How do you wish to bet?
1 To bet on Odd
2 To bet on Even
3 To bet on a Particular Number

<b>3</b>

Enter the number you would like to bet on (1 - 36 only): <b>25</b>

The ball landed on 19.
Sorry, you lose $3.00

Your total winnings are $-2.00
Your current account is $98.00

Enter 0 to Quit, 1 to Continue: <b>0</b>

Thank you for playing Roulette.
</pre>

### Roulette Functions

Your program **MUST** use the following functions:

-   get_bet_amount() - which takes the current account as a parameter, and returns a valid bet amount obtained from the user. The function should contain all prompts for the user and validate that the bet is greater than 0 and less than the current account amount.
-   get_bet_type() - which takes no parameters, and returns a valid bet type obtained from the user. The function should contain all prompts for the user and validate the type is between 1-3.
-   get_number() - which takes no parameters, and returns the user's chosen value between 1-36. The function should contain all prompts for the user and validate the number is between 1-36. This function should be called if the bet type is particular number.
-   spin_wheel() - which takes no parameters, and returns a random number generated between 0-37
-   evaluate_odd() - which takes a parameter for the spin and a parameter for the bet, and returns the appropriate winnings (or losses as a negative value). This function should print the result and be called if the bet type is odd.
-   evaluate_even() - which takes a parameter for the spin and a parameter for the bet, and returns the appropriate winnings (or losses as a negative value). This function should print the result and be called if the bet type is even.
-   evaluate_number() - which takes a parameter for the user's number, a parameter for the spin, and a parameter for the bet, and returns the appropriate winnings (or losses as a negative value). This function should print the result and be called if the bet type is particular number.
-   print_winnings() - which takes a parameter for the total winnings so far, and a parameter for the current amount of the account, and returns no value. The function should print out the total winnings so far and the current amount of money the user has remaining.

### Approach/Hints

**Main**

Consider how to design the program to utilize the functions. Main() should only

-   Obtain the user's initial account amount
-   Call functions with appropriate logic to play the game
-   Update the user's account based on the results
-   Allow the user to continue playing

**Function declarations**

Consider the data types for each parameter and the return type of each function. **Write each function as a standalone routine.** Be sure to add function prototypes before main().

**Spinning the wheel**

You can call slot 0 and slot 37 green and then you should have slots 1 - 36 left.

You should add the following **#include** directives at the
top of the file:

    #include <stdlib.h>
    #include <time.h>

Near the beginning of the statements in your **main** function,
add the statement

    srand(time(0));

This statement will seed the random number generator with a value
based on the current time.

When the program simulates a spin of the roulette wheel,
it can "randomly" choose an integer in the range
0 through 37 (inclusive) using the expression

    rand() % 38

Grading
=======

Your grade will be determined as follows:

* get_bet_amount(): 10
* get_bet_type(): 10
* get_number(): 10
* spin_wheel(): 10
* evaluate_odd(): 10
* evaluate_even(): 10
* evaluate_number(): 10
* print_winnings(): 10
* main(): 20

We expect you to use good coding style.  Points may be deducted for poor variable names, inconsistent or missing indentation, and/or lack of comments.

Submitting
==========

To submit your code, make sure your **Roulette.cpp** file is saved, and in the Cygwin window type 

    make submit

Enter your Marmoset username and password (which you should have received by email.) Note that your password will not be echoed to the screen. Make sure that after you enter your username and password, you see a message indicating that the submission was successful.

If the **make** commands above do not work, you can [submit using the web interface](../submitting.html) (see the link for details).

Make sure that you check the file(s) you submitted to ensure that they are correct.  See the instructions for [Verifying your submission](../submitting.html#verifying-your-submission).