// Tariff.cpp
#include "Tariff.h"

/**
 * @brief Конструктор класса Tariff.
 * @param name - Название тарифа.
 */
Tariff::Tariff(const std::string& name) : name(name) {}

/**
 * @brief Добавляет услугу в тариф.
 * @param service - Услуга для добавления.
 */
void Tariff::addService(const std::shared_ptr<Service>& service) {
    services.push_back(service);
}

/**
 * @brief Возвращает название тарифа.
 * @return Название тарифа.
 */
const std::string& Tariff::getName() const {
    return name;
}

/**
 * @brief Возвращает список услуг тарифа.
 * @return Вектор услуг.
 */
const std::vector<std::shared_ptr<Service>>& Tariff::getServices() const {
    return services;
}