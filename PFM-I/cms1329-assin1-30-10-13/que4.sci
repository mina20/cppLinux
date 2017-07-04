function[fibo]=fiboseries(n)
    fibo=[1,1]
    for i=1:n-2
        fibo=[fibo,fibo($)+fibo($-1)]
    end
endfunction
