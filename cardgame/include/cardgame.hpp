//the official tutorial's #include <eosiolib/eosio.hpp>
//will be deprecated in the next version of EOSIO.CDT.
//If you're using an old version of the CDT, you might
//need to modify the below line to eosiolib/eosio.hpp
#include <eosio/eosio.hpp>

using namespace std;
using namespace eosio;

CONTRACT cardgame : public contract {

  public:

    cardgame( name receiver, name code, datastream<const char*> ds ):
      contract(receiver, code, ds),
      _users(receiver, receiver.value)
      {}
      
      ACTION login(name user);
      
  private:
  
    TABLE user_info {
      name      username;
      uint64_t  win_count   = 0;
      uint64_t  loss_count  = 0;
      //string    game_data;
      
      auto primary_key() const {
        return username.value;
      }
    };
    
    typedef multi_index
      <name("users"), user_info> users_table;
      
    users_table _users;

};

EOSIO_DISPATCH(cardgame, (login))