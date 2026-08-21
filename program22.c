// Q22: Write a program to find profit or loss percentage given cost price and selling price.

// /*
// Sample Test Cases:
// Input 1:
// 1000 1200
// Output 1:
// Profit 20%

// Input 2:
// 1000 800
// Output 2:
// Loss 20%

// Input 3:
// 1000 1000
// Output 3:
// No Profit No Loss

// */
#include <stdio.h>
int main(){
    float cost_price, selling_price, profit, loss, profit_per, loss_per;
    printf("Enter the value of cost price and selling price:: ");
    scanf("%f" "%f", &cost_price, &selling_price);
    profit = selling_price - cost_price;
    loss = cost_price - selling_price;
    profit_per = (profit/cost_price) * 100;
    loss_per = (loss/cost_price) * 100;
    if (selling_price > cost_price){
        printf("Profit: %.2f%%", profit_per);
    } else if (selling_price < cost_price){
        printf("Loss: %.2f%%", loss_per);
    } else {
        printf("No profit or loss");
    }
    return 0;
}