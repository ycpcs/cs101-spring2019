---
layout: default
title: "Lab 11: Barn Door"
---

# Getting started

Refer to [Lab 1](lab01.html) if you need a reminder about how to start **Cygwin Terminal** or **Notepad++**.

Start by downloading [CS101\_Lab11.zip](CS101_Lab11.zip), saving it in the directory **H:\\CS101**.

Start a **Cygwin Terminal** and run the following commands:

    cd h:
    cd CS101
    unzip CS101_Lab11.zip
    cd CS101_Lab11

Using **Notepad++**, open the file

> **H:\\CS101\\CS101\_Lab11\\BarnDoor.cpp**

# Design notes

In your design sketch, specify how the program will determine the conditions under which each kind of text character in the barn door will be printed, depending on the row and column.  See the suggested nested loop structure in the Hints section.

# Your task

Your task is to design and implement a program to print a "barn door" using text characters.

Here is an example run of the program (user input in **bold**):

<pre>
What size barn door? <b>3</b>
---
|X|
---
</pre>

Another example run of the program (user input in **bold**):

<pre>
What size barn door? <b>7</b>
-------
|\   /|
| \ / |
|  X  |
| / \ |
|/   \|
-------
</pre>

Another example run of the program (user input in **bold**):

<pre>
What size barn door? <b>11</b>
-----------
|\       /|
| \     / |
|  \   /  |
|   \ /   |
|    X    |
|   / \   |
|  /   \  |
| /     \ |
|/       \|
-----------
</pre>

Another example run of the program (user input in **bold**):

<pre>
What size barn door? <b>4</b>
The size must be odd
</pre>

Another example run of the program (user input in **bold**):

<pre>
What size barn door? <b>1</b>
The size must be at least 3
</pre>

The size the user enters is the number of lines and columns in the barn door to be printed.  The size must be odd and greater than or equal to 3.

You can compile your program with the command

    make

You can run your program with the command

    ./BarnDoor.exe

## Hints

The program will need to print an *N*x*N* block of characters, where *N* is the size entered by the user.

A good way to get started is with the following nested loop structure (which assumes the variable `size` is the user input value):

```c
for (int i = 0; i < size; i++) {
    for (int j = 0; j < size; j++) {
        printf(".");
    }
    printf("\n");
}
```

This starting code will print a solid block of **.** characters.  You can modify the code inside the inner loop to select an appropriate character to print based on the current values of `i` (the row) and `j` (the column).

You can print a single backslash (**\\**) character with the code

```c
printf("\\");
```

# Submit

To submit your work, type the command

    make submit

Enter your Marmoset username and password (which you should have received by email.) Note that your password will not be echoed to the screen.

<!-- vim:set wrap: ­-->
<!-- vim:set linebreak: -->
<!-- vim:set nolist: -->
