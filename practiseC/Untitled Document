i=iris
#lables from 5th col
lab=i[1:100,5]
i=i[1:100,1:2]
##getting same random sample 
set.seed(123)
#70-30 train test
ind=sample(nrow(i),floor(0.7*nrow(i)))
##training and testing
tr=i[ind,]
te=i[-ind,]

##For first test set point 
d=dist(rbind(te[1,],tr))
##converting into matrix
d=as.matrix(d)
d=sort(d[1,])
##k=3
d=d[-1][1:3]
no=as.numeric(names(d))
la=lab[no]
w1=length(which(la=="setosa"))
w2=length(which(la=="versicolor"))
w=c(w1,w2)
w=which(w>=2)
s=ifelse(w==1,"setosa","versicolor");s

################################################################################

##General 
d=c()
ss=c()
dd=c()
la=c()
for(j in 1:nrow(te))
{
d=dist(rbind(te[j,],tr))
##converting into matrix
d=as.matrix(d)
d1=d
dd=sort(d1[1,])
##k=3
dd=dd[-1][1:3]
no=as.numeric(names(dd))
la=lab[no]
w1=length(which(la=="setosa"))
w2=length(which(la=="versicolor"))
w=c(w1,w2)
w=which(w>=2)
v=ifelse(w==1,"setosa","versicolor")
ss=c(ss,v)
}
table(ss)
##confusion matrix
t=as.matrix(table(ss,as.character(lab[-ind])))
names(dimnames(t))=c("Actual","Predicted");t
 
tp=t[1,1]
tn=t[2,2]
fn=t[1,2]
fp=t[2,1]
acc=(tp+tn)/(tp+tn+fp+fn);acc
spe=tn/(tn+fp);spe
sen=tp/(tp+fn);sen
mcc=(tp*tn-fp*fn)/sqrt((tp+fp)*(tp+fn)*(tn+fp)*(tn+fn));mcc


############################################################################

##direct command
library(class)
lab1=lab[ind]
ss1=summary(knn(tr,te,lab1,k=3));ss1

##########################################################################

##Cross validation

k=10
gl=gl(k,k)
sind=split(1:100,gl)
d=c()
ss=c()
dd=c()
la=c()
crval=c()

set.seed(12345)
i=iris[1:100,-(3:4)]
i=i[sample(nrow(i)),]
lab=i[,3]
i=i[,-3]
for(j in 1:k)
{
tr=c()
te=c()
t=c()
ss=c()
##training and testing
tr=i[-sind[[j]],]
te=i[sind[[j]],]
for(l in 1:nrow(te))
{
d=dist(rbind(te[l,],tr))
##converting into matrix
d=as.matrix(d)
d1=d
dd=sort(d1[1,])
##k=3
dd=dd[-1][1:3]
no=as.numeric(names(dd))
la=lab[no]
w1=length(which(la=="setosa"))
w2=length(which(la=="versicolor"))
w=c(w1,w2)
w=which(w>=2)
v=ifelse(w==1,"setosa","versicolor")
ss=c(ss,v)
}
##confusion matrix
t=as.matrix(table(ss,as.character(lab[sind[[j]]])))
names(dimnames(t))=c("Actual","Predicted")
tp=t[1,1]
tn=t[2,2]
fn=t[1,2]
fp=t[2,1]
acc=(tp+tn)/(tp+tn+fp+fn)
spe=tn/(tn+fp)
sen=tp/(tp+fn)
mcc=(tp*tn-fp*fn)/sqrt((tp+fp)*(tp+fn)*(tn+fp)*(tn+fn))
crva=c(acc,spe,sen,mcc)
crval=rbind(crval,crva)
cat(j,"",acc,"",spe,"",sen,"",mcc,"\n")
}
colnames(crval)=c("Accu","Spe","Sen","Mcc")
rownames(crval)=paste0(1:10,"fold")
##table showing each iteration output
crval
finalresult=apply(crval,2,mean);finalresult
