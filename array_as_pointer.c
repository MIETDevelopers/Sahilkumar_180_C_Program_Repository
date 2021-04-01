#include<stdio.h>
int main(){
	int data[5],i;
	for(i=0;i<5;++i){
	*(data+i)=i;
	printf('printing element \n');
	}
	for(i=0;i<5;++i){
	printf('%d\n',*(data+i));
	}
return 0;	
}