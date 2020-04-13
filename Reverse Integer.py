# SUCCESS!!
def reverse(x):
    isNegative = False
    number = str(x)  # number is now a string
    reversedNum = []  # need list to reverse the number
    strNum = ""  # the reversed number will need to turn back into a string
    answer = 0

    if(x < 0):
        isNegative = True
        number = number[1:]
    else:
        isNegative = False

    for i in number:
        reversedNum.append(i)

    reversedNum.reverse()  # reverse the number
    strNum = strNum.join(reversedNum)  # turn the reversed number back into a string
    answer = int(strNum)

    if(isNegative):
        answer *= -1

    if (answer <= -2147483648 or answer >= 2147483648): 
        return 0

    return answer


num = 210

print(reverse(num))

