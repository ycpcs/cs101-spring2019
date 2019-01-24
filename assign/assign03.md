---
layout: default
title: "Assignment 3: Falling Dominoes"
---

**Due dates**:

* Milestone 1:
    * Code due: **Wednesday, Oct 10th** by 11:59 PM
* Milestone 2:
    * Design due: **Friday, Oct 12th** in class
    * Code due: **Thursday, Oct 18th** by 11:59 PM

Getting Started
===============

Start by downloading [CS101\_Assign03.zip](CS101_Assign03.zip), saving it in the directory **H:\\CS101**.

Start a **Cygwin Bash Shell** and run the following commands:

    cd h:
    cd CS101
    unzip CS101_Assign03.zip
    cd CS101_Assign03

Using **Notepad++**, open the file

> **H:\\CS101\\CS101\_Assign03\\Dominoes.cpp**

You will add your code to this file.

When you are ready to compile the program, in the Cygwin window type the command

    make

To run the program, type the command

    ./Dominoes.exe

Your Task
=========

The program should prompt the user to enter the initial configuration for up to 20 dominoes and then

1.  Print the initial configuration
2.  Simulate how the domino configuration will change when the *first* domino is tipped over for 10 time steps.

Here is an example run (user input in bold):

<pre>
Position 1 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>1</b>
Position 2 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>1</b>
Position 3 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>1</b>
Position 4 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>0</b>
Position 5 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>2</b>
Position 6 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>1</b>
Position 7 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>1</b>
Position 8 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>1</b>
Position 9 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>0</b>
Position 10 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>1</b>
Position 11 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>-1</b>

Initial state:
||| /||| |

Tipping over domino 0:
/|| /||| |

Time step 1:
_/| _/|| |

Time step 2:
__/ __/| |

Time step 3:
___ ___/ |

Time step 4:
___ ____ |

Time step 5:
___ ____ |

Time step 6:
___ ____ |

Time step 7:
___ ____ |

Time step 8:
___ ____ |

Time step 9:
___ ____ |

Time step 10:
___ ____ |

Finished!
</pre>

## Milestone 1

In **Milestone 1**, your tasks are to

-   obtain the user input for the initial state for *up to* 20 dominoes where the states are represented by
	- **0** - an empty space
	- **1** - an upright domino
	- **2** - a tipping domino
	- **3** - a horizontal (i.e. fallen) domino
	- **-1** - finished entering states
-   validate that each state is in the range 0-3 or -1.
-   print out the initial configuration using the symbols
	- blank space for an empty space
	- **\|** for an upright domino
	- **/** for a tipping domino
	- **_** for a horizontal (fallen) domino

Here is an example run of the program for **Milestone 1** (user input in **bold**):

<pre>
Enter the initial configuration:
Position 1 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 2 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 3 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>0</b>
Position 4 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 5 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>2</b>
Position 6 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>3</b>
Position 7 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>0</b>
Position 8 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 9 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>-1</b>

Initial state:
|| |/_ |
</pre>

### Approach/Hints

**Domino states**

Use an array of integer values to store the state of each domino and a counter to track the number of valid domino elements. Then use loops to obtain the initial state from the user and print out the initial configuration.

### Deliverables for Milestone 1

The code for Milestone 1 should be submitted to Marmoset (using the command `make submit_ms1`) by the end of the day on **Wednesday, Oct 10th**.

## Milestone 2

In **Milestone 2**, using the initial state from **Milestone 1** your task is to simulate the new states when the first domino is tipped for 10 consecutive time steps.

The rules for updating the state of a domino are as follows:

-   On each timestep, each tipping domino will cause its neighbor to the right to change from upright to tipping if the neighbor is upright) 
-   Any tipping dominoes will change to horizontal
-   All other dominoes will remain unchanged

Here is an example run (user input in bold):

<pre>
Position 1 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 2 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 3 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 4 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>0</b>
Position 5 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>2</b>
Position 6 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 7 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 8 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 9 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>0</b>
Position 10 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 11 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>-1</b>

Initial state:
||| /||| |

Tipping over domino 0:
/|| /||| |

Time step 1:
_/| _/|| |

Time step 2:
__/ __/| |

Time step 3:
___ ___/ |

Time step 4:
___ ____ |

Time step 5:
___ ____ |

Time step 6:
___ ____ |

Time step 7:
___ ____ |

Time step 8:
___ ____ |

Time step 9:
___ ____ |

Time step 10:
___ ____ |

Finished!
</pre>

### Approach/Hints

Start by changing the state of the first domino if it is upright to tipping. If it is not upright, then its state should not change.

Each time step should be implemented as two **for** loops:

-   The first loop finds each tipping domino, changes its right neighbor to "ready to tip" (if it is upright). This is to prevent a cascade effect where changing an upright domino to tipping propagates to its neighbor until the next time step. 
-   The second loop finds each "ready to tip" domino and changes it to "tipping" and changes each "tipping" domino to horizontal.

You should use a value for "ready to tip" positions that is distinct from the values that represent empty, upright, tipping, and horizontal.

Use a third **for** loop to print out the configuration of the playing field after the simulation of the timestep has completed.

Get code working to simulate a single time step before working on multiple time steps. Consider adding debug code to print out the values in the array at intermediate points in the code, e.g. after each of the three **for** loops in a single time step. 

### Deliverables for Milestone 2

The [design artifact](../design-template.pdf) for Milestone 2 is due at the beginning class on **Friday, Oct 12th**.  Make sure that you fill out the "Strategy" and "Control flow sketch" sections of the design template.

The code for Milestone 2 should be submitted to Marmoset (using the command `make submit_ms2`) by the end of the day on **Thursday, Oct 18th**.

Grading
=======

Your grade will be determined as follows:

### Milestone 1 - 35 points

* Declaring an array of proper type and size: 10
* Input initial state in proper array elements: 15
* Print proper initial configuration: 10

### Milestone 2 - 65 points

* Design artifact: 5
* "Tip" first domino: 5
* Print initial "tipped" state: 5
* Loop to find "ready to tip" dominoes: 15
* Loop to update domino states: 15
* Loop to print new state: 10
* Loop for 10 time steps: 10

We expect you to use good coding style.  Points may be deducted for poor variable names, inconsistent or missing indentation, and/or lack of comments.

### Extra Credit - 10 points

Run the simulation only as long as the state changes.

Here is an example run (user input in bold):

<pre>
Position 1 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 2 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 3 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 4 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>0</b>
Position 5 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>2</b>
Position 6 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 7 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 8 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 9 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>0</b>
Position 10 (0=empty, 1=upright, 2=tipping, 3=horizontal): <b>1</b>
Position 11 (0=empty, 1=upright, 2=tipping, 3=horizontal, -1=finished): <b>-1</b>

Initial state:
||| /||| |

Tipping over domino 0:
/|| /||| |

Time step 1:
_/| _/|| |

Time step 2:
__/ __/| |

Time step 3:
___ ___/ |

Time step 4:
___ ____ |

Finished!
</pre>

Submitting
==========

To submit your code, make sure your **Dominoes.cpp** file is saved, and in the Cygwin window type one of the following commands (depending on whether you are submitting **Milestone 1** or **Milestone 2**).

For **Milestone 1**:

    make submit_ms1

File **Milestone 2**:

    make submit_ms2

Enter your Marmoset username and password (which you should have received by email.) Note that your password will not be echoed to the screen. Make sure that after you enter your username and password, you see a message indicating that the submission was successful.

If the **make** commands above do not work, you can [submit using the web interface](../submitting.html) (see the link for details).

Make sure that you check the file(s) you submitted to ensure that they are correct.  See the instructions for [Verifying your submission](../submitting.html#verifying-your-submission).