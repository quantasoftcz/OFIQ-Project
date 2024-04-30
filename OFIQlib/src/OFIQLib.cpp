#include "ofiq_lib.h"

using namespace OFIQ;

OFIQ_EXPORT static std::shared_ptr<Interface> releaseInstance(){
    std::unique_lock<std::mutex> lck(Interface::instanceMtx);
    Interface::instance.reset();
    return  Interface::instance;
}