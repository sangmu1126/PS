num = int(input())
list1 = []

for i in range(num):
    a = int(input())
    list1.append(a)

list1.sort()

print(*list1, sep='\n')
