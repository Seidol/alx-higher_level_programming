#!/usr/bin/python3
import random

number = random.randint(-10, 10)
result = "{number} is positive" if number > 0 else ("{number} is zero" 
if number == 0 else "{number} is negative")
print(result)
