/**
 * Copyright (c) 2020 Raspberry Pi (Trading) Ltd.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#include <pico/stdlib.h>

const uint LED_PIN = PICO_DEFAULT_LED_PIN;

const int SLEEP_TIME = 100;

int main()
{
    gpio_init(LED_PIN);
    gpio_set_dir(LED_PIN, GPIO_OUT);

    bool led_state = 0;

    gpio_put(LED_PIN, led_state);

    while(true)
    {
        gpio_put(LED_PIN, led_state);
        led_state = !led_state;
        sleep_ms(SLEEP_TIME);
    }
}
