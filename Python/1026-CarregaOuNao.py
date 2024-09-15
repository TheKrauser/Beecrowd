def DecToBin(val):
    bin = [0] * 32
    for x in range(0, 32):
        resto = int(val)%2
        bin[x] = resto
        val = int(val)/2

        if (val<=0):
            return bin

def BinToDec(val):
    num = 0
    start = 1
    for x in range(0, 32):
        if val[x] == 1:
            num += start
        start*=2
    return num

def Mofiz(a: list[int], b: list[int]):
    bin = [0] * 32
    for x in range(0, 32):
        if (a[x]+b[x]) == 2:
            bin[x] = 0
        elif (a[x]+b[x]) == 1:
            bin[x] = 1
        else:
            bin[x] = 0
    return bin

while True:
    try:
        a, b = map(int, input().split())

        numA = DecToBin(a)
        numB = DecToBin(b)
        print(BinToDec(Mofiz(numA, numB)))
    except EOFError:
        break