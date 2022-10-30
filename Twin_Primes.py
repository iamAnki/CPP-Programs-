"""
Author: Bipin P. (mailto: bipinp2013@gmail.com)
http://iambipin.com
101010101    10  101010101    10  101     10    101010101
1010101010   10  1010101010   10  1010    10    1010101010
10      101  10  10      101  10  10 01   10    10      101
10      101  10  10      101  10  10  10  10    10      101
1010101010   10  1010101010   10  10   01 10    1010101010
1010101010   10  101010101    10  10    1010    101010101
10      101  10  10           10  10     010    10
10      101  10  10           10  10      10    10
1010101010   10  10           10  10      10    10
101010101    10  10           10  10      10    10  10
Python Program to print twin primes within a range
"""

def prime(num):
    """"
    To check whether a number is prime
    """
    num2 = num
    while num2 > 0:
        if num == num2: 
            num2 -= 1
        elif num2 == 1:
            num2 -= 1            
        elif num % num2 == 0:
            return False
        num2 -= 1
        
    return True

try:
    #defines the range within which the twin primes to be found
    n = int(input('Enter a number within which the twin primes are to be found: '))
    if n <= 3:
        raise ValueError
    rangeList = range(2,n) 
    #list of prime numbers is created using filter()
    primeList = list(filter(prime, rangeList))
    print('\n')
    
    print('There are {0} prime numbers from 1 to {1}. They are:' .format(len(primeList), n))
    print(primeList)
    
    print('\n')
    #using list comprehension to create a list of twin primes
    twinPrimes = [(i, i+2) for i in primeList if i+2 in primeList]
    print('There are {0} twin primes from 1 to {1}. They are:' .format(len(twinPrimes), n))
    print(twinPrimes)
    print('\n')
      
except(ValueError):
    print('Please enter a valid integer number greater than 3')
    