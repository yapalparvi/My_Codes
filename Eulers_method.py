This code obtains a solution of a differntial equation using Euler's mthod and the plot compares with the exact solution


from numpy import array,zeros,exp
from euler import *
import matplotlib.pyplot as plt

def F(x,y):
    F=zeros(2)
    F[0]=y[1]
    F[1]=-0.1*y[1]-x
    return F
x=0.0
xStop=2.0
h=0.01
y=array([0.0,1.0])

X,Y=integrate(F,x,y,xStop,h)
yExact=100.0*X-5.0*X**2+990.0*(exp(-0.1*X)-1.0)
print X,Y,yExact
plt.figure()
plt.plot(X,yExact,'-',X,Y[:,0],'--')
plt.show()
