import math

e = int(input('e: '))
f = int(input('f: '))
g = int(input('g: '))
h = int(input('h: '))

a = math.sqrt(abs(e - (6/f))**6) + g
b = math.sin(e) + (math.cos(h)**6)*h
c = (66*g)/ (e*f-6)

print(f'a = {a}, b = {b}, c = {c}')
