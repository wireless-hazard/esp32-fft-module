#include "fft.h"

constexpr int window_size = 2048;
float input[window_size]{0};
float output[window_size]{0};

int main(){

	fft_config_t *fft_calc = fft_init(window_size, FFT_REAL, FFT_FORWARD, input, output);

	//FFT
    fft_execute(fft_calc);

    fft_destroy(fft_calc);

}