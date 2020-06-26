#include<stdio.h>

int main(){
	int n,i,flag=0;
	printf("nhap so:\n");
	scanf("%d",&n);
	int a[n];

	for(i=0;i<n;i++){
		printf("nhap so a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=n-1;i>=0;i--){
		if(a[i]%2==0){
			flag=1;
			break;
		}
	}if(flag==0){
		printf("\nkhong co so chan nao !");
	}else{
		printf("\nso chan cuoi cung la: %d",a[i]);
	}		
}
