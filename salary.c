#include <stdio.h>
void main(){
float  gross_salary,allowance,deduction net_salary;
printf("Enter the gross salary\n");
scanf("%f ",&gross _salary);
if(gross _salary>10000) {
    allowance=gross _salary*0.1;
    deduction=gross _salasry*0.3;
}
else{
          allowance=gross _salary*0.07;
    deduction=gross _salasry*0.02;
}
net_salary=gross_salary+allowance-deduction;
printf("Net salary=%f",net _salary);


}




