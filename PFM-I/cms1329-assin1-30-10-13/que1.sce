//Find pythagorean triplets till 100 Count no of triplets

function[]=triplet()
    count=1
    for(i=1:100)
        for(j=i:100)
            for(k=j:100)
                a=i
                b=j
                c=k
                if c*c==a*a+b*b then
                    disp("Triplet no =")
                    disp(count)
                    disp("Triplet is=");
                    disp(a,b,c);
                    count=count+1
               end
            end
        end
    end
 endfunction
