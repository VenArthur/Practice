def reverseString(word):
    backwards = word[len(word)::-1] #reverse the word using slicing
    return backwards

myWord = input("Enter a word or sentence to get the reverse")
print(reverseString(myWord))
