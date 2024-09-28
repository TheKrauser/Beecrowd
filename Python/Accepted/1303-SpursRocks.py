class Time: 
    def __init__(self, inscricao, pontos, marcados, recebidos, marcadosTotal):
        self.inscricao = inscricao
        self.pontos = pontos
        self.marcados = marcados
        self.recebidos = recebidos
        self.marcadosTotal = marcadosTotal

def razao(marcados, recebidos):
    if recebidos==0:
        return marcados
    else:
        return marcados/recebidos

casos = int(input())
instancia = 1
while casos !=0:
    times = []
    for x in range(0, casos):
        t = Time(x+1, 0, 0, 0, 0)
        times.append(t)

    for x in range(0, int((casos*(casos-1))/2)):
        x, y, z, w = map(int, input().split())
        times[x-1].marcados += y
        times[x-1].marcadosTotal += y
        times[x-1].recebidos += w
        times[z-1].marcados += w
        times[z-1].marcadosTotal += w
        times[z-1].recebidos += y

        if (y > w):
            times[x-1].pontos += 2
            times[z-1].pontos += 1
        else:
            times[x-1].pontos += 1
            times[z-1].pontos += 2

    timesorted = sorted(times, key=lambda x: (-x.pontos, -razao(x.marcados, x.recebidos), -x.marcadosTotal, x.inscricao))
    print("Instancia {0}".format(instancia))
    instancia+=1
    for x in range(0, casos):
        if (x < casos-1):
            print("{0}".format(timesorted[x].inscricao), end=" ")
        else:
            print("{0}".format(timesorted[x].inscricao), end="\n")
    casos = int(input())
    if casos!=0:
        print("")
#for x in range(0, casos):
#    print(f"Time: {timesorted[x].inscricao} | Pontos: {timesorted[x].pontos} | Razão: {timesorted[x].marcados/timesorted[x].recebidos} | Total: {timesorted[x].marcadosTotal}")