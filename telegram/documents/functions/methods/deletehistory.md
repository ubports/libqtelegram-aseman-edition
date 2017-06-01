# Messages.deleteHistory

## Function:

TelegramCore::messagesDeleteHistory

## Schema:

```c++
messages.deleteHistory#f4f8fb61 peer:InputPeer offset:int = messages.AffectedHistory;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|offset|qint32||
|callBack|Callback&lt;[MessagesAffectedHistory](../../types/messagesaffectedhistory.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[MessagesAffectedHistory](../../types/messagesaffectedhistory.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
deleteHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)
```
```c++
deleteHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onDeleteHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)
```
```c++
onDeleteHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_DELETE_HISTORY_CALLBACK

## Examples:

```c++
tg->deleteHistory(peer, offset, [=](TG_DELETE_HISTORY_CALLBACK){
    ...
}, 30000);
```
