#include "cvrptw.h"
#include <cmath>

CVRPTW::CVRPTW(int vehicleCapacity)
    : vehicleCapacity(vehicleCapacity)
{
}

void CVRPTW::addCustomer(const Customer& c)
{
    customers.push_back(c);
}

double CVRPTW::distance(int id1, int id2) const
{
    const auto& a = customers[id1];
    const auto& b = customers[id2];

    double dx = a.x - b.x;
    double dy = a.y - b.y;
    return std::sqrt(dx * dx + dy * dy);
}
