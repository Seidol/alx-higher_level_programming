#!/usr/bin/python3
import random

number = random.randint(-10, 10)
s = ["negative", "zero", "positive"]
r = "{} is {}".format(number, s[1 + (number > 0)])
print(r)
