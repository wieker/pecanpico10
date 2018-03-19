#ifndef __COMMANDS_H__
#define __COMMANDS_H__

#include "ch.h"
#include "hal.h"

void usb_cmd_debugOnUSB(BaseSequentialStream *chp, int argc, char *argv[]);
void usb_cmd_printConfig(BaseSequentialStream *chp, int argc, char *argv[]);
void usb_cmd_printPicture(BaseSequentialStream *chp, int argc, char *argv[]);
void usb_cmd_readLog(BaseSequentialStream *chp, int argc, char *argv[]);
void usb_cmd_command2Camera(BaseSequentialStream *chp, int argc, char *argv[]);
void usb_cmd_send_aprs_message(BaseSequentialStream *chp, int argc, char *argv[]);

extern const ShellCommand commands[];

#endif
