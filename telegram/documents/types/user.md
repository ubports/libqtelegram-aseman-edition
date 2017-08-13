# User

## Types

* [typeUserEmpty](#usertypeuserempty)
* [typeUser](#usertypeuser)

## User::typeUserEmpty

#### Schema:

```c++
userEmpty#200250ba id:int = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## User::typeUser

#### Schema:

```c++
user#22e49072 flags:# id:int access_hash:flags.0?long first_name:flags.1?string last_name:flags.2?string username:flags.3?string phone:flags.4?string photo:flags.5?UserProfilePhoto status:flags.6?UserStatus bot_info_version:flags.14?int = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|accessHash|qint64|
|firstName|QString|
|lastName|QString|
|username|QString|
|phone|QString|
|photo|[UserProfilePhoto](userprofilephoto.md)|
|status|[UserStatus](userstatus.md)|
|botInfoVersion|qint32|

