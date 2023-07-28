//1030
#include <stdio.h>

int main(void){
    long long int n;
    scanf("%lld",&n);
    printf("%lld",n);
    
    
    return 0;
}

//1031
#include<stdio.h>

int main(void){
    
    int a;
    scanf("%d",&a);
    printf("%o",a);
    
    
    return 0;
}

//1032
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%x",a);
	return 0;
}

//1033
#include<stdio.h>

int main(void){
    
    int a;
    scanf("%d",&a);
    printf("%X",a);
    
    
    return 0;
}


//1034
#include<stdio.h>

int main(void){
    
    int a;
    scanf("%o",&a);
    printf("%d",a);
    
    
    return 0;
}

//1035
#include<stdio.h>

int main(){
    int n;
    scanf("%x",&n);
    printf("%o",n);
	return 0;
}

//1036
#include <stdio.h>

int main(){
    char c;
    scanf("%c",&c);
    printf("%d",c);
	return 0;
}

//1037
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%c",a);
	return 0;
}

//1038
#include <stdio.h>

int main(){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a+b);
	return 0;
}

//1039
#include <stdio.h>

int main(){
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",a+b);
	return 0;
}

//1040
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",-a);
    
	return 0;
}

//1041
#include <stdio.h>

int main(){
    char a;
    scanf("%c",&a);
    printf("%c",a+1);
	return 0;
}

//1042
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a/b);
	return 0;
}

//1043
#include <stdio.h>

int main(){
    int a ,b;
    scanf("%d %d",&a,&b);
    printf("%d",a%b);
    
    
	return 0;
}

//1044
#include <stdio.h>

int main(){
    long long int a;
    scanf("%lld",&a);
    a++;
    printf("%lld",a);
	return 0;
}

//1045
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d\n",&a,&b);
    printf("%d\n",a+b);
    printf("%d\n",a-b);
    printf("%d\n",a*b);
    printf("%d\n",a/b);
    printf("%d\n",a%b);
    printf("%.2f",(float)a/(float)b);
    
	return 0;
}

//1046
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int ans = a+b+c;
    printf("%d\n",ans);
    printf("%.1f",(float)ans/3.0);
	return 0;
}

//1047
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%d",a<<1);
	return 0;
}

//1048
#include <stdio.h>

int main(){
    int a,b;
    
    scanf("%d %d",&a,&b);
    printf("%d",a<<b);
	return 0;
}

//1049
#include <stdio.h>

int main(){
    int a,b;
    
    scanf("%d %d",&a,&b);
    printf("%d",a>b);
	return 0;
}

//1050
#include <stdio.h>

int main(){
    int a,b;
    
    scanf("%d %d",&a,&b);
    printf("%d",a==b);
	return 0;
}

//1051
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",a<=b);
	return 0;
}

//1052
#include <stdio.h>

int main(){
    int a,b;
    
    scanf("%d %d",&a,&b);
    printf("%d",a!=b);
	return 0;
}

//1053
#include <stdio.h>

int main(){
    int a,b;
    
    scanf("%d",&a);
    printf("%d",!a);
	return 0;
}

//1054
#include <stdio.h>

int main(){
    int a,b;
    
    scanf("%d %d",&a,&b);
    printf("%d",a&&b);
	return 0;
}

//1055
#include <stdio.h>

int main(){
    int a,b;
    
    scanf("%d %d",&a,&b);
    printf("%d",a||b);
	return 0;
}

//105
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",(a && !b)|| (!a && b));
	return 0;
}

//1057
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", (a && b) || (!a && !b));
	return 0;
}

//1058
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", !(a||b));
	return 0;
}

//1059
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    printf("%d", ~a);
	return 0;
}

//1060
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", a&b);
	return 0;
}

//1061
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", a|b);
	return 0;
}

//1062
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", a^b);
	return 0;
}

//1063
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d", a>b?a:b);
	return 0;
}

//1064
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int result =a<b?a:b;
    
    printf("%d",result<c ? result:c );
	return 0;
}

//1065
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a ,&b ,&c);
    if((a%2)==0) printf("%d\n",a);
    if((b%2)==0) printf("%d\n",b);
    if((c%2)==0) printf("%d\n",c);
	return 0;
}

//1066
#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if((a%2)==0) printf("even\n");
    else printf("odd\n");
    if((b%2)==0) printf("even\n");
    else printf("odd\n");
    if((c%2)==0) printf("even\n");
    else printf("odd\n");
    return 0;
}

//1067
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    if(a>0) printf("plus\n");
    else printf("minus\n");
    if((a%2)==0) printf("even\n");
    else printf("odd\n");
    return 0;
}

//1068
#include <stdio.h>

int main(){
    int point;
    scanf("%d",&point);
    if(point>=90) printf("A");
	else if(point>=70) printf("B");
	else if(point>=40) printf("C");
	else printf("D");
	return 0;
}

//1069
#include <stdio.h>

int main(){
    char point;
    scanf("%c",&point);
    switch(point)
    {
        case 'A':
            printf("best!!!");
            break;
        case 'B':
            printf("good!!");
            break;
        case 'C':
            printf("run!");
            break;
        case 'D':
            printf("slowly~");
            break;
        default:
            printf("what?");
            break;
    }
	return 0;
}

//1070
$include <stdio.h>

int main(){
    int point;
    scanf("%d",&point);
    switch(point)
    {
        case 3:
        case 4:
        case 5:
            printf("spring");
            break;
        case 6:
        case 7:
        case 8:
            printf("summer");
            break;
        case 9:
        case 10:
        case 11:
            printf("fall");
            break;
        default:
            printf("winter");
            break;   
    }
	return 0;
}

//1071
--reload사용
#include <stdio.h>

int main(){
    int a;
reload:
    scanf("%d",&a);
    
    if(a!=0){
        printf("%d\n",a);
        goto reload;
    }
	return 0;
}
--if문 사용
#include <stdio.h>

int main() {
    int n;
    while (1) { 
        scanf("%d", &n);
        if (n == 0) { 
            break;
        }
        printf("%d\n", n);
    }
    return 0;
}

//1072
--reget사용
#include <stdio.h>

int main(){
    int a,b;
    scanf("%d",&a);
reget:
    scanf("%d",&b);
    if(a--!=0){ 
        printf("%d\n",b);
        goto reget;
    }
	return 0;
}
--반복문 사용
#include <stdio.h>

int main() {
    int n;
    int num;
    scanf("%d", &n); 
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        printf("%d\n", num); 
    }
    return 0;
}

//1073
#include <stdio.h>

int main(){
    int a=1;
    
    while(a!=0){
        scanf("%d",&a);
        if(a!=0)printf("%d\n",a);
    }
	return 0;
}

//1074
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(a!=0){
        printf("%d\n",a);
        a--;
    }
	return 0;
}

//1075
#include <stdio.h>

int main(){
    int a;
    scanf("%d",&a);
    while(a!=0){
        a--;
        printf("%d\n",a);
    }
	return 0;
}

//1076
#include<stdio.h>

int main (void){
    char a,b='a';
    scanf("%c", &a);
    do{
        printf("%c ",b);
        b+=1;
        a-=1;
    }
    while(a >= 'a');
    return 0;
}

//1077
#include<stdio.h>

int main(void){
	int i, n;
	scanf("%d",&n);
	for(i=0; i<=n; i++){
	  printf("%d\n",i);
	}
	return 0;
}

//1078
#include<stdio.h>

int main(){
    int i,n,sum=0;
 
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
      if(i%2==0) sum+=i;
    }
    printf("%d",sum);
    return 0;
}

//1079
#include <stdio.h>

int main(){
    char a;
    while(a!='q'){
        scanf(" %c",&a);
        printf("%c\n",a);
    }
	return 0;
}

//1080
#include <stdio.h>
 
int main (void){
    int a,b=0,i=0;
    scanf("%d",&a);
    while(1){
        i++;
        b+=i;
        if(b>=a){break;}
    }
    printf("%d",i);
    return 0;
}

//1081
#include <stdio.h>
 
int main (void){
	int a,b,i,j;
	scanf("%d %d",&a,&b);
	for(i=1;i<=a;i++){
		for(j=1;j<=b;j++){
			printf("%d %d\n",i,j);
		}
	}
	return 0;
}

//1082
#include <stdio.h>
 
int main (void){
	int a,i;
	scanf("%X",&a);
	for(i=1;i<=15;i++){
		printf("%X*%X=%X\n",a,i,a*i);
	}
	return 0;
}

//1083
#include <stdio.h>
 
int main(){
    int a,i;
    scanf("%d",&a);
    for(i=1;i<=a;i++){
    	if(i%3==0) printf("X ");
	else printf("%d ",i);
	}
    return 0;
}

//1084
#include <stdio.h>
 
int main(){
	int i,j,k,c=0;
	int r,g,b;
	scanf("%d%d%d",&r,&g,&b);
	for(i=0; i<r; i++)
	  for(j=0; j<g; j++)
	    for(k=0; k<b; k++){
	      printf("%d %d %d\n", i, j, k);
	      c++;
	    }
	printf("%d",c);
    return 0;
}

//1085
#include <stdio.h>

int main() {
    double a,b,c,d;
    scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
    printf("%.1f MB", (a*b*c*d)/8*1024*1024);
    return 0;
}

//1086
#include <stdio.h>

int main(void) {
    long long int a, b, c;
    double d;
    scanf("%lld %lld %lld",&a,&b,&c);
    d = (a*b*c);
    printf("%.02lf MB",d/(8*1024*1024));
    return 0;
}

//1087
#include <stdio.h>

int main() {
    int a, b = 0;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        b += i;
        if (b >= a) {
            printf("%d", b);
            break;
        }
    }
    return 0;
}


//1088
#include <stdio.h>
 
int main(){
	int a,i;
	scanf("%d",&a);
	for(i=1; i<=a; i++){
	  if(i%3==0)
	    continue; 
	  printf("%d ", i);
	}
    return 0;
}

//1089
#include<stdio.h>
 
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=1; i <c; i++){
        a+=b; 
    }
    printf("%d",a);
    return 0;
}

//1090
#include<stdio.h>
int main(){
	long long int a,b,c,i;
	scanf("%lld %lld %lld",&a,&b,&c);
	for(i=1 ; i<c; i++){
	    a *= b;
	}
	printf("%lld", a);
	return 0;
}

//1091
#include <stdio.h>

int main(){
    long long int a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    for (int i = 1; i < d; i++){
        a = (a * b) + c;
    }
    printf("%lld", a);
    return 0;
}

//1092
#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int d = 1;
    while (d % a != 0 || d % b != 0 || d % c != 0) d++;
    printf("%d", d);
    return 0;
}

//1093
#include <stdio.h>

int main(){
    int n, i, t;
    int a[24]={};
    scanf("%d", &n); 
    for(i=1; i<=n; i++){
	    scanf("%d", &t); 
	    a[t]=a[t]+1; 
    }
    for(i=1; i<=23; i++) printf("%d ", a[i]); 
    return 0;
}
//1094
#include <stdio.h>

int main(){
    int num, arr[10000];
    scanf("%d",&num);
    for(int i=0; i<num; i++) scanf("%d", &arr[i]);
    for(int i=num-1; i>=0; i--) printf("%d ", arr[i]);
    return 0;
}

//1095
#include<stdio.h>
 
int main(void) {
    int arr[10000] = {0,},num;
    scanf("%d", &num);
    for (int i = 0; i<num; i++){
        scanf("%d", &arr[i]);
    }
    int tmp;
    for (int i=0; i <num; i++) {
        for (int j=0; j<num-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                tmp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = tmp;
            }
        }
    }
    printf("%d", arr[0]);
    return 0;
}

//1096
#include<stdio.h>

int main(void){
    int n,x,y;
    int a[20][20]={};
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        a[x][y]=1;
    }
    for(int i=1;i<=19;i++){
        for(int j=1;j<=19;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

//1097
#include<stdio.h>

int main(){
    int n, i, j, x, y;
    int a[20][20]={};	
    for(i=1;i<=19;i++){		
        for(j=1;j<=19;j++){
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        scanf("%d %d",&x,&y);
        for(j=1;j<=19;j++){
            a[x][j] = !a[x][j];	
            a[j][y] = !a[j][y];	
        }
    }
    for(i=1;i<=19;i++){
        for(j=1;j<=19;j++){
            printf("%d ",a[i][j]);	
        }
        printf("\n");
    }
    return 0;
}




