# All Program Info

####   mutex_thread1.c
Here 2 threads wantsto increament counter with same fuction. so If we are not using mutex it will not give proper output.
Because 1 thread increamented counter value at the same time another thread comes and already increamented value use and print value 2 and then print1 .This is not proper output here.

So by using mutex lock theread using time and then unlock after that 2nd thread use that function....
###### output :
Counter value: 1
Counter value: 2

<link>http://www.yolinux.com/TUTORIALS/LinuxTutorialPosixThreads.html 