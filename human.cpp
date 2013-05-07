#include "human.h"

Human::Human(QString name , QString family , int age) {
    this->name = name ;
    this->family = family ;
    this->age = age ;
}
Human::~Human() {}

int Human::getAge(){
    return this->age;
}
QString Human::getFamily(){
    return this->family;
}
QString Human::getName(){
    return this->name;
}

void Human::setAge(int age ) {
    this->age = age ;
}
void Human::setFamily(QString family){
    this->family = family ;
}
void Human::setName(QString name ) {
    this->name = name ;
}
