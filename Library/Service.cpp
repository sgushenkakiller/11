// Service.cpp
#include "Service.h"

/**
 * @brief Конструктор класса Service.
 * @param name - Название услуги.
 * @param cost_per_unit - Стоимость за единицу услуги.
 */
Service::Service(const std::string& name, double cost_per_unit)
    : name(name), cost_per_unit(cost_per_unit) {}

/**
 * @brief Возвращает название услуги.
 * @return Название услуги.
 */
const std::string& Service::getName() const {
    return name;
}

/**
 * @brief Возвращает стоимость за единицу услуги.
 * @return Стоимость за единицу.
 */
double Service::getCostPerUnit() const {
    return cost_per_unit;
}
