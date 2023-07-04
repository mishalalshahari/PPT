from time import time
def timer(f):
    def warpp(*args,**kwargs):
        time1=time();
        res=f(*args,**kwargs)
        time2=time()
        print(time2-time1)
        return res
    return warpp

@timer
def timmme(n):
    for i in range(n):
        for j in range(10000):
            i*j

timmme(6)