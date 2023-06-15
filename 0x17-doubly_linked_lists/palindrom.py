#!/usr/bin/python3
def is_palindrome(n):
    # Check if a number is a palindrome
    return str(n) == str(n)[::-1]

largest_palindrome = 0

# Iterate through all possible products of two 3-digit numbers
for i in range(999, 99, -1):
    for j in range(i, 99, -1):
        product = i * j

        # Check if the product is a palindrome and larger than the current largest palindrome
        if is_palindrome(product) and product > largest_palindrome:
            largest_palindrome = product
            break  # Stop iterating once we find the largest palindrome

# Save the result in the file "102-result"
with open("102-result", "w") as file:
    file.write(str(largest_palindrome))

