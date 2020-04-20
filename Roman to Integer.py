# SUCCESS!!
def romanToInt(s):
    number = 0

    while(s.isspace() != True):
        if(s.find("CM") != -1):
            number += 900
            s = s.replace("CM", " ", 1)

        if(s.find("CD") != -1):
            number += 400
            s = s.replace("CD", " ", 1)

        if (s.find("XC") != -1):
            number += 90
            s = s.replace("XC", " ", 1)

        if (s.find("XL") != -1):
            number += 40
            s = s.replace("XL", " ", 1)

        if (s.find("IX") != -1):
            number += 9
            s = s.replace("IX", " ", 1)

        if (s.find("IV") != -1):
            number += 4
            s = s.replace("IV", " ", 1)

        if (s.find("M") != -1):
            number += 1000
            s = s.replace("M", " ", 1)

        if (s.find("D") != -1):
            number += 500
            s = s.replace("D", " ", 1)

        if (s.find("C") != -1):
            number += 100
            s = s.replace("C", " ", 1)

        if (s.find("L") != -1):
            number += 50
            s = s.replace("L", " ", 1)

        if (s.find("X") != -1):
            number += 10
            s = s.replace("X", " ", 1)

        if (s.find("V") != -1):
            number += 5
            s = s.replace("V", " ", 1)

        if (s.find("I") != -1):
            number += 1
            s = s.replace("I", " ", 1)


    return number

myRoman = "MCMXCVIII"
print(romanToInt(myRoman))