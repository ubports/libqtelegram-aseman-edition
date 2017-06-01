# Messages.forwardMessages

## Function:

TelegramCore::messagesForwardMessages

## Schema:

```c++
messages.forwardMessages#55e1728d peer:InputPeer id:Vector<int> random_id:Vector<long> = Updates;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|peer|[InputPeer](../../types/inputpeer.md)||
|id|QList&lt;qint32&gt;||
|randomId|QList&lt;qint64&gt;||
|callBack|Callback&lt;[UpdatesType](../../types/updatestype.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[UpdatesType](../../types/updatestype.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
forwardMessagesAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
forwardMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onForwardMessagesAnswer(qint64 msgId, const UpdatesType & result)
```
```c++
onForwardMessagesError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_FORWARD_MESSAGES_CALLBACK

## Examples:

```c++
tg->forwardMessages(peer, id, random_id, [=](TG_FORWARD_MESSAGES_CALLBACK){
    ...
}, 30000);
```
