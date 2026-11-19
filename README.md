# NeteaseLyric: download lyrics from [Netease Cloud Music](http://music.163.com/)

> **Fork** of [taseikyo/NeteaseLyric](https://github.com/taseikyo/NeteaseLyric),
> updated to build with **Qt 6**.

## Preview
![Preview.gif](https://i.loli.net/2017/10/15/59e3343733180.gif)

## Compatibility
- The original project targets Qt 5.8.
- This fork builds with **Qt 6** (tested with Qt 6.12.0, MinGW 64-bit, Qt Creator).
- The Qt 5 Compatibility module (Core5Compat) is required when building with Qt 6.

## Installing

### Option 1: Prebuilt binary (Windows 64-bit)
1. Download the latest `.zip` from the [Releases](../../releases) page.
2. Extract it anywhere.
3. Run `NeteaseLrc.exe`. No Qt installation needed.
4. If Windows SmartScreen appears, click **More info → Run anyway**
   (the executable is not code-signed).

### Option 2: Build from source
1. Clone the repo.
2. Install Qt 6 with the **Qt 5 Compatibility module (Core5Compat)**.
3. Open `NeteaseLrc.pro` with [Qt Creator](https://www.qt.io/product/development-tools).
4. Select a Qt 6 kit and compile.

Prebuilt binaries of the original (Qt 5) version are available in the
[original repo's releases](https://github.com/taseikyo/NeteaseLyric/releases).

## Usage

Copy the song's URL or ID from [Netease Cloud Music](http://music.163.com/),
then paste it into the input field. Click `get` or press `enter` to obtain the lyrics.

You can hide the timeline or the translation with the checkboxes,
and save the lyrics as a `.lrc` file with `Ctrl+S`.

## Disclaimer
This software is for learning and communication purposes only. It must not be used
for any commercial purpose; the user bears all consequences of its use.

## License
[MIT](LICENSE). Original work by LewisTian (taseikyo).

## Third-party software
This application uses [Qt 6.12.0](https://www.qt.io/) under the
[LGPL v3](https://www.gnu.org/licenses/lgpl-3.0.html). Qt is dynamically linked;
the Qt libraries are included as DLL files and can be replaced.
Qt source code: https://download.qt.io/official_releases/qt/6.12/
License texts are included in the `licenses/` folder of the release package.