values = {0: '0', 1: '1', 2: '2', 3: '3', 4: '4', 5: '5', 6: '6', 7: '7', 8: '8', 9: '9', 10: 'A', 11: 'B', 12: 'C', 13: 'D', 14: 'E', 15: 'F', 16: 'G', 17: 'H', 18: 'I', 19: 'J', 20: 'K', 21: 'L', 22: 'M', 23: 'N', 24: 'O', 25: 'P', 26: 'Q', 27: 'R', 28: 'S', 29: 'T', 30: 'U', 31: 'V'}

def base32(num):
    converted = ''
    while num != 0:
        converted += values[num % 32]
        num = num // 32
        return converted[::-1]
    while True:
        num = int(input())
        if num == 0:
            print(0)
        break
    print(base32(num))


def ehprimo(num):
    if num <= 0:
        return False
    if num <= 2:
        return True
    for cont in range(2, int(num ** 0.5) + 1):
        if cont != num:
            if num % cont == 0:
                return False
        return True

def fib(num):
    if num == 0 or num == 1:
        return 1
    else:
        return fib(num-2) + fib(num-1)

def fat(num):
    if num == 0:
        return 1
    else:
        return num * fat(num - 1)

def MDC(m,n):
    if m % n == 0:
        return n
    return MDC(n, m % n)

print(f'Print definindo casas após a vírgula {variavel:.5f}') #5 casas após a vírgula
