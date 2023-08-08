//==========================기초 100제==========================
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
//==========================기초 100제 끝==========================
//1167
#include<stdio.h>

int main(void){
	int a,b,c,tmp;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		tmp = a;
		a=b;
		b=tmp;
	}
	if(b>c){
		tmp = b;
		b=c;
		c=tmp;
	}
	if(a>b){
		tmp = a;
		a=b;
		b=tmp;
	}
	printf("%d",b);
	return 0;
}

//1168
#include<stdio.h>

int main(void){
	int ymd,gender;
	scanf("%06d %d",&ymd,&gender);
	ymd/=10000; //1만을 나누면 앞 두자리만 남음
	if(gender==1||gender==2){
		printf("%d",113-ymd);
	}
	else{
		printf("%d",13-ymd);
	}
	return 0;
}

//1169
#include <stdio.h>

int main(){
    int age;
    scanf("%d",&age);
    if(age>=14 && age<=113){
        printf("%d ",(2012-age+1)%100);
        printf("1");
    }
    else{
        printf("%d ",(2012-age+1)%100);
        printf("3");
    }
	
    return 0;
}

//1170
#include <stdio.h>

int main(){
    int age;
    scanf("%d",&age);
    if(age>=14 && age<=113){
        printf("%d ",(2012-age+1)%100);
        printf("1");
    }
    else{
        printf("%d ",(2012-age+1)%100);
        printf("3");
    }
    return 0;
}

//1171
#include<stdio.h>

int main(void){
	int g,c,n; //grade, class, number
	scanf("%d %d %d",&g,&c,&n);

	printf("%d%02d%03d",g,c,n);
	

	return 0;
}

//1172
int main(void){
	int a,b,c,tmp;
	scanf("%d %d %d",&a,&b,&c);
	if(a>b){
		tmp = a;
		a=b;
		b=tmp;
	}
	if(b>c){
		tmp = b;
		b=c;
		c=tmp;
	}
	if(a>b){
		tmp = a;
		a=b;
		b=tmp;
	}
	printf("%d %d %d",a,b,c);
	return 0;
}

//1173
#include<stdio.h>

int main(void){
	int h,m;
	scanf("%d %d",&h,&m);
	if(m<30){
		h--;
		if(h==-1) printf("%d %d",23,m+30);
		else printf("%d %d",h,m+30);
	}
	else {
		printf("%d %d",h,m-30);
	}

	return 0;
}

//1180
#include<stdio.h>

int main(void){
	int n,a,b;
	scanf("%d",&n);
	a = n/10; //10의자리  
    b = n%10; //1의자리 

	int plus = (b*10+a)*2;
	if(plus>100) plus-=100;
	printf("%d\n",plus);
	if(plus<=50) printf("GOOD");
	else printf("OH MY GOD");
	
	
	return 0;
}

//1201
#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	if(n<0) printf("음수");
	else if(n>0) printf("양수");
	else printf("0");
	
	return 0;

//1202
#include<stdio.h>

int main(void){
	int s;
	scanf("%d",&s);
	if(s>=90) printf("A");
	else if(s>=80) printf("B");
	else if(s>=70) printf("C");
	else if(s>=60) printf("D");
	else printf("F");
	return 0;
}

//1203
#include<stdio.h>

int main(void){
	int s;
	scanf("%d",&s);
	if(s<=10) printf("정상");
	else if(s<=20) printf("과체중");

	else printf("비만");
	
	return 0;
}

//1204
#include<stdio.h>

int main(void){
	int n;
	scanf("%d",&n);
	int f=n%10;
	int t=n/10;
	printf("%d",n);
	if (t==1) printf("th");
	else if (f==1) printf("st");
	else if (f==2) printf("nd");
	else if (f==3) printf("rd");
	else printf("th");
	return 0;
}

//1205
#include<stdio.h>

int main(void){
	int a,b,r;
	scanf("%d %d",&a,&b);
	int p1,m1,m2,s1,d1,d2,j1,j2;
	p1 = a+b; 
	m1 = a-b; m2 = b-a;
	s1 = a*b; 
	d1 = a/b; d2 = b/a;
	j1=pow(a,b); j2=pow(b,a);
	if(m1>p1) r=m1;
	if(m2>r) r=m2;
	if(s1>r) r=s1;
	if(d1>r) r=d1;
	if(d2>r) r=d2;
	if(j1>r) r=j1;
	if(j2>r) r=j2;
	printf("%lf",r);
	
	
	return 0;
}

//1206
#include<stdio.h>

int main(void){
	int a,b;
	scanf("%d %d",&a,&b);
	if(b%a==0){
		printf("%d*%d=%d",a,b/a,b);
	}
	else if(a%b==0){
		printf("%d*%d=%d",b,a/b,a);
	}
	else{
		printf("none");
	}
	
	return 0;
}

//1207
#include<stdio.h>

int main(void){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int sum = a+b+c+d;
	if(sum==0) printf("모");
	else if(sum==1) printf("도");
	else if(sum==2) printf("개");
	else if(sum==3) printf("걸");
	else if(sum==4) printf("윷");
	
	
	
	return 0;
}

//1210
#include<stdio.h>

int main(void){
	int a,b,a1,b1;
	scanf("%d %d",&a,&b);
	if(a==1) a1=400;
	else if (a==2) a1=340;
	else if (a==3) a1=170;
	else if (a==4) a1=100;
	else if (a==5) a1=70;
	
	if(b==1) b1=400;
	else if (b==2) b1=340;
	else if (b==3) b1=170;
	else if (b==4) b1=100;
	else if (b==5) b1=70;

	if(a1+b1>500) printf("angry");
	else printf("no angry");
	
	return 0;
}

//1212
#include<stdio.h>

int main(void){
	int a,b,c,tmp;
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b) {
		tmp=b; 
		b=a; 
		a=tmp;
	}
	if(b>=c) {
		tmp=c; 
		c=b;
		b=tmp;
	}
	if(a>=b) {
		tmp=b; 
		b=a; 
		a=tmp;
	}
	printf("%d %d %d",a,b,c);
	if(c<a+b) printf("yes");
	else printf("no");
	return 0;
}

//1214
#include <stdio.h>

int main (void){
    
    int a, b;
    scanf("%d %d",&a,&b);
    
    if(b == 2){
        if( ((a%4 ==0) && (a%100 != 0)) || (a%400 == 0) ) printf("29");
        else printf("28");
    }
    else{
        if(b == 1 || b ==3 || b == 5 || b == 7||b ==8||b ==10||b ==12) printf("31");
        else printf("30");
    }
    return 0;
}

//1216
#include<stdio.h>

int main(void){
	
	int a,b,c,d;
	scanf("%d %d %d",&a,&b,&c);
	d=a+c;
	if(d>b) printf("do not advertise");
	else if(d<b) printf("advertise");
	else printf("does not matter");
		
   	 return 0;
}

//1218
#include<stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a+b>c && a+c>b && b+c>a) printf("삼각형아님")
	else if(a==b && b==c) printf("정삼각형");
	else if(a==b || b==c || b==c) printf("이등변삼각형");
	else if(a*a + b*b == c*c) printf("직각삼각형");
	else printf("삼각형");
		
	return 0;
}

//1222
#include <stdio.h>

int main(){
	int a,class1,class2,time;
	scanf("%d %d %d",&time,&class1,&class2);
	for(a=time; a<90; a+=5){
		class1++;
	}
	if(class1>class2) printf("win");
	else if(class1<class2) printf("lose");
	else if(class1==class2) printf("same");
        
    	return 0;
}

//1224
#include <stdio.h>
 
int main (void){
	float a,b,c,d;
	scanf("%f %f %f %f",&a,&b,&c,&d);
	if(a/b>c/d) printf(">");
	else if(a/b==c/d) printf("=");
	else printf("<");
    
    	return 0;
}

//1226
#include<stdio.h>

int main(void){
	int a,b,c,d,e,f,g;
	scanf("%d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g);
	int lotto1,lotto2,lotto3,lotto4,lotto5,lotto6;
	scanf("%d %d %d %d %d %d",&lotto1,&lotto2,&lotto3,&lotto4,&lotto5,&lotto6);
	int score=0;
	if(a==lotto1 || b==lotto1 || c==lotto1 || d==lotto1 || e==lotto1 || f==lotto1) score++;
	if(a==lotto2 || b==lotto2 || c==lotto2 || d==lotto2 || e==lotto2 || f==lotto2) score++;
	if(a==lotto3 || b==lotto3 || c==lotto3 || d==lotto3 || e==lotto3 || f==lotto3) score++;
	if(a==lotto4 || b==lotto4 || c==lotto4 || d==lotto4 || e==lotto4 || f==lotto4) score++;
	if(a==lotto5 || b==lotto5 || c==lotto5 || d==lotto5 || e==lotto5 || f==lotto5) score++;
	if(a==lotto6 || b==lotto6 || c==lotto6 || d==lotto6 || e==lotto6 || f==lotto6) score++;
	
	if(score==6) printf("1"); 
	else if((g==lotto1 || g==lotto2 || g==lotto3 || g==lotto4 || g==lotto5 || g==lotto6) && score==5) printf("2");
	else if(score==5) printf("3");
	else if(score==4) printf("4"); 
	else if(score==3) printf("5");
	else printf("0");
	
	return 0;
}

//1228
#include<stdio.h>

int main(void){
	double a,b;
	scanf("%lf%lf",&a,&b);
	
	double weight=(b-((a-100)*0.9))*100/((a-100)*0.9);
	
	if(weight<=10)printf("정상");
	else if(weight<=20) printf("과체중");
	else printf("비만");
	
	return 0;
}

//1229(방법1)
#include<stdio.h>

int main(void){
    double h, w, avg;
    scanf("%lf %lf", &h, &w);
    if(h<150) avg = h-100;
    else if(h<160) avg = (h-150)/2+50;
    else avg = (h-100)*0.9;
    double per = (w-avg)*100/avg;
    
    if (per<=10) printf("정상");
    else if (per<=20) printf("과체중");
    else printf("비만");
    
    return 0;
    
    
}

//1229(방법2)
#include<stdio.h>

int main(void){
    double h, w, per;
    scanf("%lf %lf", &h, &w);
    if(h<150) per = (w-(h-100))*100/(h-100);
    else if(h<160) per = (w-((h-150)/2+50))*100/((h-150)/2+50);
    else per = (w-((h-100)*0.9))*100/((h-100)*0.9);
    
    if (per<=10) printf("정상");
    else if (per<=20) printf("과체중");
    else printf("비만");
    
    return 0;
}

//1230
#include<stdio.h>

int main(void){
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if (a<=170) printf("CRASH %d",a);
	else if (b<=170) printf("CRASH %d",b);
	else if (c<=170) printf("CRASH %d",c);
	else printf("PASS");
	
	return 0;
}

//1231
#include <stdio.h>
 
 
int main (void)
{
    int a,b;
    char cal;
    
    scanf("%d %c %d",&a,&cal,&b);
	   
    if(cal == '+') printf("%d",a + b);
    else if(cal == '-') printf("%d",a-b);
    else if(cal == '*') printf("%d",a*b);
    else printf("%.02f",(float)a/(float)b);
    
    return 0;
}

//1251
#include<stdio.h>

int main(void){
    for(int i=1;i<=100;i++){
        print("%d ",i);    
    }
	
    return 0;
}

//1252
#include<stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    for(int i=1; i<=a; i++){
        printf("%d ",i);
    }
  
    return 0;
}

//1352
# include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    for(int i = 1; i<=n; i++){
    	for(int j = 1; j<=n; j++){
    		printf("*");
		}
		printf("\n");
	}
	return 0;
}
 
//1353
#include<stdio.h>

int main(void){
    int a;
    scanf("%d",&a);
    for(int i =1; i<=a;i++){
        for(int j=1;j<=i;j++) printf("*");
        printf("\n");
    }       
    return 0;
}

//1354
#include<stdio.h>
 
int main(){
    int a;
    scanf("%d", &a);
    
    for(int i = 1; i<= a; i++){
        for(int j = i; j <=a; j++){
            printf("*");
        }
        printf("\n");
    }
 
   return 0;
}

//1355
#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        for(int k = 1; k < i; k++){
            printf(" ");
        }
        for(int j = i; j <= num; j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}

//1402
#include<stdio.h>
 
 
int main(){
    int num;
    int buf[1000] = {};
    scanf("%d",&num);
    
    for(int i =0; i<num; i++){
        scanf("%d", &buf[i]);
    }
    for(int j = num-1; j >= 0; j--){
        printf("%d ",buf[j]);
    }

    return 0;
}

//1403
#include<stdio.h>
 
int main(){
    int num;
    int buf[100] = {};
    scanf("%d",&num);
    
    for(int i =0; i<num; i++){
        scanf("%d", &buf[i]);
    }
    for(int k = 0; k < 2; k++){
        for(int j = 0; j <num; j++){
            printf("%d\n",buf[j]);
        }
    }
    return 0;
}

//1405
#include <stdio.h>

int main(){
    int i,j,a,arr[1000]={0};
    scanf("%d",&a);
    for(i=0;i<a;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++){
        for(j=i;j<a+i;j++){
            printf("%d ",arr[j%(a)]);
        }
        printf("\n");
    }
	return 0;
}

//1407
#include<stdio.h>
 
int main(){
    char a[101];
    gets(a);
    for (int i = 0; a[i] != '\0'; i++) {
        if (a[i] != ' '){
            printf("%c",a[i]);
        }
    }
    return 0;
  
}

//1410
#include <stdio.h>

int main(){
    char s[100001];
    int i,a=0,b=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++){
        if(s[i]=='(')
            a++;
        if(s[i]==')')
            b++;
    }
    printf("%d %d",a,b);
	return 0;
}

//1411
#include <stdio.h>

int main(){
	int n, m, i;
	scanf("%d", &n);
	int arr[51];
	
	for(i=1; i<n; i++){
		scanf("%d", &m);
		arr[m]=1;
	}
	for(i=1; i<=n; i++){
		if(arr[i]!=1) printf("%d", i);
	}
	return 0;
}
