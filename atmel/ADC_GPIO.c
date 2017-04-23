#include "ADC_GPIO.h"

void configure_adc_4(void)
{
	struct adc_config config_adc;

	// Vertical

	adc_get_config_defaults(&config_adc);

	//ADC_INPUT_CH_GPIO_MS2 magic number
	config_adc.input_channel = 1;

	adc_init(&config_adc);

	adc_enable();
}

void configure_adc_3(void)
{
	struct adc_config config_adc;

	// Horizontal

	adc_get_config_defaults(&config_adc);

	//ADC_INPUT_CH_GPIO_MS1 magic number
	config_adc.input_channel = 0;

	adc_init(&config_adc);

	adc_enable();
}

void configure_gpio_pins(void)
{
	struct gpio_config config_gpio_pin;

	gpio_get_config_defaults(&config_gpio_pin);

	// Button assignments from left to right
	config_gpio_pin.direction = GPIO_PIN_DIR_INPUT;
	config_gpio_pin.input_pull = GPIO_PIN_PULL_UP;
	gpio_pin_set_config(BUTTON1, &config_gpio_pin);

	config_gpio_pin.direction = GPIO_PIN_DIR_INPUT;
	config_gpio_pin.input_pull = GPIO_PIN_PULL_UP;
	gpio_pin_set_config(BUTTON2, &config_gpio_pin);

	config_gpio_pin.direction = GPIO_PIN_DIR_INPUT;
	config_gpio_pin.input_pull = GPIO_PIN_PULL_UP;
	gpio_pin_set_config(BUTTON3, &config_gpio_pin);

	config_gpio_pin.direction = GPIO_PIN_DIR_INPUT;
	config_gpio_pin.input_pull = GPIO_PIN_PULL_UP;
	gpio_pin_set_config(BUTTON4, &config_gpio_pin);

	config_gpio_pin.direction = GPIO_PIN_DIR_INPUT;
	config_gpio_pin.input_pull = GPIO_PIN_PULL_UP;
	gpio_pin_set_config(BUTTON5, &config_gpio_pin);

	// LEDs

	// Red
	config_gpio_pin.direction = GPIO_PIN_DIR_OUTPUT;
	gpio_pin_set_config(RED_GPIO, &config_gpio_pin);

	// Green
	config_gpio_pin.direction = GPIO_PIN_DIR_OUTPUT;
	gpio_pin_set_config(GREEN_GPIO, &config_gpio_pin);

	// Blue
	config_gpio_pin.direction = GPIO_PIN_DIR_OUTPUT;
	gpio_pin_set_config(BLUE_GPIO, &config_gpio_pin);

}