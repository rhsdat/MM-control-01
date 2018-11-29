//mmctl.h - multimaterial switcher control
#ifndef _MMCTL_H
#define _MMCTL_H

#include <inttypes.h>
#include "config.h"

extern bool isPrinting;
extern int toolChanges;
extern int active_extruder;
extern int previous_extruder;
extern bool isFilamentLoaded;

void switch_extruder_withSensor(int new_extruder);
void select_extruder(int new_extruder);
bool feed_filament();
void load_filament_withSensor();
void load_filament_inPrinter();
void unload_filament_withSensor();
void eject_filament(int extruder);
void recover_after_eject();

#endif //_MMCTL_H
