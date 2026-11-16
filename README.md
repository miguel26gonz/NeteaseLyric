# NeteaseLyric: download lyrics from [Netease Cloud Music](http://music.163.com/)

> **Fork** of [taseikyo/NeteaseLyric](https://github.com/taseikyo/NeteaseLyric),
> updated to build with **Qt 6**.

中文介绍查看[知乎](https://www.zhihu.com/question/27638171/answer/217582659)

## Preview
![Preview.gif](https://i.loli.net/2017/10/15/59e3343733180.gif)

## Compatibility
- The original project targets Qt 5.8.
- This fork builds with **Qt 6** (tested with Qt 6.12.0, MinGW 64-bit, Qt Creator).
- The Qt 5 Compatibility module (Core5Compat) is required when building with Qt 6.

## Installing
1. Clone the repo.
2. Open `NeteaseLrc.pro` with [Qt Creator](https://www.qt.io/product/development-tools).
3. Select a Qt 6 kit and compile.

Prebuilt binaries of the original (Qt 5) version are available in the
[original repo's releases](https://github.com/taseikyo/NeteaseLyric/releases).

## Usage
Copy the song's URL or ID from [Netease Cloud Music](http://music.163.com/),
then paste it into the input field. Click `get` or press `enter` to obtain the lyrics.

You can hide the timeline or the translation with the checkboxes,
and save the lyrics as a `.lrc` file with `Ctrl+S`.

(screenshots...)

## Disclaimer
注：本软件仅作学习交流,不得进行任何商业用途,否则产生的一切后果将由使用者本人承担！

*Note: This software is for learning and communication purposes only. It must not be used
for any commercial purpose; the user bears all consequences of its use.*

## License
[MIT](LICENSE). Original work by LewisTian (taseikyo).
