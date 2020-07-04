#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>

long  double i;
long double j=(9700*0.1);
long double k=39475*0.12;
long double l=84200*0.22;
long double m=160725*0.24;
long double n=204100*0.32;
long double o=510300*0.35;
long double a=0;
long double fica=0;
long double state=0;
long double sum=0;
long double fed=0;
void main () {
clrscr();
cout<<"-------------------MENLO PARK---------------"<<endl;
cout<<endl;
cout<<"tax calculator for an imaginary country"<<endl;
		cout<<endl;


		cout<<"Enter your income"<<endl;
		cin>>i;
					if(i<=8809)  {
					fica=i*0.0765;
					state=i*0.01;
					sum=i-(fica+state);
					cout<<"Your income after tax will be around : $"<<sum<<endl;
					}

					if (i>8809 && i<9701) {
					  j=i-8809;
					fed=0;
					fica=i*0.0765;
					state=i*0.01 +j*0.02;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}
					if(i>=9701 && i<20883) {
					a=1-9701;
					fed=j+(a*0.12);
					fica=i*0.0765;
					state=i*0.02;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=20883 && i<32960) {
					a=i-20883;
					fed=j+(a*0.12);
					fica=i*0.0765;
					state=i*0.04;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=32960 && i<39476) {
					a=i-32960;
					fed=j+(a*0.12);
					fica=i*0.0765;
					state=i*0.06;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if(i>=39476 && i<45753) {
					a=i-39476;
					fed=(0.22*a)+j+k;
					fica=i*0.0765;
					state=i*0.06;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=45753 && i<57824) {
					a=i-45753;
					fed=(a*0.22)+j+k;
					fica=i*0.0765;
					state=i*0.08;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=57824 && i<84201) {
					a=i-57824;
					fed=(a*0.22)+j+k;
					fica=i*0.0765;
					state=i*0.093;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if(i>=84201 && i<160726) {
					a=i-84201;
					fed=(0.24*a)+j+k+l;
					fica=i*0.0765;
					state=i*0.02;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if(i>=160726 && i<240101) {
					a=i-160726;
					fed=(0.32*a)+j+k+l+m;
					fica=i*0.0765;
					state=i*0.02;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=240101 && i<295373) {
					a=i-240101;
					fed=(a*0.35)+j+k+l+m+n;
					fica=i*0.0765;
					state=i*0.103;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=295373 && i<510301) {
					a=i-240101;
					fed=(a*0.35)+j+k+l+m+n;
					fica=i*0.0765;
					state=i*0.113;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=510301 && i<590742) {
					a=1-510301;
					fed=(a*0.35)+j+k+l+m+n+o;
					fica=i*0.0765;
					state=i*0.113;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=590742 && i<999999) {
					a=1-510301;
					fed=(a*0.35)+j+k+l+m+n+o;
					fica=i*0.0765;
					state=i*0.123;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}

					if (i>=1000000) {
					a=1-510301;
					fed=(a*0.35)+j+k+l+m+n+o;
					fica=i*0.0765;
					state=i*0.133;
					sum=i-(fica+state+fed);
					cout<<"Your income after tax will be around : $ "<<sum<<endl;
					}




getch();
       }

