#!/usr/bin/python3
"""
    Calculates the fewest number of operations needed
    to result in exactly n H characters in the file.
"""


def minOperations(n):
    if n <= 1:
        return 0

    n_operations = 0
    is_prime = 2

    while (n != 1):
        if n % is_prime == 0:
            n = n / is_prime
            n_operations += is_prime
        else:
            is_prime += 1

    return n_operations
