#include<stdio.h>

int main(){

    char name[15];
    int basic,ot,final;

    printf("Enter Employe Name : ");
    scanf("%s",name);
    printf("Enter Basic Salary : ");
    scanf("%d",&basic);
    printf("Enter Number of OT Hours : ");
    scanf("%d",&ot);

    int rph = 0;
    if (ot>=50)
    {
        rph=100;
    }
    else
    {
        rph=125;
    }

    final = basic + (ot * rph);
    printf("Final Salary : %d",final);

    return 0;
    
}