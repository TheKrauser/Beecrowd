import math

try:
    a, b, c = map(float, input().split())
    delta = (math.sqrt((pow(b, 2)) - (4*a*c)))
    x1 = (-b + delta)/(2*a)
    x2 = (-b - delta)/(2*a)
    print(f'R1 = {x1:.5f}\nR2 = {x2:.5f}')
except:
    print('Impossivel calcular')
