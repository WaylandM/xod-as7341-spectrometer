#pragma XOD evaluate_on_pin disable
#pragma XOD evaluate_on_pin enable input_UPD

node {
   void evaluate(Context ctx) {
       // The node responds only if there is an input pulse
       if (!isInputDirty<input_UPD>(ctx))
           return;

       auto sensor = getValue<input_DEV>(ctx);
       auto gain = getValue<input_GAIN>(ctx);


       if (gain<1) {
           if (!sensor->setGain(AS7341_GAIN_0_5X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==1) {
           if (!sensor->setGain(AS7341_GAIN_1X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==2) {
           if (!sensor->setGain(AS7341_GAIN_2X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==4) {
           if (!sensor->setGain(AS7341_GAIN_4X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==8) {
           if (!sensor->setGain(AS7341_GAIN_8X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==16) {
           if (!sensor->setGain(AS7341_GAIN_16X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==32) {
           if (!sensor->setGain(AS7341_GAIN_32X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==64) {
           if (!sensor->setGain(AS7341_GAIN_64X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==128) {
           if (!sensor->setGain(AS7341_GAIN_128X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==256) {
           if (!sensor->setGain(AS7341_GAIN_256X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

       if (gain==512) {
           if (!sensor->setGain(AS7341_GAIN_512X)) {
               raiseError(ctx);
               return;
           }
           emitValue<output_DONE>(ctx, 1);
       }

    }
}
