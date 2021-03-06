

#include "gtest/gtest.h"


#include "../UIDesign2/item.h"
#include <QApplication>




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

//TESTS

TEST(getName, TESTSIMPLE){
    Item *i = new Item("name", "description", "artist", "owner", "museum", "collection", "file");
    ASSERT_EQ(i->getName(), "name");
}

TEST(getOwner, TESTSIMPLE){
    Item *i = new Item("name", "description", "artist", "owner", "museum", "collection", "file");
    ASSERT_EQ(i->getOwner(), "owner");
}

TEST(getArtist, TESTSIMPLE){
    Item *i = new Item("name", "description", "artist", "owner", "museum", "collection", "file");
    ASSERT_EQ(i->getArtist(), "artist");
}

TEST(getMuseum, TESTSIMPLE){
    Item *i = new Item("name", "description", "artist", "owner", "museum", "collection", "file");
    ASSERT_EQ(i->getMuseum(), "museum");
}

TEST(getFileName, TESTSIMPLE){
    Item *i = new Item("name", "description", "artist", "owner", "museum", "collection", "file");
    ASSERT_EQ(i->getFilename(), "file");
}

TEST(getCollection, TESTSIMPLE){
    Item *i = new Item("name", "description", "artist", "owner", "museum", "collection", "file");
    ASSERT_EQ(i->getCollection(), "collection");
}

TEST(getDescription, TESTSIMPLE){
    Item *i = new Item("name", "description", "artist", "owner", "museum", "collection", "file");
    ASSERT_EQ(i->getDescription(), "description");
}



TEST_F(FooTest, TESTFIXTURE) {

    /** replace with your own **/
}

int main(int argc, char **argv) {

    QApplication a(argc, argv);

    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
