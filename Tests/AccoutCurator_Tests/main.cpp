

#include "gtest/gtest.h"
//#include "../../PROJECT CODE/UIDesign2/accountcurator.h"



// The fixture for testing class Foo.
class FooTest : public ::testing::Test {
    protected:
    // You can remove any or all of the following functions if its body
    // is empty.

    FooTest() {
    // You can do set-up work for each test here.
    }

    virtual ~FooTest() {
    // You can do clean-up work that doesn't throw exceptions here.
    }

    // If the constructor and destructor are not enough for setting up
    // and cleaning up each test, you can define the following methods:

    virtual void SetUp() {
    // Code here will be called immediately after the constructor (right
    // before each test).
    }

    virtual void TearDown() {
    // Code here will be called immediately after each test (right
    // before the destructor).
    }

    // Objects declared here can be used by all tests in the test case for Foo.

    /** replace with your own **/



};

/*
TEST(getUName, TESTSIMPLE){
    accountCurator *ac = new accountCurator();
    ac->setUName("name");
    ASSERT_EQ("name", ac->getUName());
}

*/

TEST_F(FooTest, TESTFIXTURE) {

    /** replace with your own **/
}

int main(int argc, char **argv) {

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
