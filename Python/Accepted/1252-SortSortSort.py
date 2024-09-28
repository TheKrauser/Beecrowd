def newMod(a,b):
    res = a%b
    return res if not res else res-b if a<0 else res

casos, modulo = map(int, input().split())

numList = {}

while (casos != 0 and modulo != 0):
    for x in range(0, casos):
        num = (int(input()))
        numList[x] = newMod(num,modulo), num%2, num

    sortedDict = sorted(numList.values(), key=lambda item: (item[0], -item[1], -item[2] if item[1]==1 else item[2]))

    print(casos, modulo)
    for x in sortedDict:
        print(x[2])

    casos, modulo = map(int, input().split())
    numList.clear()

print(0, 0)