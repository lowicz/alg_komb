n = int(raw_input("Podaj n: "))
k = int(raw_input("Podaj k: "))

x = [1 for i in xrange(k)]
print x


def next(x):
    i = k - 1
    while x[i] == n:
        i -= 1
    x[i] += 1
    for j in xrange(i + 1, k):
        x[j] = 1
    return x

while sum(x) != n * k:
    x = next(x)
    print x
