#include "sticker.h"

// .hファイルに宣言したものは、cppファイルで定義してあげなくてはいけない
Sticker::Sticker()
{

}

Sticker::Sticker(std::string &name, std::string &image)
{
    this->name = name;
    this->image = image;
}

Sticker *Sticker::createClone(){
    Sticker *sticker = new Sticker();
    sticker->name = this->name;
    sticker->image = this->image;
    sticker->addons = this->addons;

    return sticker;
}

void Sticker::setAddons(const std::string &addons){
    this->addons = addons;
}

std::string Sticker::getImage(){
    return this->image;
}

std::string Sticker::getAddons(){
    return this->addons;
}

