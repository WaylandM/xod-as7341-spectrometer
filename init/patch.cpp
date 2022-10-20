#pragma XOD evaluate_on_pin disable
#pragma XOD evaluate_on_pin enable input_INIT

node {

    void evaluate(Context ctx) {
        // The node responds only if there is an input pulsei
        if (!isInputDirty<input_INIT>(ctx))
            return;
        
        // Get a pointer to the `Adafruit_AS7341` class instance
        auto sensor = getValue<input_DEV>(ctx);

        auto wire = getValue<input_I2C>(ctx);

        // Attempt to initialize AS7341 module; if attempt fails emit error
        if (!sensor->begin(AS7341_I2CADDR_DEFAULT, wire, 0)) {
            raiseError(ctx);
            return;
        }

        emitValue<output_OK>(ctx, 1);


    }
}
