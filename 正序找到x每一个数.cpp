#include <stdio.h>
int main(){
	int x=0;
	scanf("%d",&x);
	int a=x; 
	int mask=1;
	while(x>9){
		x/=10;
		mask*=10;
	} //��λ�� 
	x=a;
	while(mask>0){//ע����������x=0����Ϊx�м������0.����Ҫmaskһֱ��0 
		int d=x/mask;//��������ǰ���λ�� 
		printf("%d ",d);
		x%=mask;//ȡ���������λ�� 
		mask/=10;
	}
	
	
	
	return 0;
}
