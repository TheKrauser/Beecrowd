def Navigate():
    col = 0
    lin = 0
    nextX = 0
    nextY = 0

    while True:
        match mapa[lin][col]:
            case '.':
                col += nextX
                lin += nextY
            case '>':
                if (nextX == -1):
                    print("!")
                    return

                for _ in lastPos:
                    if _ == [lin,col]:
                        print("!")
                        return

                nextX = 1
                nextY = 0
                AddPos(lin, col)
                col += 1
            case '<':
                if (nextX == 1):
                    print("!")
                    return

                for _ in lastPos:
                    if _ == [lin,col]:
                        print("!")
                        return

                nextX = -1
                nextY = 0
                AddPos(lin, col)
                col += -1
            case 'v':
                if (nextY == -1):
                    print("!")
                    return

                for _ in lastPos:
                    if _ == [lin,col]:
                        print("!")
                        return

                nextY = 1
                nextX = 0
                AddPos(lin, col)
                lin += 1
            case '^':
                if (nextY == 1):
                    print("!")
                    return

                for _ in lastPos:
                    if _ == [lin,col]:
                        print("!")
                        return

                nextY = -1
                nextX = 0
                AddPos(lin, col)
                lin += -1

        if (col > largura or col < 0 or lin > altura or lin < 0):
            print("!")
            return

        if (mapa[lin][col] == '*'):
            print("*")
            return


def AddPos(lin, col):
    lastPos.append([lin, col])
    if (len(lastPos) > 4):
        del lastPos[0]


largura = int(input())
altura = int(input())
mapa = []

lastPos = []

for x in range(0, altura):
    row = list(input())
    mapa.append(row)

Navigate()
