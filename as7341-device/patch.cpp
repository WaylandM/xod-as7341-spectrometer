#pragma XOD require "https://github.com/adafruit/Adafruit_BusIO"
#pragma XOD require "https://github.com/adafruit/Adafruit_AS7341"


node {
    // Internal state variables defined at this level persists across evaluations
    Number foo;
    uint8_t bar = 5;

    void evaluate(Context ctx) {
        bar += 42;

        if (isSettingUp()) {
            // This run once
            foo = (Number)(bar + 1);
        }

        auto inValue = getValue<input_IN>(ctx);
        emitValue<output_OUT>(ctx, inValue);
    }
}
