---
layout: default
title: "Lab 12b: Sorting and Finding Median of an Array"
---

# Getting Started

Refer to [Lab 1](lab01.html) if you need a reminder about how to start **Cygwin Terminal** or **Notepad++**.

Start by downloading [CS101\_Lab12b.zip](CS101_Lab12b.zip), saving it in the directory **H:\\CS101**.

Start a **Cygwin Terminal** and run the following commands:

    cd h:
    cd CS101
    unzip CS101_Lab12b.zip
    cd CS101_Lab12b

Using **Notepad++**, open the file

> **H:\\CS101\\CS101\_Lab12b\\Sorter.cpp**

# Your Task

Your task is to create a program that will load positive values into an array until a negative value is entered, sort the values stored in the array from smallest to largest, and then extract the median value.

The application must be able to take up to 10 **double** values as input (assume a negative value indicates the end of data entry). The output should be a list of values, from smallest to largest, which are printed from elements of the array along with the median value.

Example run (user input in **bold**):

<pre>
Enter value 1: <b>1.2</b>
Enter value 2: <b>3.0</b>
Enter value 3: <b>4.1</b> 
Enter value 4: <b>1.1</b>
Enter value 5: <b>4.5</b>
Enter value 6: <b>-1</b>

The values from smallest to largest:
1.1 1.2 3.0 4.1 4.5

The median value is 3.00
</pre>

Another example run (user input in **bold**):

<pre>
Enter value 1: <b>4.6</b>
Enter value 2: <b>2.5</b>
Enter value 3: <b>3.8</b> 
Enter value 4: <b>3.2</b> 
Enter value 5: <b>1.7</b>
Enter value 6: <b>5.1</b>
Enter value 7: <b>-4</b>

The values from smallest to largest:
1.7 2.5 3.2 3.8 4.6 5.1

The median value is 3.5
</pre>


When you are ready to compile the program, in the Cygwin window type the
command

    make

To run the program, in the Cygwin window type the command

    ./Sorter.exe

## Hints

Make sure to give the proper conversion specifier (**%lf**) to scan the
input data.

Be certain to allow enough array space for a maximum of 10 values.

Remember that array indexes (the *i* in a\[i\], say) must be integers
and range from 0 to *n*-1 where *n* is the number of elements in the
array.

Remember that swapping array values requires a "swap" variable.

A useful sorting algorithm is something called the "bubble sort." This
algorithm works as follows:

**(1)** For each value in the array, test whether the current value is
larger than the next. So, for element 2 of the array, we would test
element 2 against element 3.

**(2)** If the current value is larger, swap the values within the
array. Again, if this were element 2, if we found that element 2 was
greater than element 3, we would place element 2's value in the third
place in the array, and element 3's value in the second place.

**(3)** Continue doing this a number of times equal to the number of
elements in the array minus one. Each time past the first, the code
needs to go one fewer step into the array. That's because, for example,
after the first time through, the largest element is guaranteed to be at
the end of the array. After the second time through, the last two
elements of the array will be sorted, and so on.

To find the median, after the array is sorted the median is either

-   The middle element if the number of array elements is *odd*
-   The average of the two middle elements if the number of array elements is *even*

# Submit

To submit your work, type the command

    make submit

Enter your Marmoset username and password (which you should have received by email.) Note that your password will not be echoed to the screen.
