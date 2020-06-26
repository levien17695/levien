#include<stdio.h>
int tinhTrungBinh(int ary[],int n){
	int count=0;
	float s=0, tb=0;
	for(int i=0;i<n;i++){
		count ++;
		s=s+ary[i];
	}
	tb= s/count;
	return tb;
}
int main(){
	int n,i,flag=0;
	printf("nhap so:\n");
	scanf("%d",&n);
	int a[n];
	return 0;
}
