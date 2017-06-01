# Geochats.checkin

## Function:

TelegramCore::geochatsCheckin

## Schema:

```c++
geochats.checkin#55b3e8fb peer:InputGeoChat = geochats.StatedMessage;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputGeoChat](../../types/inputgeochat.md)||
|callBack|Callback&lt;[GeochatsStatedMessage](../../types/geochatsstatedmessage.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[GeochatsStatedMessage](../../types/geochatsstatedmessage.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
checkinAnswer(qint64 msgId, const GeochatsStatedMessage & result)
```
```c++
checkinError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCheckinAnswer(qint64 msgId, const GeochatsStatedMessage & result)
```
```c++
onCheckinError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CHECKIN_CALLBACK

## Examples:

```c++
tg->checkin(peer, [=](TG_CHECKIN_CALLBACK){
    ...
}, 30000);
```
