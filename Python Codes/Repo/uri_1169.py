testCase = int(input())

for i in range(testCase):
    value = int(input())
    grain = 2 ** value
    inKG = int(grain / 12000)

    print("{} kg".format(inKG))