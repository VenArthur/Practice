#SUCCESS!!
def longestCommonPrefix(strs):
    """
    :type strs: List[str]
    :rtype: str
    """

    if(strs == [] or strs.count("") > 0):
        return ""
    elif(len(strs) == 1):
        return strs[0]
    else:
        strs.sort()

        prefix = ""
        my_char = ' '
        endOfPrefix = False

        for i in range(0, len(strs[0])):
            for j in range(0, len(strs)):
                if(j == 0):
                    my_char = strs[j][i]

                if(my_char != strs[j][i]):
                    endOfPrefix = True
                    break


            if(endOfPrefix == True):
                break
            else:
                prefix += my_char


        return prefix


words = ["minute", "mint", "minimum"]
print(longestCommonPrefix(words))
