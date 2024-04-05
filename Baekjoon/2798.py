def binary_search(arr, target):
    first, last = 0, len(arr)

    while(first <= last):
        mid = (first + last)/2
        if arr[mid] == target:
            return mid
        if arr[mid] > target:
            last = mid - 1
        elif arr[mid] < target:
            first = mid + 1
        else:
            return False

N, M = int(input().split())
list1 = []
sum = []
for i in range(N):
    n = int(input())
    list1.append(n)

for i in range(0, n+1):
    for j in range(i, n+1):
        sum.append(list1[i] + list1[j])

list1.sort()
sum.sort()

for i in range(n, 0):
    for j in range(i, 0):
        a = list1[i] - list1[j]
        exist = bool(binary_search(arr, target))

