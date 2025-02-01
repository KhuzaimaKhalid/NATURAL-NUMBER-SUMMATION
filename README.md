# NATURAL NUMBER SUMMATION
Description
The Natural Number Summation program is a simple C application that computes the sum of all natural numbers from 1 to a specified integer ( n ). The program uses a recursive function to perform the summation and displays the result to the user.

Features
Prompts the user to enter a positive integer.
Uses a recursive function to calculate the sum of natural numbers from 1 to ( n ).
Displays the calculated sum to the user.
How It Works
The program starts by displaying a welcome message.
It prompts the user to enter a positive integer ( j ).
The program reads the input and calls the sum function, which calculates the sum recursively:
If ( n ) is equal to 1, the function returns 1 (since the sum of the first natural number is 1).
Otherwise, it calls itself with the argument ( n-1 ) and adds ( n ) to the result of that call.
The final sum is printed to the console.
