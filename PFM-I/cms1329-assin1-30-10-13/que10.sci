function[]=polyplot(n)
    a=n^3
    b=n^2
    c=n
    p=poly([a b c],"x","coeff")
    disp(p)
    x=-3:.1:3
    y=a+(b.*x)+(c.*(x.^2))
    plot2d(x,y)
    xtitle('y=(n)x^2+(n^2)x+(n^3) at n=9')
endfunction
