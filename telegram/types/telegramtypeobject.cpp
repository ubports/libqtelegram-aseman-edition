// This file generated by libqtelegram-code-generator.
// You can download it from: https://github.com/Aseman-Land/libqtelegram-code-generator
// DO NOT EDIT THIS FILE BY HAND -- YOUR CHANGES WILL BE OVERWRITTEN

#include "telegramtypeobject.h"

const TelegramTypeObject::Null TelegramTypeObject::null = TelegramTypeObject::Null();
qint64 TelegramTypeObject::mConstructedCount = 0;

TelegramTypeObject::TelegramTypeObject() :
    mError(false),
    mNull(false)
{
    mConstructedCount++;
}

TelegramTypeObject::TelegramTypeObject(const Null&) :
    mError(false),
    mNull(true)
{
}

TelegramTypeObject::~TelegramTypeObject()
{
    mConstructedCount--;
}

