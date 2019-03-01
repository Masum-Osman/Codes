def main():
	n = []

	v = int(input())
	n.append(v)

	for i in range(10):
		v = v * 2
		n.append(v)

	for i in range(10):
		print("N[{}] = {}".format(i,n[i]))
		
if __name__ == '__main__':
    main()