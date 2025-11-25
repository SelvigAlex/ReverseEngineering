import sys

verify = [521, 339, 1028, 365, 1132, 352, 833]

for i in range(0, 7):
    char = (verify[i])
    char = (char + 337) // 13 - i
    print(chr(char), end='')
