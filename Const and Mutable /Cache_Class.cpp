#include <iostream>
#include <string>

class Cache
{
private:
    std::string data;
    mutable int cacheHits = 0;

public:
    Cache(std::string d)
    {
        data = d;
    }

    std::string getData() const
    {
        cacheHits++;
        return data;
    }

    int getCacheHits() const
    {
        return cacheHits;
    }
};

int main()
{
    Cache cache("Cached Data");

    std::cout << cache.getData() << '\n';
    std::cout << cache.getData() << '\n';
    std::cout << cache.getData() << '\n';

    std::cout << "Cache Hits = " << cache.getCacheHits();
}