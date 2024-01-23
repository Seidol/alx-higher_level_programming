#!/usr/bin/python3
import random

number = random.randint(-10, 10)
s = ["negative", "zero", "positive"]
r = "{} is {}".format(number, s[int(number == 0) + (1 + number > 0)])
print(r)
