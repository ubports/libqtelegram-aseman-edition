# User

## Types

* [typeUserEmpty](#usertypeuserempty)
* [typeUserSelf](#usertypeuserself)
* [typeUserContact](#usertypeusercontact)
* [typeUserRequest](#usertypeuserrequest)
* [typeUserForeign](#usertypeuserforeign)
* [typeUserDeleted](#usertypeuserdeleted)

## User::typeUserEmpty

#### Schema:

```c++
userEmpty#200250ba id:int = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|

## User::typeUserSelf

#### Schema:

```c++
userSelf#1c60e608 id:int first_name:string last_name:string username:string phone:string photo:UserProfilePhoto status:UserStatus = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|firstName|QString|
|lastName|QString|
|username|QString|
|phone|QString|
|photo|[UserProfilePhoto](userprofilephoto.md)|
|status|[UserStatus](userstatus.md)|

## User::typeUserContact

#### Schema:

```c++
userContact#cab35e18 id:int first_name:string last_name:string username:string access_hash:long phone:string photo:UserProfilePhoto status:UserStatus = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|firstName|QString|
|lastName|QString|
|username|QString|
|accessHash|qint64|
|phone|QString|
|photo|[UserProfilePhoto](userprofilephoto.md)|
|status|[UserStatus](userstatus.md)|

## User::typeUserRequest

#### Schema:

```c++
userRequest#d9ccc4ef id:int first_name:string last_name:string username:string access_hash:long phone:string photo:UserProfilePhoto status:UserStatus = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|firstName|QString|
|lastName|QString|
|username|QString|
|accessHash|qint64|
|phone|QString|
|photo|[UserProfilePhoto](userprofilephoto.md)|
|status|[UserStatus](userstatus.md)|

## User::typeUserForeign

#### Schema:

```c++
userForeign#75cf7a8 id:int first_name:string last_name:string username:string access_hash:long photo:UserProfilePhoto status:UserStatus = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|firstName|QString|
|lastName|QString|
|username|QString|
|accessHash|qint64|
|photo|[UserProfilePhoto](userprofilephoto.md)|
|status|[UserStatus](userstatus.md)|

## User::typeUserDeleted

#### Schema:

```c++
userDeleted#d6016d7a id:int first_name:string last_name:string username:string = User;
```

#### Parameters:

|Name|Type|
|----|----|
|id|qint32|
|firstName|QString|
|lastName|QString|
|username|QString|

