#include<iostream>
using namespace std;
struct comp sum(struct comp,struct comp);
struct comp mul(struct comp,struct comp);
struct comp
{
	int r,i;//r=real part and i=imaginary part;
};
int main()
{
	struct comp A,B,C,D;
	cout<<"enter first complex no. ";
	cin>>A.r>>A.i;
	cout<<"enter second complex no. ";
	cin>>B.r>>B.i;
	C=sum(A,B);
	if(C.i>0)
	cout<<"sum="<<C.r<<"+"<<C.i<<"i";
	else
	cout<<"sum="<<C.r<<C.i<<"i";
	cout<<endl;
	D=mul(A,B);
	if(D.i>0)
	cout<<"multiplication="<<D.r<<"+"<<D.i<<"i";
	else
	cout<<"multiplication="<<D.r<<D.i<<"i";
	
	return 0;
}
struct comp sum(struct comp A,struct comp B)
{
	struct comp X;
	X.r=A.r+B.r;
	X.i=A.i+B.i;
	return X;
}
struct comp mul(struct comp A,struct comp B)
{
	struct comp C;
	C.r=A.r*B.r-A.i*B.i;
	C.i=A.r*B.i+A.i*B.r;
	return C;
}
