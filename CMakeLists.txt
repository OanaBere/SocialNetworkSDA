cmake_minimum_required(VERSION 3.21)
project(PROIECT_SDA)

set(CMAKE_CXX_STANDARD 14)

add_executable(PROIECT_SDA main.cpp Domain/List.h Tests/Tests.cpp Tests/Tests.h Domain/User.cpp Domain/User.h Domain/NodeArbore.h Domain/Arbore.h Domain/Mesaj.cpp Domain/Mesaj.h Repository/RepoUser.cpp Repository/RepoUser.h Repository/RepoMesaj.cpp Repository/RepoMesaj.h Service/ServiceUser.cpp Service/ServiceUser.h Service/ServiceMesaj.cpp Service/ServiceMesaj.h UI/UI.cpp UI/UI.h Domain/Friendship.cpp Domain/Friendship.h Domain/Eveniment.cpp Domain/Eveniment.h Repository/RepoFriendship.cpp Repository/RepoFriendship.h Service/ServiceFriendship.cpp Service/ServiceFriendship.h Repository/RepoEveniment.cpp Repository/RepoEveniment.h Service/ServiceEveniment.cpp Service/ServiceEveniment.h Service/ServiceUser.cpp)
