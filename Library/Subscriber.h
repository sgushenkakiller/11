// Subscriber.h
#ifndef SUBSCRIBER_H
#define SUBSCRIBER_H

#include <string>
#include "Tariff.h"

/**
 * @brief Класс, представляющий абонента с тарифом.
 */
class Subscriber {
public:
    /**
     * @brief Конструктор класса Subscriber.
     * @param name - Имя абонента.
     * @param tariff - Тариф абонента.
     */
    Subscriber(const std::string& name, const Tariff& tariff);

    /**
     * @brief Возвращает имя абонента.
     * @return Имя абонента.
     */
    const std::string& getName() const;

    /**
     * @brief Возвращает тариф абонента.
     * @return Тариф абонента.
     */
    const Tariff& getTariff() const;

private:
    std::string name; ///< Имя абонента.
    Tariff tariff; ///< Тариф абонента.
};

#endif // SUBSCRIBER_H