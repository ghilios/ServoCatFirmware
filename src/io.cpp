#include <io.h>
#include <pinout.h>

createSafeStringReader(DebugReader, 20, " ,\r\n");
createBufferedOutput(DebugOutput, 180, DROP_UNTIL_EMPTY);

void setupIo() {
  DEBUG_SERIAL.begin(9600);
  DebugOutput.connect(DEBUG_SERIAL);
  DebugReader.connect(DebugOutput);
  DebugReader.echoOn();
  SafeString::setOutput(DebugOutput);
}