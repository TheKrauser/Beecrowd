testes = int(input())
dead = 0

for x in range(testes):
    ended = False
    a, b = map(int, input().split())
    pessoas = list([0] * a)
    pos = b-1
    while not ended:
        if (pessoas[pos] == 1):
            continue
        else:
            pessoas[pos] = 1
            dead += 1
        next = b
        while next>0:
            pos += 1
            if (pos > a-1):
                pos -= a

            if(pessoas[pos]!=1):
                next-=1
            else:
                continue

        if dead == a-1:
            ended = True

    for y in range(len(pessoas)):
        if pessoas[y]==0:
            print(f"Case {x+1}: {y+1}")

    dead = 0