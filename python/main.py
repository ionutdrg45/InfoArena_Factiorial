read = open("fact.in", "r")
write = open("fact.out", "w")

def get_0(p):
    n = -1
    nr_zero = 0
    while nr_zero != p:
        n += 1
        aux_val = n
        while aux_val % 5 == 0 and aux_val:
            aux_val /= 5
            nr_zero += 1
    if n == -1:
        return 1
    else:
        return n

x = int(read.readline())

write.write(str(get_0(x)))

read.close()
write.close()