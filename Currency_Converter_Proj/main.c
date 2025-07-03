#include <stdio.h>

int main() {
    char conv_names[][50] = {
        "USD/RUB", "USD/KZT", "USD/UZS", "EUR/USD", "USD/UAH",
        "EUR/RUB", "RUB/KZT", "USD/CNY", "USD/BYN", "RUB/UZS",
    };

    float conv_rates[] = {
        78.4, 518.5, 12468, 1.1637, 41.7, 
        91, 6.6, 7.17, 2.60, 159
    };

    int selected_conv_num;
    float input_value;
    float converted_value;

    printf("List:\n \n0: USD/RUB\n \n1: USD/KZT\n \n2: USD/UZS\n \n3: EUR/USD\n \n4: USD/UAH\n \n5: EUR/RUB\n \n6: RUB/KZT\n \n7: USD/CNY\n \n8: USD/BYN\n \n9: RUB/UZS\n ");

    printf("\nChoose your option (0-9): ");
    scanf("%d", &selected_conv_num);

    printf("Write the value to convert: ");
    scanf("%f", &input_value);

    switch(selected_conv_num) {
        case 0:
            converted_value = input_value * conv_rates[0];
        break;

        case 1:
            converted_value = input_value * conv_rates[1];
        break;

        case 2:
            converted_value = input_value * conv_rates[2];
        break;

        case 3:
            converted_value = input_value * conv_rates[3];
        break;

        case 4:
            converted_value = input_value * conv_rates[4];
        break;

        case 5:
            converted_value = input_value * conv_rates[5];
        break;

        case 6:
            converted_value = input_value * conv_rates[6];
        break;

        case 7:
            converted_value = input_value * conv_rates[7];
        break;

        case 8:
            converted_value = input_value * conv_rates[8];
        break;

        case 9:
            converted_value = input_value * conv_rates[9];
        break;

        default:
            converted_value = -1.0;
            printf("Error");
        break;
    }

    if (selected_conv_num == 0) {
        printf("%.2fUSD = %.2fRUB", input_value, converted_value);

    } else if (selected_conv_num == 1) {
        printf("%.2fUSD = %.2fKZT", input_value, converted_value);

    } else if (selected_conv_num == 2) {
        printf("%.2fUSD = %.2fUZS", input_value, converted_value);
        
    } else if (selected_conv_num == 3) {
        printf("%.2fEUR = %.2fUSD", input_value, converted_value);
        
    } else if (selected_conv_num == 4) {
        printf("%.2fUSD = %.2fUAH", input_value, converted_value);
        
    } else if (selected_conv_num == 5) {
        printf("%.2fEUR = %.2fRUB", input_value, converted_value);
        
    } else if (selected_conv_num == 6) {
        printf("%.2fRUB = %.2fKZT", input_value, converted_value);
        
    } else if (selected_conv_num == 7) {
        printf("%.2fUSD = %.2fCNY", input_value, converted_value);
        
    } else if (selected_conv_num == 8) {
        printf("%.2fUSD = %.2fBYN", input_value, converted_value);
        
    } else if (selected_conv_num == 9) {
        printf("%.2fRUB = %.2fUZS", input_value, converted_value);
        
    } else {
        printf("Error");
    }

    return 0;
}
