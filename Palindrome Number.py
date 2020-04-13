# SUCCESS!!
def isPalindrome(x):
    """
    :type x: int
    :rtype: bool
    """
    isTheReverse = False
    number = str(x) # number is now a string
    reversedNum = [] # need list to reverse the number
    strNum = "" # the reversed number will need to turn back into a string

    for i in number:
        reversedNum.append(i)

    reversedNum.reverse() # reverse the number
    strNum = strNum.join(reversedNum) # turn the reversed number back into a string

    # check if palindrome here
    if(number == strNum):
        isTheReverse = True
    else:
        isTheReverse = False

    return isTheReverse

num = -123321
print(isPalindrome(num))



