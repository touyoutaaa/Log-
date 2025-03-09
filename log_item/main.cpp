#include "Logger.h"

int main() {
    Logger logger("log.txt");
    logger.log(LogLevel::INFO,"Starting Application...");
    int user_id = 43;
    std::string action = "login";
    double duration = 3.5;
    std::string world = "world";
    logger.log(LogLevel::INFO,"User {} performed {} in {} seconds",user_id,action,duration);
    return 0;
}