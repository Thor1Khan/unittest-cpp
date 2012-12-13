#ifndef UNITTESTCPP_H
#define UNITTESTCPP_H

//lint -esym(1509,*Fixture)
#ifdef BUIDING_OR_TESTING_UNITEST_LIB
#include "Config.h"
#include "Test.h"
#include "TestList.h"
#include "TestSuite.h"
#include "TestResults.h"

#include "TestMacros.h"

#include "CheckMacros.h"
#include "TestRunner.h"
#include "TimeConstraint.h"
#else
#include <unittest-cpp/Config.h>
#include <unittest-cpp/Test.h>
#include <unittest-cpp/TestList.h>
#include <unittest-cpp/TestSuite.h>
#include <unittest-cpp/TestResults.h>

#include <unittest-cpp/TestMacros.h>

#include <unittest-cpp/CheckMacros.h>
#include <unittest-cpp/TestRunner.h>
#include <unittest-cpp/TimeConstraint.h>
#endif
#endif
