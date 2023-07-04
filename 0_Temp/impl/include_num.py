n = int(input())
check_str = '3'
count = 0
for i in range(n+1):
    for j in range(60):
        for k in range(60):
            if check_str in str(i) + str(j) + str(k):
                print("%d%d%d" % (i, j, k))
                count += 1
print("count: %d" % count)
print(count)
