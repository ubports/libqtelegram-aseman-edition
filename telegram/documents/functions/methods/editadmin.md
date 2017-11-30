# Channels.editAdmin

## Function:

TelegramCore::channelsEditAdmin

## Schema:

```c++
channels.editAdmin#52b16962 channel:InputChannel user_id:InputUser role:ChannelParticipantRole = Bool;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|channel|[InputChannel](../../types/inputchannel.md)||
|userId|[InputUser](../../types/inputuser.md)||
|role|[ChannelParticipantRole](../../types/channelparticipantrole.md)||
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
editAdminAnswer(qint64 msgId, bool  result)
```
```c++
editAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onEditAdminAnswer(qint64 msgId, bool  result)
```
```c++
onEditAdminError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_EDIT_ADMIN_CALLBACK

## Examples:

```c++
tg->editAdmin(channel, user_id, role, [=](TG_EDIT_ADMIN_CALLBACK){
    ...
}, 30000);
```
