// 字符串到整数的映射

// 记录下每个字符串对应的整数，当下一次出现了一个已经出现的字符串时，
//  查询整数是否出现过，就可以知道字符串是否重复出现。
// 判断两个字符串是否一致，直接用它们的hash值判断即可。
//  若hash值一致，则认为字符串一致；
//  若hash值不一致，则认为是不同的字符串。

// 判断多个字符串里有多少个不同的字符串
// 朴素算法：两两字符串相比较，时间复杂度O(n^2)
// 把每个字符串hash成一个整数，然后把所有整数进行一个去重操作，即可得到答案。
