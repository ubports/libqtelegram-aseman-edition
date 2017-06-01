# Messages.installStickerSet

## Function:

TelegramCore::messagesInstallStickerSet

## Schema:

```c++
messages.installStickerSet#efbbfae9 stickerset:InputStickerSet = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|stickerset|[InputStickerSet](../../types/inputstickerset.md)||
|callBack|Callback&lt;bool&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|bool|
|error|TelegramCore::CallbackError|

## Signals:

```c++
installStickerSetAnswer(qint64 msgId, bool  result)
```
```c++
installStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onInstallStickerSetAnswer(qint64 msgId, bool  result)
```
```c++
onInstallStickerSetError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_INSTALL_STICKER_SET_CALLBACK

## Examples:

```c++
tg->installStickerSet(stickerset, [=](TG_INSTALL_STICKER_SET_CALLBACK){
    ...
}, 30000);
```
