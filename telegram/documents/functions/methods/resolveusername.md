# Contacts.resolveUsername

## Function:

TelegramCore::contactsResolveUsername

## Schema:

```c++
contacts.resolveUsername#bf0131c username:string = User;
```
## Parameters:

|Name|Type|Default|
|----|----|-------|
|username|QString||
|callBack|Callback&lt;[User](../../types/user.md)&gt;|0|
|timeout|qint32|TelegramCore::timeOut()|

## Callback Result:

|Name|Type|
|----|----|
|msgId|qint64|
|result|[User](../../types/user.md)|
|error|TelegramCore::CallbackError|

## Signals:

```c++
resolveUsernameAnswer(qint64 msgId, const User & result)
```
```c++
resolveUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onResolveUsernameAnswer(qint64 msgId, const User & result)
```
```c++
onResolveUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_RESOLVE_USERNAME_CALLBACK

## Examples:

```c++
tg->resolveUsername(username, [=](TG_RESOLVE_USERNAME_CALLBACK){
    ...
}, 30000);
```
