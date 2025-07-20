#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string conv_names[] = {
    
        "USD/RUB", "USD/KZT", "USD/UZS", "EUR/USD", "USD/UAH",
        "EUR/RUB", "RUB/KZT", "USD/CNY", "USD/BYN", "RUB/UZS"
    };

    float conv_rates[] = {
    
        78.4f, 518.5f, 12468.0f, 1.1637f, 41.7f,
        91.0f, 6.6f, 7.17f, 2.60f, 159.0f
    };

    int selected_conv_num;
    float input_value;
    float converted_value;

    cout << "List:\n\n";
    for (int i = 0; i < 10; ++i) {
        
        cout << i << ": " << conv_names[i] << "\n\n";
    }

    cout << "Choose your option (0-9): ";
    cin >> selected_conv_num;

    cout << "Write the value to convert: ";
    cin >> input_value;

    if (selected_conv_num >= 0 && selected_conv_num < 10) {
        
        converted_value = input_value * conv_rates[selected_conv_num];

        cout.precision(2);
        cout << fixed;

        string from = conv_names[selected_conv_num].substr(0, 3);
        string to   = conv_names[selected_conv_num].substr(4, 3);

        cout << input_value << from << " = " << converted_value << to << endl;
    } else {
        
        cout << "Error: Invalid option." << endl;
    }

    return 0;
}
