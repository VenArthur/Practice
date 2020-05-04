#SUCCESS!!
def isValid(s):
    """
    :type s: str
    :rtype: bool
    """

    if not s:
        return True
    else:
        nothingFound = False

        while(nothingFound != True):

            parentheses = s.find("()")
            if(parentheses != -1):
                s = s.replace("()", "", 1)

            curlyBraces = s.find("{}")
            if(curlyBraces != -1):
                s = s.replace("{}", "", 1)

            brackets = s.find("[]")
            if(brackets != -1):
                s = s.replace("[]", "", 1)

            if((parentheses == -1) and (curlyBraces == -1) and (brackets == -1)):
                nothingFound = True


        if(len(s) >= 1):
            return False
        else:
            return True



s = "{}{}[][]{}()"
print(isValid(s))

