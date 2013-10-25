#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkLayerProtocol.h"
#include "applicationLayer.h"

#define DEFAULT_FILENAME "./pinguim.gif"
#define FILENAME_LEN 1024

int main(int argc, char** argv);

int fileExists(char * filename);

#endif