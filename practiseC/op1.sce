a=1
b=2
rho=0.382
while (b-a)>0.2
    a1=((1-rho)*a)+(rho*b)
    b1=((1-rho)*b)+(rho*a)
    A=a1^2+4*cos(a1)
    B=b1^2+4*cos(b1)
    if A>B then
        a=a
        b=b1
    end
    if A<B then
        a=a1
        b=b
    end
end
m=[a,b]
disp("minimizer is")
disp (m)
