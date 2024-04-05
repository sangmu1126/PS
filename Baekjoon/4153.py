a,b,c = map(int, input().split())

while(not(a==0 and b == 0 and c==0)):

    if a > b:
        t = a
        a = b
        b = t

    if b > c:
        q = b
        b = c
        c = q

    if (c*c == a*a + b*b):
        print("right")
    else:
        print("wrong")

    a,b,c = map(int, input().split())

    