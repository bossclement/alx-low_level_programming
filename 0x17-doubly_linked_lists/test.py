def is_palindrome(n):
    # Check if a number is a palindrome
    return str(n) == str(n)[::-1]

def largest_palindrome_product():
    largest_palindrome = 0

    for i in range(100, 1000):
        for j in range(i, 1000):
            product = i * j
            if is_palindrome(product) and product > largest_palindrome:
                largest_palindrome = product

    return largest_palindrome

# Find the largest palindrome product
largest = largest_palindrome_product()
print("The largest palindrome made from the product of two 3-digit numbers is:", largest)
