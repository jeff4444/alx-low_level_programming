#!/usr/bin/python3
def isPalindrome(n):
    n = str(n)
    if (n[::-1] == n):
        return True
    return False

def main():
    r, l = 999, 999

    while (r > 900):
        l = 999
        while l > 900:
            if isPalindrome(l * r):
                print(l , r, " :")
                return l * r
            l -= 1
        r -= 1
print(main())

