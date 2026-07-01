#include "EconomicEvent.h"

// --- Getter

std::string EconomicEvent::get_id() const {
    return id;
}

std::string EconomicEvent::get_card_id() const {
    return card_id;
}

std::string EconomicEvent::get_name() const {
    return name;
}

ImpactOfEvent EconomicEvent::get_impact() const {
    return impact;
}

float EconomicEvent::get_threshold() const {
    return thread;
}

float EconomicEvent::get_consensus() const {
    return consensus;
}

float EconomicEvent::get_actual() const {
    return actual;
}

// --- Setter

void EconomicEvent::set_id(std::string id) {
    this->id = id;
}

void EconomicEvent::set_card_id(std::string card_id) {
    this->card_id = card_id;
}

void EconomicEvent::set_name(std::string name) {
    this->name = name;
}

void EconomicEvent::set_impact(ImpactOfEvent impact) {
    this->impact = impact;
}

void EconomicEvent::set_threshold(float thread) {
    this->thread = thread;
}

void EconomicEvent::set_consensus(float consensus) {
    this->consensus = consensus;
}

void EconomicEvent::set_actual(float actual) {
    this->actual = actual;
}
