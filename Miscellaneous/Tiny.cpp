#include <iostream>#include <fstream>#include <cmath>#include <cstdlib>using namespace std;float a,b,c,thingy;int main(void){cout<<"a =\n";cin>>a;cout<<"b =\n";cin>>b;cout<<"c =\n";cin>>c;thingy=b*b-4.0*a*c;if(thingy>=0.0){thingy=sqrt(thingy);cout<<"The roots are "<<(-b+thingy)/(2.0*a)<<" and "<<(-b-thingy)/(2.0*a)<<"\n";}else{thingy=sqrt(-thingy);cout<<"The roots are "<<-b/(2.0*a)<<" plus or minus "<<thingy/(2.0*a)<<" i\n";}return 0;}