#include "ForexCard.h"

// --- Constructor


// --- Methods

ForexCard::ForexCard(std::string id) {
    this->id = id;
}


// --- Getter
std::string ForexCard::get_id() const {
    return id;
}

float ForexCard::get_yield_curve() const {
    return yield_curve;
}

COTValue ForexCard::get_cot() const {
    return cot;
}

int ForexCard::get_strength() const {
    return strength;
}

float ForexCard::get_initial_bias() const {
    return initial_bias;
}


float ForexCard::get_final_bias() const {
    return final_bias;
}

// --- Setter

void ForexCard::set_yield_curve(float yield_curve) {
    this->yield_curve = yield_curve;
}

void ForexCard::set_cot(COTValue cot) {
    this->cot = cot;
}

void ForexCard::set_strength(int strength) {
    this->strength = strength;
}

void ForexCard::set_initial_bias(float initial_bias) {
    this->initial_bias = initial_bias;
}

void ForexCard::set_final_bias(float final_bias) {
    this->final_bias = final_bias;
}

