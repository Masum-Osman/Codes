loop = int(input())

for i in range(loop):
    val = float(input())
    dias = 0
    while( val > 1):
        val /= 2
        dias += 1
    
    print("{} dias".format(dias))