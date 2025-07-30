#include <stdio.h>
#include <unistd.h>  // for usleep

int main() {
    int led_state = 0;  // 0 = OFF, 1 = ON
    char input;

    printf("LED Blinker Simulation Started\n");
    printf("Press '1' to simulate button press, '0' to reset LED OFF, 'q' to quit\n");

    while (1) {
        printf("Input: ");
        scanf(" %c", &input);

        if (input == '1') {
            // Debounce simulation
            usleep(200000);  // 200ms delay
            led_state = !led_state;  // Toggle state
            printf("LED is now: %s\n", led_state ? "ON" : "OFF");
        }
        else if (input == '0') {
            led_state = 0;
            printf("LED is now: OFF\n");
        }
        else if (input == 'q') {
            printf("Exiting simulation.\n");
            break;
        }
        else {
            printf("Invalid input. Use '1' to press, '0' to reset, 'q' to quit.\n");
        }
    }

    return 0;
}
