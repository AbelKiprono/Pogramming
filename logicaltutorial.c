#include <stdio.h>
#include <stdbool.h>
int main(){
//logical operators = &&(AND) checks if condition are true
float temp = 25
;
//bool sunny = true;
//if(temp >= 0 && temp	 <= 30 && sunny){
   // printf("The weather is good!");
//}
//else {
     printf("The weather is bad!");
//}
// logical operators = || (OR) checks if at least one condition is true
if(temp <= 0 || temp>= 30 ){
    printf("\nThe weather is bad!");
}


    else {
        printf("\nThe weather is good!");
    }
//logical operators = ! (NOT) reverses the state of condition
bool sunny = false;
if(!sunny){//also 1 can work as true/ or could say sunny
    printf("\nI's cloudy outside!");
}
else{
    printf("\nIt's sunny outside");
}
    return 0;
}