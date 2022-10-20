#pragma XOD require "https://github.com/adafruit/Adafruit_BusIO"
#pragma XOD require "https://github.com/adafruit/Adafruit_AS7341"

#include <Wire.h>
#include <Adafruit_AS7341.h>

node {
    meta {
        // Define our custom type as a pointer on the class instance.
        using Type = Adafruit_AS7341*;
    }

    // Create an object of the class AS7341
    Adafruit_AS7341 sensor = Adafruit_AS7341();

    void evaluate(Context ctx) {
        // It should be evaluated only once on the first (setup) transaction
        if (!isSettingUp())
            return;

        emitValue<output_DEV>(ctx, &sensor);
    }
}
