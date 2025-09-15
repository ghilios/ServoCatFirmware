#ifndef IO_H
#define IO_H

#include <SafeString.h>
#include <SafeStringReader.h>
#include <BufferedOutput.h>

extern SafeStringReader DebugReader;
extern BufferedOutput DebugOutput;

void setupIo();

#endif