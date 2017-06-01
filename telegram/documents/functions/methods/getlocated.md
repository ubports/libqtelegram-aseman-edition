# Geochats.getLocated

## Function:

TelegramCore::geochatsGetLocated

## Schema:

```c++
geochats.getLocated#7f192d8f geo_point:InputGeoPoint radius:int limit:int = geochats.Located;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|geoPoint|[InputGeoPoint](../../types/inputgeopoint.md)||
|radius|qint32||
|limit|qint32||
|callBack|Callback&lt;[GeochatsLocated](../../types/geochatslocated.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[GeochatsLocated](../../types/geochatslocated.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
getLocatedAnswer(qint64 msgId, const GeochatsLocated & result)
```
```c++
getLocatedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onGetLocatedAnswer(qint64 msgId, const GeochatsLocated & result)
```
```c++
onGetLocatedError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_GET_LOCATED_CALLBACK

## Examples:

```c++
tg->getLocated(geo_point, radius, limit, [=](TG_GET_LOCATED_CALLBACK){
    ...
}, 30000);
```
