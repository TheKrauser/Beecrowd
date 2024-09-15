casos = int(input())

for x in range(0, casos):
    str = input()
    metade1 = ''
    metade2 = ''
    tam = len(str)
    meio = len(str)//2
    for y in range(meio-1, -1, -1):
        metade1+=str[y]
    for y in range(tam-1, meio-1, -1):
        metade2+=str[y]

    print(metade1+metade2)