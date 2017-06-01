# Geochats.createGeoChat

## Function:

TelegramCore::geochatsCreateGeoChat

## Schema:

```c++
geochats.createGeoChat#e092e16 title:string geo_point:InputGeoPoint address:string venue:string = geochats.StatedMessage;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|title|QString||
|geoPoint|[InputGeoPoint](../../types/inputgeopoint.md)||
|address|QString||
|venue|QString||
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
createGeoChatAnswer(qint64 msgId, const GeochatsStatedMessage & result)
```
```c++
createGeoChatError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onCreateGeoChatAnswer(qint64 msgId, const GeochatsStatedMessage & result)
```
```c++
onCreateGeoChatError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_CREATE_GEO_CHAT_CALLBACK

## Examples:

```c++
tg->createGeoChat(title, geo_point, address, venue, [=](TG_CREATE_GEO_CHAT_CALLBACK){
    ...
}, 30000);
```
