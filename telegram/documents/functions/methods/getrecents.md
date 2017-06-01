# Geochats.getRecents

## Function:

TelegramCore::geochatsGetRecents

## Schema:

```c++
geochats.getRecents#e1427e6f offset:int limit:int = geochats.Messages;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|offset|qint32||
|limit|qint32||
|callBack|Callback&lt;[GeochatsMessages](../../types/geochatsmessages.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[GeochatsMessages](../../types/geochatsmessages.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getRecentsAnswer(qint64 msgId, const GeochatsMessages & result)
```
```c++
getRecentsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetRecentsAnswer(qint64 msgId, const GeochatsMessages & result)
```
```c++
onGetRecentsError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_RECENTS_CALLBACK

## Examples:

```c++
tg->getRecents(offset, limit, [=](TG_GET_RECENTS_CALLBACK){
    ...
}, 30000);
```
