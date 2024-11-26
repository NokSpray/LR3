#include <iostream>
#include "DbManager.h"
#include "DocumentSaver.h"
#include "Logger.h"

int main() {
    // Робота з DbManager
    DbManager& db = DbManager::getInstance();
    db.connect("MainDatabase");
    std::cout << "Connected to database: " << db.getDatabaseName() << std::endl;

    // Робота з DocumentSaver
    DocumentSaver& saver = DocumentSaver::getInstance();
    saver.saveDocument("ProjectReport.docx");
    std::cout << "Saved document: " << saver.getLastSavedDocument() << std::endl;

    // Логування
    Logger& logger = Logger::getInstance();
    logger.log("Database connected: " + db.getDatabaseName());
    logger.log("Document saved: " + saver.getLastSavedDocument());

    return 0;
}
