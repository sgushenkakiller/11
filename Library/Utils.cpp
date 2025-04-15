// Utils.cpp
#include "Utils.h"
#include <iostream>
#include <unordered_map>
#include <algorithm>

/**
 * @brief Отображает услуги для заданного тарифа.
 * @param tariff - Тариф, услуги которого нужно показать.
 */
void showServices(const Tariff& tariff) {
    std::cout << "Services for tariff: " << tariff.getName() << std::endl;
    for (const auto& service : tariff.getServices()) {
        std::cout << service->getName() << " - " << service->getCostPerUnit() << " per unit" << std::endl;
    }
}

/**
 * @brief Отображает список всех тарифов и их услуг.
 * @param tariffs - Вектор тарифов для отображения.
 */
void showTariffs(const std::vector<Tariff>& tariffs) {
    std::cout << "Tariffs and their services:" << std::endl;
    for (const auto& tariff : tariffs) {
        std::cout << "Tariff: " << tariff.getName() << std::endl;
        for (const auto& service : tariff.getServices()) {
            std::cout << "  - " << service->getName() << " (" << service->getCostPerUnit() << " per unit)" << std::endl;
        }
    }
}

/**
 * @brief Отображает список абонентов.
 * @param subscribers - Список абонентов для отображения.
 */
void showSubscribers(const std::vector<Subscriber>& subscribers) {
    std::cout << "Subscribers list:" << std::endl;
    for (const auto& subscriber : subscribers) {
        std::cout << subscriber.getName() << " is subscribed to " << subscriber.getTariff().getName() << " tariff" << std::endl;
    }
}

/**
 * @brief Отображает самые популярные тарифы.
 * @param subscribers - Список абонентов для анализа популярности тарифов.
 */
void showMostPopularTariffs(const std::vector<Subscriber>& subscribers) {
    std::unordered_map<std::string, size_t> tariff_count;
    for (const auto& subscriber : subscribers) {
        tariff_count[subscriber.getTariff().getName()]++;
    }
    std::cout << "Most popular tariffs:" << std::endl;
    for (const auto& entry : tariff_count) {
        std::cout << entry.first << ": " << entry.second << " subscribers" << std::endl;
    }
}

/**
 * @brief Отображает распределение тарифов среди абонентов.
 * @param subscribers - Список абонентов для анализа распределения тарифов.
 */
void showTariffDistribution(const std::vector<Subscriber>& subscribers) {
    std::unordered_map<std::string, size_t> tariff_count;
    for (const auto& subscriber : subscribers) {
        tariff_count[subscriber.getTariff().getName()]++;
    }
    size_t total = subscribers.size();
    std::cout << "Tariff distribution among subscribers:" << std::endl;
    for (const auto& entry : tariff_count) {
        double percentage = (static_cast<double>(entry.second) / total) * 100;
        std::cout << entry.first << ": " << percentage << "%" << std::endl;
    }
}
