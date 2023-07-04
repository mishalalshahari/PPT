ans=[]
def even_num(inp):
    ans=[i for i in inp if i%2==0 ]
    for ii in range (len(ans)):
        print(ans[ii])
inp=[1,2,3,4,5,6,7,8,9]
even_num(inp)