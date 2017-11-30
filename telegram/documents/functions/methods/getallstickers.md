# Messages.getAllStickers

## Function:

TelegramCore::messagesGetAllStickers

## Schema:

```c++
messages.getAllStickers#aa3bc868 hash:string = messages.AllStickers;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|hash|QString||
|callBack|Callback&lt;[MessagesAllStickers](../../types/messagesallstickers.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesAllStickers](../../types/messagesallstickers.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getAllStickersAnswer(qint64 msgId, const MessagesAllStickers & result)
```
```c++
getAllStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetAllStickersAnswer(qint64 msgId, const MessagesAllStickers & result)
```
```c++
onGetAllStickersError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_ALL_STICKERS_CALLBACK

## Examples:

```c++
tg->getAllStickers(hash, [=](TG_GET_ALL_STICKERS_CALLBACK){
    ...
}, 30000);
```
