#ifndef INIT_SM8350_H
#define INIT_SM8350_H

#include <string.h>

enum device_variant {
    VARIANT_G990B = 0,
};

typedef struct {
    std::string model;
    std::string codename;
} variant;

static const variant europe_models_r9q = {
    .model = "SM-G990B",
    .codename = "r9q"
};

static const variant *all_variants[VARIANT_MAX] = {
    &europe_models_r9q
};

#endif // INIT_SM7325_H
