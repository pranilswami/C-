#include<iostream>
using namespace std;
class Animals
{
    string sound;
    public:
    virtual string Sound()
    {
        return sound;
    }
    void set_sound(string sound)
    {
        this->sound = sound;
    }
};
class Dogs : public Animals
{
    string dog_sound;
    public:
    string Sound()
    {
        return dog_sound;
    }
    void set_dog_sound(string dog_sound)
    {
        this->dog_sound = dog_sound;
    }
};
int main()
{
    Animals cat;
    Dogs pet;

    cat.set_sound("Meyou");
    string sound  = cat.Sound();
    cout<<"Cat sound : "<<sound<<endl;

    pet.set_dog_sound("Boow");
    cout<<"Dog sound : "<<pet.Sound();
    return 0;

}