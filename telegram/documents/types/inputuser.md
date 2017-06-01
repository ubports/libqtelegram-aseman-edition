# InputUser

## Types

* [typeInputUserEmpty](#inputusertypeinputuserempty)
* [typeInputUserSelf](#inputusertypeinputuserself)
* [typeInputUserContact](#inputusertypeinputusercontact)
* [typeInputUserForeign](#inputusertypeinputuserforeign)

## InputUser::typeInputUserEmpty

#### Schema:

```c++
inputUserEmpty#b98886cf = InputUser;
```

#### Parameters:


## InputUser::typeInputUserSelf

#### Schema:

```c++
inputUserSelf#f7c1b13f = InputUser;
```

#### Parameters:


## InputUser::typeInputUserContact

#### Schema:

```c++
inputUserContact#86e94f65 user_id:int = InputUser;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|

## InputUser::typeInputUserForeign

#### Schema:

```c++
inputUserForeign#655e74ff user_id:int access_hash:long = InputUser;
```

#### Parameters:

|Name|Type|
|----|----|
|userId|qint32|
|accessHash|qint64|

