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





