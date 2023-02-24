#ifndef STICKER_H
#define STICKER_H

#include <string>

class Sticker
{
public:
    Sticker();
    Sticker(std::string &name, std::string &image);
    Sticker* createClone();
    void setAddons(const std::string &addons);
    std::string getImage();
    std::string getAddons();

private:
    std::string name;
    std::string image;
    std::string addons;
};

#endif // STICKER_H
