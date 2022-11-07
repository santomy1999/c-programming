#include<stdio.h>
struct com{
    int a,b;
};
struct com read_com()
{
    struct com num;

    printf("\nEnter the real part: ");
    scanf("%d",&num.a);
    // printf("%d",num.a);
    printf("\nEnter the imaginary part: ");
    scanf("%d",&num.b);
    return num;
}
void disp_com(struct com num){

    printf("\n%d + %d i",num.a,num.b);

}
struct com add_com(struct com num1,struct com num2){
    struct com res;
    res.a=num1.a+num2.a;
    res.b=num1.b+num2.b;
    return res;
}
struct com mult_com(struct com num1,struct com num2){
    struct com res;
    res.a= (num1.a*num2.a)-(num1.b*num2.b);
    res.b=(num1.a*num2.b)+(num1.b*num2.a);
    return res;
}
int main()
{
    struct com n,n2,n1,res;
    int opt,i=0; 
    // printf("\n____Enter an option____\n");
    while( i==0){
        printf("\n____Enter an option____\n");
        printf("1.Read a complex number\n2.Display the complex number\n3.Sum of two complex numbers\n4.Product of two complex numbers.\n\t0.Exit\n>");
        scanf("%d",&opt);
        switch(opt)
        {
            case 1: n=read_com();
                break;
            case 2:
                disp_com(n);
                break;
            case 3:
                printf("First number");
                n1=read_com();
                printf("Second number");
                n2=read_com();
                res=add_com(n1,n2);
                disp_com(res);
                break;
            case 4:
                printf("First number");
                n1=read_com();                
                printf("Second number");
                n2=read_com();
                res=mult_com(n1,n2);
                disp_com(res);
                break;
            default :i=1;   

        }
        
    }
    return 0;
}