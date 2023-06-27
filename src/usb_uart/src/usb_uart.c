#include <stdio.h>
#include <pico/stdlib.h>

const uint LED_PIN   = PICO_DEFAULT_LED_PIN;
const int SLEEP_TIME = 1000;

int main()
{
    // Initialize IO
    stdio_init_all();

    // Initialize LED
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);
    bool led_state = 0;
    gpio_put(LED_PIN, led_state);

    while(true)
    {
        gpio_put(LED_PIN, led_state);

        if(led_state)
            printf("Led on\n");
        else
            printf("Led off\n");

        led_state = !led_state;
        sleep_ms(SLEEP_TIME);
    }

    return 0;
}