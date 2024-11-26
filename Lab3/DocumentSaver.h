#pragma once
#include <string>

class DocumentSaver {
public:
    static DocumentSaver& getInstance() {
        static DocumentSaver instance;
        return instance;
    }

    void saveDocument(const std::string& document) {
        lastSavedDocument = document;
    }

    std::string getLastSavedDocument() const {
        return lastSavedDocument;
    }

private:
    DocumentSaver() = default;
    ~DocumentSaver() = default;

    DocumentSaver(const DocumentSaver&) = delete;
    DocumentSaver& operator=(const DocumentSaver&) = delete;

    std::string lastSavedDocument;
};
