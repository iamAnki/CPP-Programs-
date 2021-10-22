## Armstrong number in C++ Program

An Armstrong number is a number which is equal to the sum of digits raise to the power total number of digits in the number.

### Examples of Armstrong number :

0, 1, 2, 3, 153, 370, 407, 1634

### Logic:  

First, we’ll count the number of digits in the given number. Then, we’ll calculate the power of each digit and store the sum of digits. If the sum is the same as the original number, then, the number is called Armstrong number.

### Algorithm:  

* Run a for loop to find the number of digits in the number.
* Create a function to calculate the product of the digit raised to the power.
* Add the calculated product to the final sum.
* Compare the original number with the final sum and output accordingly.

### Code :

[Armstrong Number in C++](./armstrong.cpp)

### Output :

```
Enter a number 3
Armstrong number!
```