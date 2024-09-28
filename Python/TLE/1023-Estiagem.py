import math

casos = int(input())

outQtd = 1

while casos != 0:
    consumoMedio = 0
    allPessoas = 0
    final = {}

    for x in range(0, casos):
        pessoas, consumo = map(int, input().split())
        div = math.floor(consumo/pessoas)
        consumoMedio += consumo
        allPessoas += pessoas
        final[div] = final.get(div, 0) + pessoas

    consumoMedio /= allPessoas
    sor = sorted(final.items(), key=lambda x: x[0])

    print(f'Cidade# {outQtd}:')
    outQtd+=1
    
    i = 0
    for x in sor:
        print(f'{x[1]}-{x[0]}', end='')
        if (i == len(sor)-1):
            print()
        else:
            print(" ", end='')
        i+=1

    n = str(consumoMedio).partition(".")
    print(f'Consumo medio: {n[0]}.{n[2][0:2]:<02s} m3.')
    
    casos = int(input())
    if (casos != 0):
        print()