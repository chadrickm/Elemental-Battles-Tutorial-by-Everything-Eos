#include <cardgame.hpp>
#include "gameplay.cpp"

ACTION cardgame::login(name user) {
  require_auth(user);
  
  // look through the users table to find the users
  auto user_iterator = _users.find(user.value);
  
  // if the user doesn't exist
  if (user_iterator == _users.end()) {
  
    // create a new record in the users table
    user_iterator = _users.emplace(user, [&](auto& new_user) {
      new_user.username = user;
    });
  }
}