def main():
    v = []

    key = int(input())

    v.append(key)

    for i in range (10):
        key = key * 2

        v.append(key)
        print("N[{}] = {}".format(i, v[i]))
    #for i in range(10):
        
    
if __name__ == "__main__":
    main()