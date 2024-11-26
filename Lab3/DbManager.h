#pragma once
#include <string>

class DbManager {
public:
    static DbManager& getInstance() {
        static DbManager instance;
        return instance;
    }

    void connect(const std::string& dbName) {
        database = dbName;
    }

    std::string getDatabaseName() const {
        return database;
    }

private:
    DbManager() = default;
    ~DbManager() = default;

    DbManager(const DbManager&) = delete;
    DbManager& operator=(const DbManager&) = delete;

    std::string database;
};
