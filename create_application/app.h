
#pragma once

#include "lib/appEnv.hpp"
#include <memory>

#include "common.h"

//app_env�N���X
class app{

public:

	app();

	static std::shared_ptr<AppEnv> app_env;

};