# CrossMultiplicationMaker 十字相乘题目生成

## 程序名称

`CrossMultiplication.exe`

## 使用方法

### 测试

在命令行中运行`CrossMultiplication.exe`，十字相乘题目的结果将会输出，例如：

`{3x^2+23x+14=(1x+7)(3x+2)}`

### 批量生成

将下面的内容写入一个批处理

```batch
CrossMultiplication.exe >output.txt
%0
```

然后运行这个批处理，几秒后关闭。十字相乘题目的结果将会批量输出在同目录下的`output.txt`中。
