# Basic Calculator

## Concerns about scalability on the code
The main difference between using a switch-case and a function pointer array is all about how easy it is to extend or modify the code. 

- The function pointer approach is `open for extension, closed for modification` which means we can add a new operation 
(like modulus or exponent) just by writing a new operation function and adding it to the pointer array, without changing the 
existing logic.

- The switch-case approach is `open for modification, closed for extension` because any time you want to add or change an operation, 
you have to go inside the big switch statement and update the code, which might break something that works already. 
So, the function pointer approach scales way better and follows the Open/Closed principle much more closely!