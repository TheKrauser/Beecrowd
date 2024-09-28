casos = int(input())
cheater = 0

for x in range(0, casos):
    dieta = input()
    cafe = input()
    almoco = input()
    jantar = dieta

    cheater = 0

    for y in cafe:
        if y in dieta:
            jantar = jantar.replace(y, "")
        else:
            print("CHEATER")
            cheater = 1
            break

    if cheater == 0:
        for y in almoco:
            if y in dieta:
                jantar = jantar.replace(y, "")
            else:
                print("CHEATER")
                cheater = 1
                break

    if cheater == 0:
        final = "".join(str(y) for y in sorted(jantar))
        print(final)