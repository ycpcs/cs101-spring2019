---
layout: default
title: "Assignment 2: Calendar"
---

**Due dates**:

* Milestone 1:
    * Design due: **Friday, Sept 14th** in class
    * Code due: **Wednesday, Sept 19th** by 11:59 PM
* Milestone 2:
    * Design due: **Friday, Sept 21st** in class
    * Code due: **Wednesday, Sept 26th** by 11:59 PM


Getting Started
===============

Start by downloading [CS101\_Assign02.zip](CS101_Assign02.zip), saving it in the directory **H:\\CS101**.

Start a **Cygwin Bash Shell** and run the following commands:

    cd h:
    cd CS101
    unzip CS101_Assign02.zip
    cd CS101_Assign02

Using **Notepad++**, open the file

> **H:\\CS101\\CS101\_Assign02\\Calendar.cpp**

You will add your code to this file.

When you are ready to compile the program, in the Cygwin window type the command

    make

To run the program, type the command

    ./Calendar.exe

Your Task
=========

The program should prompt the user to enter the month and year as integers. It should then print out

1.  How many days the specified month has, and
2.  What day of the week the first day of the specified month falls on

Then it will display a formatted calendar for that month.

Example run (user input in **bold**):

<pre>
Enter month and year: <b>9 2018</b>
There are 30 days in the month.
The month starts on a Saturday.

September 2018
Sunday     Monday     Tuesday    Wednesday  Thursday   Friday     Saturday   
                                                                  1          
2          3          4          5          6          7          8          
9          10         11         12         13         14         15         
16         17         18         19         20         21         22         
23         24         25         26         27         28         29         
30         
</pre>

Note that your program must ensure that the user enters a month that is valid (in the range 1..12) and a year that is after 4713 BC. If an invalid month or year is entered, the program should prompt the user to re-enter the month and year:

<pre>
Enter month and year: <b>13 2012</b>
Invalid date, please re-enter month and year: <b>10 -5000</b>
Invalid date, please re-enter month and year: <b>2 2018</b>
There are 28 days in the month.
The month starts on a Thursday.

February 2018
Sunday     Monday     Tuesday    Wednesday  Thursday   Friday     Saturday   
                                            1          2          3          
4          5          6          7          8          9          10         
11         12         13         14         15         16         17         
18         19         20         21         22         23         24         
25         26         27         28         
</pre>

## Milestone 1

In **Milestone 1**, your tasks are to

-   obtain the user input for month and year using a single `scanf` statement. **NOTE:** You do **not** need to validate the range of the inputs for this milestone.
-   determine the number of days in the month. **NOTE:** You will need to account for leap years if the user selects February.
-   determine the day of the week the month starts on. **NOTE:** This can be done by computing the *Julian day*.
-   print the output for the number of days in the month and the day the month starts on.

Here is an example run of the program for **Milestone 1** (user input in **bold**):

<pre>
Enter month and year: <b>9 2018</b>
There are 30 days in the month.
The month starts on a Saturday.
</pre>

Another example run (user input in **bold**):

<pre>
Enter month and year: <b>2 1996</b>
There are 29 days in the month.
The month starts on a Thursday.
</pre>

### Approach/Hints

**Number of days in month**

To determine the number of days in the month:

-   January, March, May, July, August, October, and December each have 31 days
-   April, June, September, and November each have 30 days
-   February has 28 days, except in leap years, when it has 29 days

**Leap Years**

A year is a leap year if *either*:

-   It is evenly divisble by 4 and not evenly divisible by 100, or
-   It is evenly divisible by 400

For example, 1996 and 2000 were leap years, but 1900 and 2003 were not leap years.

**Julian Day Computation**

A [Julian Day Number](http://en.wikipedia.org/wiki/Julian_day) is an integer representation of dates since January 1, 4713 BC.

Assuming that **M** is a month (1 for January), **D** is a day of the month (1 for the first day of the month), and **Y** is a year, then the Julian Day Number (JDN) can be computed as follows:

> JDN = (1461 × (Y + 4800 + (M - 14)/12))/4 +(367 × (M - 2 - 12 × ((M - 14)/12)))/12 - (3 × ((Y + 4900 + (M - 14)/12)/100))/4 + D - 32075
>
> [source: Wikipedia]

Note that all divisions in the formula above are integer divisions, meaning that any fraction in the quotient is discarded.

Any Julian Day Number can be taken modulo 7 in order to determine which day of the week the day falls on:

> Test | Day of week
> ---- | -----------
> (JDN+1) % 7 == 0 | Sunday
> (JDN+1) % 7 == 1 | Monday
> (JDN+1) % 7 == 2 | Tuesday
> (JDN+1) % 7 == 3 | Wednesday
> (JDN+1) % 7 == 4 | Thursday
> (JDN+1) % 7 == 5 | Friday
> (JDN+1) % 7 == 6 | Saturday

### Deliverables for Milestone 1

The [design artifact](../design-template.pdf) for Milestone 1 is due at the beginning class on **Friday, Sept 14th**.  Make sure that you fill out the "Strategy" and "Control flow sketch" sections of the design template.

The code for Milestone 1 should be submitted to Marmoset (using the command `make submit_ms1`) by the end of the day on **Wednesday, Sept 19th**.

## Milestone 2

In **Milestone 2**, using the information from **Milestone 1** your tasks are

-   validate the user input such that the month is in the range 1-12 and the year is after 4713 BC. **NOTE:** Consider using a **while** loop with appropriate conditions.
-   print the name of the month and year
-   print the days of the week. **Note:** Each day should be left justified in a field with 11 characters.
-   print the first week using leading blank fields (11 spaces) prior to the first day of the month. **NOTE:** This **MUST** be done using a loop. Consider how the modulo of the Julian day from **Milestone 1** relates to the number of blank fields needed.
-   print the remaining days of the week with proper formatting such that the day number is left justified in the 11 character field. **NOTE:** This **MUST** be done using a loop. Consider logic to determine the number of trailing spaces for single digit days vs. two digit days for proper spacing.

Here is an example run of the program for **Milestone 2** (user input in **bold**):

<pre>
Enter month and year: <b>9 2018</b>
There are 30 days in the month.
The month starts on a Saturday.

September 2018
Sunday     Monday     Tuesday    Wednesday  Thursday   Friday     Saturday   
                                                                  1          
2          3          4          5          6          7          8          
9          10         11         12         13         14         15         
16         17         18         19         20         21         22         
23         24         25         26         27         28         29         
30         
</pre>

Another example run (user input in **bold**):

<pre>
Enter month and year: <b>13 2012</b>
Invalid date, please re-enter month and year: <b>10 -5000</b>
Invalid date, please re-enter month and year: <b>2 2018</b>
There are 28 days in the month.
The month starts on a Thursday.

February 2018
Sunday     Monday     Tuesday    Wednesday  Thursday   Friday     Saturday   
                                            1          2          3          
4          5          6          7          8          9          10         
11         12         13         14         15         16         17         
18         19         20         21         22         23         24         
25         26         27         28         
</pre>

### Approach/Hints

**Separating weeks**

Consider using multiple counters for which day is currently being printed and for the number of days previously printed to determine when a new week starts in order to begin the next line of output.

### Deliverables for Milestone 2

The [design artifact](../design-template.pdf) for Milestone 2 is due at the beginning class on **Friday, Sept 21st**.  Make sure that you fill out the "Strategy" and "Control flow sketch" sections of the design template.

The code for Milestone 2 should be submitted to Marmoset (using the command `make submit_ms2`) by the end of the day on **Wednesday, Sept 26th**.

Grading
=======

Your grade will be determined as follows:

### Milestone 1 - 40 points

* Design artifact: 5
* Input month/year: 5
* Determine number of days in the month: 10
* Determine leap years: 5
* Determine starting day of the month: 15

### Milestone 2 - 60 points

* Design artifact: 5
* Validate month and year input, re-prompt if invalid value is entered: 5
* Print proper month and year: 5
* Print day header: 5
* Proper day number format: 5
* Print proper first week: 15
* Print proper number of days: 10
* Print proper weeks: 10

We expect you to use good coding style.  Points may be deducted for poor variable names, inconsistent or missing indentation, and/or lack of comments.

### Extra Credit - 20 points

Add extra formatting such that

-   The month and year are *centered* over the calendar: 5
-   The day headers and numbers for the days are *centered* in their respective columns: 5
-   There are dashed lines separating the rows and columns: 10

<pre>
Enter month and year: <b>9 2018</b>
There are 30 days in the month.
The month starts on a Saturday.

                                September 2018
------------------------------------------------------------------------------
|  Sunday  |  Monday  |  Tuesday | Wednesday| Thursday |  Friday  | Saturday |
------------------------------------------------------------------------------
|          |          |          |          |          |          |     1    |
-----------------------------------------------------------------------------
|     2    |     3    |     4    |     5    |     6    |     7    |     8    |
-----------------------------------------------------------------------------
|     9    |    10    |    11    |    12    |    13    |    14    |    15    |
-----------------------------------------------------------------------------
|    16    |    17    |    18    |    19    |    20    |    21    |    22    |
-----------------------------------------------------------------------------
|    23    |    24    |    25    |    26    |    27    |    28    |    29    |
-----------------------------------------------------------------------------
|    30    |          |          |          |          |          |          |
------------------------------------------------------------------------------

</pre>

Submitting
==========

To submit your code, make sure your **Calendar.cpp** file is saved, and in the Cygwin window type one of the following commands (depending on whether you are submitting **Milestone 1** or **Milestone 2**).

For **Milestone 1**:

    make submit_ms1

File **Milestone 2**:

    make submit_ms2

Enter your Marmoset username and password (which you should have received by email.) Note that your password will not be echoed to the screen. Make sure that after you enter your username and password, you see a message indicating that the submission was successful.

If the **make** commands above do not work, you can [submit using the web interface](../submitting.html) (see the link for details).

Make sure that you check the file(s) you submitted to ensure that they are correct.  See the instructions for [Verifying your submission](../submitting.html#verifying-your-submission).

<div class="callout">
<b>Important</b>: It is your responsibility to verify that you submitted the correct files.  You may receive a grade of 0 for incorrectly submitted work.
</div>