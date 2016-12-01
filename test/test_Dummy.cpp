#include <boost/test/unit_test.hpp>
#include <icp/Dummy.hpp>

using namespace icp;

BOOST_AUTO_TEST_CASE(it_should_not_crash_when_welcome_is_called)
{
    icp::DummyClass dummy;
    dummy.welcome();
}
