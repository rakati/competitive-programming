from math import*
p=[map(float,raw_input().split()) for i in range(3)]
a,b,c=[hypot(x1-x2,y1-y2) for (x1,y1),(x2,y2) in [(p[0],p[1]),(p[0],p[2]),(p[1],p[2])]]
A,B,C=[acos((y*y+z*z-x*x)/2/z/y) for x,y,z in [(a,b,c),(b,c,a),(c,a,b)]]
R=a/2/sin(A)
def g(x,y):return x if y<1e-3 else g(y,fmod(x,y))
u=2*g(A,g(B,C))
print R*R*pi/u*sin(u)