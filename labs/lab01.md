---
layout: default
title: "Lab 1: Hello, CS101!"
---

In this lab, you will learn how to use the cygwin/gcc environment to write, compile, and run C programs.

Getting Started
===============

**(1)** Note that the first step will be slightly different, depending on whether you are using Windows or Linux (note that KEC 119 has been converted to Windows, so that all KEC labs now have Windows PCs.

**Windows**

Start the cygwin bash shell. This is available from the **Start** menu on all of the computers in the KEC building. The full path in the menu is:

> **Start &rarr; All Programs &rarr; Cygwin &rarr; Cygwin Terminal**

Once the cygwin bash shell has started, type the following commands, pressing the **Enter** key after each command:

    cd h:
    mkdir -p CS101
    cd CS101

**Linux**

Start a terminal by opening the Mint menu and choosing **System Tools &rarr; Terminal**.

In the terminal, run the commands:

    mkdir -p CS101
    cd CS101

**(2)** Using a web browser, download [CS101\_Lab01.zip](CS101_Lab01.zip). Save the zip file in the **CS101** directory within your home directory.

**(3)** From the Cygwin bash shell or terminal, run the following command:

    unzip CS101_Lab01.zip

When you run this command, you should see output looking something like the following:

    Archive:  CS101_Lab01.zip
      extracting: CS101_Lab01/hello.cpp
       inflating: CS101_Lab01/Makefile
       inflating: CS101_Lab01/submitToMarmoset.pl

**(4)** Navigate into the **CS101\_Lab01** directory containing the lab files:

    cd CS101_Lab01

**(5)** Start the **Notepad++** (Windows) or **Pluma** (Linux) text editor.

On Windows, Notepad++ is available from the **Start** menu:

> **Start &rarr; All Programs &rarr; Notepad++ &rarr; Notepad++**

On Linux, Pluma is available by opening the Mint menu and choosing **Accessories &rarr; Text editor**.

Once your text editor has started, choose **File&rarr;Open** from the menu, and open the file

> **CS101\_Lab01/hello.cpp**

Your Task
=========

Your task is to add a **main** function to the **hello.cpp** file to accomplish the following tasks:

1.  Print the message **Hello, CS 101!** to the output window
2.  Prompt the user for their age in years. Store the value entered by the user in an **int** variable.
3.  Print the message **OK, you are N years old**, where *N* is the integer value entered by the user.

Here is an example run (user input in **bold**):

<pre>
Hello, CS 101!
How old are you? <b>36</b>
OK, you are 36 years old
</pre>

To compile the program (run the compiler to translate your C source code into an executable file), run the following command using the Cygwin bash shell:

    make

If the compilation is successful, you should see something like the following output:

    g++ -g -Wall   -c -o hello.o hello.cpp
    g++ -o hello.exe hello.o

If you see a compiler error message, ask the instructor or lab coach for help.

Once the program is compiled, run the program by typing the following command in the Cygwin bash shell:

    ./hello.exe

Hints
=====

-   Put **#include &lt;stdio.h&gt;** at the top of **hello.cpp**. This will allow your progam to use the **printf** and **scanf** functions.
-   Use the **printf** function to print output to the screen.
-   Declare an **int** variable to store the user's age.
-   Use the **scanf** function to read the user's age.

Submitting
==========

When you are done, run the following command from the Cygwin bash shell:

    make submit

You will be prompted for your Marmoset username and password, which you should have received by email. The entire submission process should produce output that looks something like the following:

<pre>
$ <b>make submit</b>
Creating submit.properties file
Collecting the names of files to be submitted
Creating a solution zip file
updating: hello.cpp (deflated 4%)
updating: submitToMarmoset.pl (deflated 60%)
updating: Makefile (deflated 52%)
perl submitToMarmoset.pl solution.zip submit.properties
Enter your username: <b>jstudent</b>
Enter your password: 
######################################################################
              >>>>>>>> Successful submission! <<<<<<<<<

Make sure that you log into the marmoset server to manually
check that the files you submitted are correct.

Details:

         Semester:   Spring 2017
         Course:     CS 101
         Assignment: lab01

######################################################################
</pre>

You will use your own username in place of "jstudent". Note that when you type your password, it will not be echoed to the screen.
