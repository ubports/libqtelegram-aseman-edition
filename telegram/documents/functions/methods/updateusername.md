# Account.updateUsername

## Function:

TelegramCore::accountUpdateUsername

## Schema:

```c++
account.updateUsername#3e0bdd7c username:string = User;
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
updateUsernameAnswer(qint64 msgId, const User & result)
```
```c++
updateUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Events:

```c++
onUpdateUsernameAnswer(qint64 msgId, const User & result)
```
```c++
onUpdateUsernameError(qint64 msgId, qint32 errorCode, const QString &errorText)
```

## Macros:

* TG_UPDATE_USERNAME_CALLBACK

## Examples:

```c++
tg->updateUsername(username, [=](TG_UPDATE_USERNAME_CALLBACK){
    ...
}, 30000);
```
