#include <stdio.h>
int main() {
    int a[100],b[100],n1,n2;
    scanf("%d",&n1); for(int i=0;i<n1;i++) scanf("%d",&a[i]);
    scanf("%d",&n2); for(int i=0;i<n2;i++) scanf("%d",&b[i]);
    for(int i=0;i<n1;i++) printf("%d ",a[i]);
    for(int i=0;i<n2;i++){
        int found=0;
        for(int j=0;j<n1;j++) if(b[i]==a[j]){found=1;break;}
        if(!found) printf("%d ",b[i]);
    }
    return 0;
}