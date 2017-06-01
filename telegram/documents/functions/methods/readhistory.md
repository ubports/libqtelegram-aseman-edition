# Messages.readHistory

## Function:

TelegramCore::messagesReadHistory

## Schema:

```c++
messages.readHistory#b04f2510 peer:InputPeer max_id:int offset:int = messages.AffectedHistory;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|maxId|qint32||
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
readHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)
```
```c++
readHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onReadHistoryAnswer(qint64 msgId, const MessagesAffectedHistory & result)
```
```c++
onReadHistoryError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_READ_HISTORY_CALLBACK

## Examples:

```c++
tg->readHistory(peer, max_id, offset, [=](TG_READ_HISTORY_CALLBACK){
    ...
}, 30000);
```
