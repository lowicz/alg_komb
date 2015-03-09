print "Podaj n i k: "
n = int(raw_input())
k = int(raw_input())

x = [1 for i in xrange(k)]
print x

def next(x):
    i = k-1
    while x[i] == n:
        i -= 1
    x[i] += 1
    for j in xrange(i+1,k):
        x[j] = 1
    return x

while sum(x) != n*k:
    print next(x)
