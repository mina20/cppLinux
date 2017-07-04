// s=ut+1/2at^2
// a=1m/sec^2      const
// t=2sec          sampling time
// speed limits  30-60 kmph   8.33-16.67m/s
// car density = 10 cars/min
// road length = 2km

clc
clear all
//close all

u=rand(1,10)
u=(8.34*u)+(8.33*ones(1,10))       // velocity in m/s
s=0
t=0
v=u(1,1)
r=1
while((s<=2000)&(v<16.67))
    d(r,:)=[t,1,v,s]
    //disp(d)
    t=t+2
    v=v+2
    s=s+((v*2)+(0.5*1*4))
    r=r+1
end
if (v>=16.67) then
    while(s<=2000)
        v=16.67
        d(r,:)=[t,1,v,s]
        //disp(d)
        t=t+2
        s=s+(16.17*2)
        r=r+1
    end
end
disp(d)
