n = int(input())
box = 1
cnt = 1
cnt_max = 0
if (n == 1):
        print(cnt)
else:
    while(box <= n):
        cnt_max += 6
        cnt += 1
        box += cnt_max
        if (n <= box):
            print(cnt)
            break

