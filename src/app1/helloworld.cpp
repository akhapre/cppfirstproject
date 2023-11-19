#include <iostream>
#include "Account.h"
#include "deep.h"
#include "Player.h"
#include "Mystring.h"
#include "TestThreads.h"
#include "fmt/format.h"

#include <memory>
using namespace std;

void test_account(); 
void test_deep();
void learn_const_method();
void test_static_member();
void test_verrator_overloading();
void test_TestAccount();
void test_TestThreads();

int main(int argc, char const *argv[])
{
    //std::cout << "Hello world\n";
	std::cout << fmt::format("Hello CMake.3$ %s", "Ashish") << std::endl;

    //test_account();
    //test_deep();
    //learn_const_method();
    //test_static_member();
    //test_verrator_overloading();
    //test_TestAccount();
    test_TestThreads();
    return 0;
}

void test_account() {
    Account account;
    Account account1 {300};
    Account account2 {400, "Ashish2"};
    std::cout << "setting balance to 200. previus balance is " << account.get_balance() << endl;
    account.set_balance(200);
    account.set_name("Frank");
    double bal = account.get_balance();
    std::cout << "balance : " << bal << endl;
    Account *account3 = new Account();
    delete account3;
}

void dislay_deep(Deep d) {
    cout << "Data : " << d.get_data() << endl;
}
void test_deep() {
    Deep d1 {10};
    dislay_deep(d1);
}

void display_player_name(const Player &p) {
    std::cout << p.get_name() << std::endl;
}

void learn_const_method() {
    const Player player {"Villain", 100, 55};
    Player hero2 {"Hero", 20, 2};
    std::cout << hero2.get_name() << std::endl;
    display_player_name(player);
    display_player_name(hero2);

}

void test_static_member() {
    Player p1 {"Ashish", 10,2};
    std::cout << Player::get_num_players() << std::endl;
    Player p2 {"Ashish2", 10,2};
    std::cout << Player::get_num_players() << std::endl;
    Player p3 {"Ashish3", 10,2};
    std::cout << Player::get_num_players() << std::endl;

}

void test_verrator_overloading() {
    std::cout << "Testing test_verrator_overloading" << std::endl;
    Mystring empty;
    Mystring larry{"Larry"};
    Mystring stooge{larry};

    empty.display();
    larry.display();
    stooge.display();
}

void test_TestAccount() {
    //TestAccount t1 {1000};
    //TestAccount * t2 = new TestAccount{1000};
    //delete t2;
    //std::unique_ptr<TestAccount> upt3 {new TestAccount{1000}};
    //std::unique_ptr<TestAccount> upt4 = std::make_unique<TestAccount> (1000);
    //std::unique_ptr<TestAccount> upt5;
    //upt5 = std::move(upt4);
    //std::unique_ptr<Account> upt6 {new Account {100, "Ashish"}};
    //std::cout << *upt6 << std::endl;

    std::shared_ptr<Account> sp1 {new Account{100, "Ashish"}};
    std::cout << *sp1;
    sp1->set_balance(200);
    std::cout << *sp1;
    std::cout << "sp1 count " << sp1.use_count() << std::endl;
    std::shared_ptr<Account> sp2 {sp1};
    std::cout << "sp1 count " << sp1.use_count() << std::endl;
    std::cout << "sp2 count " << sp2.use_count() << std::endl;
    sp1.reset();
    std::cout << "sp1 count " << sp1.use_count() << std::endl;
    std::cout << "sp2 count " << sp2.use_count() << std::endl;
    sp2.reset();
    std::cout << "sp1 count " << sp1.use_count() << std::endl;
    std::cout << "sp2 count " << sp2.use_count() << std::endl;
}

void test_TestThreads() {
    TestThreads test_threads;
    test_threads.test_testThreads();
}
