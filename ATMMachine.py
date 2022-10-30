#include <stdio.h>
int main(void) {
    int t;
    scanf("%d",&t);
    for (int i=1;i<=t;i++) {
        int n,k;
        scanf("%d%d",&n,&k);
        int a[n],j;
        for(j=0;j<n;j++){
            scanf("%d",&a[j]);
        }
        for(int j=0;j<n;j++){
            if(a[j]<=k){
                k=k-a[j];
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
	return 0;
}
