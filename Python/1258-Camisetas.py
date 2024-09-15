class Camisa:
    def __init__(self, cor, tamanho, nome):
        self.cor = cor
        self.tamanho = tamanho
        self.nome = nome

class Reverse:
    def __init__(self, obj):
        self.obj = obj
    def __eq__(self, other):
        return other.obj == self.obj
    def __lt__(self, other):
        return other.obj < self.obj

casos = int(input())
while casos != 0:
    camisas = []

    for x in range(0, casos):
        nome = input()
        cor, tam = input().split()
        camisa = Camisa(cor, tam, nome)
        camisas.append(camisa)

    camisasort = sorted(camisas, key=lambda x: (x.cor, Reverse(x.tamanho), x.nome))

    for y in camisasort:
        print(y.cor, y.tamanho, y.nome)

    casos = int(input())

    if (casos != 0):
        print()