// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#ifndef TELEGRAMCUSTOMTYPEOBJECT_H
#define TELEGRAMCUSTOMTYPEOBJECT_H

#include "libqtelegram_global.h"

class LIBQTELEGRAMSHARED_EXPORT TelegramCustomTypeObject
{
public:
    struct Null { };
    static const Null null;

    TelegramCustomTypeObject();
    TelegramCustomTypeObject(const Null&);
    ~TelegramCustomTypeObject();

    bool isNull() const { return mNull; }
    bool operator==(bool stt) { return mNull != stt; }
    bool operator!=(bool stt) { return !operator ==(stt); }

protected:
    void setNull(bool stt) { mNull = stt; }

private:
    bool mNull;
};

#endif // TELEGRAMCUSTOMTYPEOBJECT_H
