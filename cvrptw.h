#pragma once
#include <vector>
#include <string>
#include <cmath>

struct Customer
{
    int id;
    double x;
    double y;
    int demand;
    int readyTime;
    int dueTime;
    int serviceTime;
};

struct Vehicle
{
    int capacity;
    int load = 0;
    int currentTime = 0;
    std::vector<int> route; // store customer IDs
};

class CVRPTW
{
public:
    CVRPTW(int vehicleCapacity);

    void addCustomer(const Customer& c);
    double distance(int id1, int id2) const;

private:
    int vehicleCapacity;
    std::vector<Customer> customers;
};
