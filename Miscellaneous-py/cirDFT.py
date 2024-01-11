import math as m
import numpy as np

def DFT(N,xn):
    W = lambda k,n,N : complex(round(m.cos(m.pi*k*2*(n/N))),round(-m.sin(m.pi*k*2*(n/N)))) if n > 0 else complex(round(m.cos(m.pi*k*2*(n/N))),round(m.sin(m.pi*k*2*(n/N))))
    li = np.array([[W(j,i,N) for j in range(N)] for i in range(N)],dtype=complex)
    return np.matmul(xn,li)

def IDFT(N,xn):
    W = lambda k,n,N : complex(round(m.cos(m.pi*k*2*(n/N))),round(-m.sin(m.pi*k*2*(n/N)))) if n > 0 else complex(round(m.cos(m.pi*k*2*(n/N))),round(m.sin(m.pi*k*2*(n/N))))
    li = np.array([[W(j,-i,N) for j in range(N)] for i in range(N)],dtype=complex)
    return (np.matmul(xn,li))/N

print(IDFT(4,[ 60.+0.j, -16.+4.j,  24.-0.j, -16.-4.j]))