#!/usr/bin/python3
import random

number = random.randint(-10, 10)
s = "negative" if number < 0 else "zero" if number == 0 else "positive"
r = "{} is {}".format(number, s)
print(r)
