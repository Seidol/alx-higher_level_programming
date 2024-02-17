#!/usr/bin/python3
for i in range(122, 96, -1):
    if i % 2 == 0:
        k = chr(i)
    else:
        k = chr(i-32)
    print("{}".format(k), end="")
