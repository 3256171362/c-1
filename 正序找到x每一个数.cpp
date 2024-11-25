#include <stdio.h>
int main(){
	int x=0;
	scanf("%d",&x);
	int a=x; 
	int mask=1;
	while(x>9){
		x/=10;
		mask*=10;
	} //找位数 
	x=a;
	while(mask>0){//注意条件不是x=0，因为x中间可能有0.所以要mask一直到0 
		int d=x/mask;//除法找最前面的位数 
		printf("%d ",d);
		x%=mask;//取余留后面的位数 
		mask/=10;
	}
	
	
	
	return 0;
}
