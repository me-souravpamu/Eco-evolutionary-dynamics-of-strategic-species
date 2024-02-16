//     ROCK PAPER SCISSOR SYSTEM USING RK45
#include<stdio.h>
#include<math.h>
main()
{
int i,j,index,j1,j2;
double w0, h, k, k11, k12, k13, k14, k15, k16, k21, k22, k23, k24, k25, k26, k31, k32, k33, k34, k35, k36, k41, k42, k43, k44, k45, k46, coup1, coup2, k51, k52, k53, k54, k55, k56, k61, k62, k63, k64, k65, k66, x10, x20, omega, x30, x40, x50, x60, x1, x2, x3, x4, x5, x6, sigma, lambda1, lambda2, lambda3, b, x, y, z, z1, a, c, d, p1, p2, w;
double xi, gamma, alpha, r, a1, b1, c1, kc, kd, kp;
double sig1,sig2,sig3,beta,eps,xavg,yavg,zavg,xsum,ysum,zsum;


FILE *fopen(),*fp1;
fp1=fopen("ooo.dat","w");
FILE *fopen(),*fp2;
fp2=fopen("xoo.dat","w");
FILE *fopen(),*fp3;
fp3=fopen("oyo.dat","w");
FILE *fopen(),*fp4;
fp4=fopen("ooz.dat","w");


for(j1=0.0;j1<=150.0;j1++)
{
a=0.0+(1.5/150.0)*j1;
for(j2=0.0;j2<=150.0;j2++)
{
b=0.0+(1.5/150.0)*j2;

//printf("%d\t%d\n",j1,j2);

x10=0.3;
x20=0.3;
x30=0.3;

xavg=0.0;
yavg=0.0;
zavg=0.0;

xsum=0.0;
ysum=0.0;
zsum=0.0;

//a=1.0;
//b=0.5;
c=0.25;
sig1=0.35;
sig2=0.45;
sig3=0.80;
alpha=0.85;
beta=0.70;
xi=0.25;

h=0.01;
w0=0.0;

for(i=1;i<=10000000;i++)
{
      k=x10*((-(sig1*x10)-(a+sig1)*x20+(b-sig1)*x30+sig1)-(1-alpha));
      k11=k*h;

      k=x20*(((a-sig2)*x10-(sig2*x20)-(c+sig2)*x30+sig2)-(beta));
      k12=k*h;

      k=x30*((-(b+sig3)*x10+(c-sig3)*x20-(sig3*x30)+sig3)-xi);
      k13=h*k;

      x1=x10 +k11/4.0;
      x2=x20 +k12/4.0;
      x3=x30 +k13/4.0;
      w=w0 +h/4.0;

      k=x1*((-(sig1*x1)-(a+sig1)*x2+(b-sig1)*x3+sig1)-(1-alpha));
      k21=k*h;

      k=x2*(((a-sig2)*x1-(sig2*x2)-(c+sig2)*x3+sig2)-(beta));
      k22=k*h;

      k=x3*((-(b+sig3)*x1+(c-sig3)*x2-(sig3*x3)+sig3)-xi);
      k23=h*k;      



      x1=x10+(3.0*k11/32.0)+(9.0*k21/32.0);
      x2=x20+(3.0*k12/32.0)+(9.0*k22/32.0);
      x3=x30+(3.0*k13/32.0)+(9.0*k23/32.0);
      w=w0+3.0*h/8.0;

      k=x1*((-(sig1*x1)-(a+sig1)*x2+(b-sig1)*x3+sig1)-(1-alpha));
      k31=k*h;

      k=x2*(((a-sig2)*x1-(sig2*x2)-(c+sig2)*x3+sig2)-(beta));
      k32=k*h;

      k=x3*((-(b+sig3)*x1+(c-sig3)*x2-(sig3*x3)+sig3)-xi);
      k33=h*k;      

      x1=x10+(1932.0*k11/2197.0)-(7200.0*k21/2197.0)+(7296.0*k31/2197.0);
      x2=x20+(1932.0*k12/2197.0)-(7200.0*k22/2197.0)+(7296.0*k32/2197.0);
      x3=x30+(1932.0*k13/2197.0)-(7200.0*k23/2197.0)+(7296.0*k33/2197.0);
      w=w0+12.0*h/13.0;

      k=x1*((-(sig1*x1)-(a+sig1)*x2+(b-sig1)*x3+sig1)-(1-alpha));
      k41=k*h;

      k=x2*(((a-sig2)*x1-(sig2*x2)-(c+sig2)*x3+sig2)-(beta));
      k42=k*h;

      k=x3*((-(b+sig3)*x1+(c-sig3)*x2-(sig3*x3)+sig3)-xi);
      k43=h*k;    

      

      x1=x10+(439.0*k11/216.0)-(8.0*k21)+(3680.0*k31/513.0)-(845.0*k41/4104.0);
      x2=x20+(439.0*k12/216.0)-(8.0*k22)+(3680.0*k32/513.0)-(845.0*k42/4104.0);
      x3=x30+(439.0*k13/216.0)-(8.0*k23)+(3680.0*k33/513.0)-(845.0*k43/4104.0);
      w=w0+h;

      k=x1*((-(sig1*x1)-(a+sig1)*x2+(b-sig1)*x3+sig1)-(1-alpha));
      k51=k*h;

      k=x2*(((a-sig2)*x1-(sig2*x2)-(c+sig2)*x3+sig2)-(beta));
      k52=k*h;

      k=x3*((-(b+sig3)*x1+(c-sig3)*x2-(sig3*x3)+sig3)-xi);
      k53=h*k;    

      x1=x10-(8.0*k11/27.0)+(2.0*k21)-(3544.0*k31/2565.0)+(1859.0*k41/4104.0)-(11.0*k51/40.0);
      x2=x20-(8.0*k12/27.0)+(2.0*k22)-(3544.0*k32/2565.0)+(1859.0*k42/4104.0)-(11.0*k52/40.0);
      x3=x30-(8.0*k13/27.0)+(2.0*k23)-(3544.0*k33/2565.0)+(1859.0*k43/4104.0)-(11.0*k53/40.0);
      w=w0+h/2.0;

      k=x1*((-(sig1*x1)-(a+sig1)*x2+(b-sig1)*x3+sig1)-(1-alpha));
      k61=k*h;

      k=x2*(((a-sig2)*x1-(sig2*x2)-(c+sig2)*x3+sig2)-(beta));
      k62=k*h;

      k=x3*((-(b+sig3)*x1+(c-sig3)*x2-(sig3*x3)+sig3)-xi);
      k63=h*k;          

      x10=x10+(16.0*k11/135.0)+(6656.0*k31/12825.0)+(28561.0*k41/56430.0)-(9.0*k51/50.0)+(2.0*k61/55.0);
      x20=x20+(16.0*k12/135.0)+(6656.0*k32/12825.0)+(28561.0*k42/56430.0)-(9.0*k52/50.0)+(2.0*k62/55.0);
      x30=x30+(16.0*k13/135.0)+(6656.0*k33/12825.0)+(28561.0*k43/56430.0)-(9.0*k53/50.0)+(2.0*k63/55.0);
      w0=w0+h;
     
      
      if(i>9000000)
      {
      	xsum=xsum+x10;
      	ysum=ysum+x20;
      	zsum=zsum+x30;
      }
         
      	xavg=xsum/1000000;
      	yavg=ysum/1000000;
      	zavg=zsum/1000000;
      }
      printf("%f\t%f\n",a,b);
       if(xavg+yavg+zavg<=1)
      {
    if(xavg<=0.0001 && yavg<=0.0001 && zavg<=0.0001)
       {
       		fprintf(fp1,"%f\t%f\n",a,b);
	   }
	if(xavg>=0.0001 && yavg<=0.0001 && zavg<=0.0001)
		{
		fprintf(fp2,"%f\t%f\n",a,b);	
		}
		if(xavg<=0.0001 && yavg>=0.0001 && zavg<=0.0001)
		{
		fprintf(fp3,"%f\t%f\n",a,b);	
		}
		if(xavg<=0.0001 && yavg<=0.0001 && zavg>=0.0001)
		{
		fprintf(fp4,"%f\t%f\n",a,b);
		}

      }
     

}}
fclose(fp1);
fclose(fp2);
fclose(fp3);
fclose(fp4);
}

