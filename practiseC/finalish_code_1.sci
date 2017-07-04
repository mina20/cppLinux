clc                             //clear screen
format(5)                       //number printing and display format
//______________________________________________________________________________//
// defining and initializing variables

cap=30,dopen=1,dclose=1,dwait=8,flcross=2,gwait=10
t=dopen+dwait+dclose

arr_0_50=[],final_arr_0_50=[]
arr_50_100=[],final_arr_50_100=[]

count=[]                        //counter array
for i=1:100                     //dim=100
    count=[count 0]
end
final_count=[]
for counter=1:84
//______________________________________________________________________________//
//generating random sequence for first lift i.e. floors 0 to 50
for i=1:100
         num=3*round(33*rand())
        if (num<50 & num>2) then arr_0_50=[arr_0_50,num]
        end
    i=i+1
    l_0_50=length(arr_0_50)
    if l_0_50==30 then break
    end
        end
[final_arr_0_50]=gsort(arr_0_50,'g','i')
//disp(final_arr_0_50)

//disp("__________________________________________")

//______________________________________________________________________________//
//generating random sequence for second lift i.e. floors 50 to 100
     for i=1:100
         num=3*round(33*rand())
        if (num<100 & num>50) then arr_50_100=[arr_50_100,num]
        end
    i=i+1
    l_50_100=length(arr_50_100)
    if l_50_100==30 then break
    end
        end
[final_arr_50_100]=gsort(arr_50_100,'g','i')
//disp(final_arr_50_100)
//______________________________________________________________________________//
//counting number of people on each floor for lift_0_50
arr=final_arr_0_50
i=1,p=1
for i=1:30
    c1=1
    for k=2:30
       p=i,m=arr(p),j=arr(k)
        if arr(k)~=arr(p) then count(j)=c1,k=k+1,i=k-1,c=1
         else c=c+1,count(m)=c,k=k+1
        end
    end
    c=0
end
u=arr(1),g=count(u),count(u)=g+1
//______________________________________________________________________________//
//counting number of people on each floor for lift_0_50
arr=final_arr_50_100
i=1,p=1
for i=1:30
    c1=1
    for k=2:30
       p=i 
        m=arr(p)
        j=arr(k)
        if arr(k)~=arr(p) then count(j)=c1,k=k+1,i=k-1,c=1
         else c=c+1,count(m)=c,k=k+1
        end
    end
    c=0
end
u=arr(1),g=count(u),count(u)=g+1
final_count=final_count+count

//disp(count)
//______________________________________________________________________________//
//eleminating repeated numbers
k=2,n=2
for i= 1:l
    k=n
    for j = k:l
     if final_arr_0_50(i) == final_arr_0_50(k) then final_arr_0_50(k)=0 
      else k=k+1 
      end
    end
    n=n+1
end
[final_arr_0_50]=gsort(final_arr_0_50,'g','d')
//disp(final_arr_0_50)
k=2,n=2
for i= 1:l
    k=n
    for j = k:l
     if final_arr_50_100(i) == final_arr_50_100(k) then final_arr_50_100(k)=0 
      else k=k+1 
      end
    end
    n=n+1
end
[final_arr_50_100]=gsort(final_arr_50_100,'g','d')
//disp(final_arr_50_100)
//______________________________________________________________________________//
//time calculations
arr_50=final_arr_0_50
for h=1:cap
if arr_50(h)==0 then lowarr_50=[lowarr_50,h] /////lowest button pressed
end
end
lf_50=lowarr_50(1)
lff_50=lf_50-1
for z=1:cap-1  
   flrnum_50=arr_50(z)-arr_50(z+1)
   if flrnum_50==0 then time_flr_50=0
   else
       time_flr_50=(flrnum_50*flcross)+t
   end
    totime_50=totime_50+time_flr_50
end
uptime_50=flcross*arr_50(1)
lowtime_50=flcross*arr_50(lff_50)
total_time_down_50=gwait+totime_50+uptime_50+lowtime_50
total_time_0_50=[total_time_0_50 total_time_down_50]
//______________________________________________________________________________//
//______________________________________________________________________________//

arr_100=final_arr_50_100
for h=1:cap
if arr_100(h)==0 then lowarr_100=[lowarr_100,h] /////lowest button pressed
end
end
lf_100=lowarr_100(1)
lff_100=lf_100-1
for z=1:cap-1  
   flrnum_100=arr_100(z)-arr_100(z+1)
   if flrnum_100==0 then time_flr_100=0
   else
       time_flr_100=(flrnum_100*flcross)+t
   end
    totime_100=totime_100+time_flr_100
end
uptime_100=flcross*arr_100(1)
lowtime_100=flcross*arr_100(lff_100)
total_time_down_100=gwait+totime_100+uptime_100+lowtime_100
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
total_time_50_100=[total_time_50_100 total_time_down_100]
total_t=total_time_down_50+total_time_down_100
total_time=total_time+total_t

counter=counter+1
end

//disp(final_count)
//format(16)
//s=sum(final_count)
//disp(s)

//final calculating and graphs
avg_50=mean(total_time_0_50)
//disp(avg_50,"average time for batch from 0 to 50th floor")

avg_100=mean(total_time_50_100)
//disp(avg_100,"average time for batch from 50th to 100th floor")

format(16)
//disp(total_time,"total time for 5000 people in seconds")
total_hrs=total_time/3600
//disp(total_hrs,"total time for 5000 people in hours")

//plot2d(batch,total_hrs)
//xtitle('time per batch','no of batch','time required')

//********************************************************


disp(avg_50,"average time for batch from 0 to 50th floor")

disp(avg_100,"average time for batch from 50th to 100th floor")

format(16)
disp(total_time,"total time for 5000 people in seconds")
total_hrs=total_time/3600
disp(total_hrs,"total time for 5000 people in hours")











