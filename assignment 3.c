 /* 1


 #include<stdio.h>
#include<conio.h>
int main()
{
    int x;
    printf("enter a numbers");
    scanf("%d",&x);
    if(x>=0)
        printf("positive");
    else
        printf("non positive");
    return 0;
}*/

/* 2
#include<stdio.h>
int main()
{
    int x;
    printf("enter a numbers");
    scanf("%d",&x);
    x=x%5;
    if(x==0)
        printf("divisible by 5",x);
    else
        printf("not a divisible by 5");
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int a;
    printf("enter a numbers");
    scanf("%d",&a);
    if(a%2==0)
        printf("even");
    else
        printf("odd");
    return 0;
}*/
/*  4.
#include<stdio.h>
int main()
{
    int x;
    printf("enter a numbers ");
    scanf("%d",&x);
    x=x&1;
    if(x==0)
        printf("even");
    else
        printf("odd");
    return 0;
}*/
/* 5
#include<stdio.h>
int main()
{
    int x;
    printf("enter a numbers");
    scanf("%d",&x);
    if(x>99 && x<1000)
        printf("%d is a three digit numbers",x);
    else
        printf("%d is a not three digit numbers",x);
        return 0;
}*/
/* 6
#include<stdio.h>
int main()
{
    int x,y;
    printf("ente two numbers");
    scanf("%d%d",&x,&y);
    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);
    return 0;
}*/
/* 7
#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,d;
    float x,y;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0)
        printf("roots are immaginary");
    if(d==0){
        printf("roots are real and equal");
        x=-b-sqrt(d)/2*a;
        y=(-b+sqrt(d))/(2*a);
        printf("\nrots %f%f",x,y);
    }
    if(d>0){
        printf("roots are real and distinct");
        x=(-b-sqrt(d))/(2*a);
        y=(-b+sqrt(d))/(2*a);
        printf("\nroots %f%f",x,y);
    }
    return 0;
}*/
/*
#include<stdio.h>
int main()
{
    int x;
    printf("enter a year");
    scanf("%d",&x);



        if(x%4==0)
            printf("leap year");
        else
            printf("not a leap year");


    return 0;
}*/

/* 9
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b){
        if(a>c)
            printf("%d",a);
        else
            printf("%d",c);
    }
    else{
        if(b>c)
            printf("%d",b);
        else
            printf("%d",c);
    }

    return 0;
}*/

/* 11
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    printf("enter your five sub marks");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>=33 && b>=33 && c>=33 && d>=33 && e>=33)
        printf("passed");
    else
        printf("failed");
    return 0;
}*/
/* 12
#include<stdio.h>
int main()
{
    char x;
    printf("enter a charactor");
    scanf("%c",&x);
    if(x>='a' &&x<='z')
        printf("lower case");
    else
        printf("upper case");
    return 0;
}*/

/* 13
#include<stdio.h>
int main()
{
    int x;
    printf("enter a numbers");
    scanf("%d",&x);
    if((x%3==0)&&(x%2==0))
        printf("this numbers is divisible by 3 and 2");
    else
        printf("this numbers is not divisible by 3 and 2");
    return 0;
}*/
/* 14
#include<stdio.h>
int main()
{
    int x;
    printf("enter a numbers");
    scanf("%d",&x);
    if((x%7==0)||(x%3==0))
        printf("this number divisible by 7 and 3");
    else
        printf("this numbers is not divisible by 7 and 3");
    return 0;
}*/
/* 15
#include<stdio.h>
int main()
{
    int a;
    printf("enter anumbers");
    scanf("%d",&a);
    if(a<0)
        printf("negative");
    if(a==0)
        printf("zero");
    if(a>0)
        printf("positive");
    return 0;
}*/

/* 16
#include<stdio.h>
int main()
{
    char x;
    printf("enter a numbers");
    scanf("%d",&x);
    if(x>='A' && x<='Z')
        printf("uppar case");
     else if(x>='a' && x<='z')
        printf("lower case");
       else if(x>=0 && x<=9)
        printf("digit numbers");
    else
        printf("special numbers");
    return 0;
    */
    /* 17
    #include<stdio.h>
    int main()
    {
        int a,b,c;
        printf("enter three numbers");
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>c &&b+c>a && c+a>b)
            printf("vaild");
        else
            printf("not vaild");
        return 0;
    }*/
//18
    #include<stdio.h>
    int main()
    {
        int m;
        printf("enter a numbers");
        scanf("%d",&m);
        if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
            printf("day 31");
        else if(m==4 || m==6 || m==9 || m==11)
            printf("days 30");
        else if(m==2)
            printf("days 28&29");
        return 0;
    }


