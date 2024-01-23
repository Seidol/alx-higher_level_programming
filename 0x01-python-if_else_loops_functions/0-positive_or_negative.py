#!/usr/bin/python3
import random

number = random.randint(-10, 10)
s = ["zero", "positive", "negative"]
r = "{} is {}".format(s[1 + (number > 0) + (number == 0)])
print(r)
