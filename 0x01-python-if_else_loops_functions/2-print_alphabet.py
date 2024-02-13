#!/usr/bin/python3

"""Print the ASCII alphabet in lowercase, not followed by a new line."""

print("".join(chr(letter) for letter in range(97, 123)), end="")
