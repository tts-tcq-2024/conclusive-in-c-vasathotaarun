#pragma once

#include "breach_detection.h"

typedef enum {
    PASSIVE_COOLING,
    HI_ACTIVE_COOLING,
    MED_ACTIVE_COOLING
} CoolingType;

BreachType classifyTemperatureBreach(CoolingType coolingType, double temperatureInC);
