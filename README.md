# ORCycleLabel 

###文字轮播
* 支持cocoapods  
>pod 'ORCycleLabel'


* 支持自定义轮播间隔距离, 轮播速率   
> CGFloat interval; //间隔 默认 70  
 CGFloat rate;//速率 0~1 默认 0.5

 
* 样式支持
> ORTextCycleStyleDefault, //只有文字长度大于label长度 滚动   默认样式
    ORTextCycleStyleAlways, //无论文字长短，一直滚动  
 
* 代码使用  
> ORCycleLabel *label = [[ORCycleLabel alloc] initWithFrame:CGRectMake(100, 100, 200, 40)];
    label.text = @"滚动文字";
    label.style = ORTextCycleStyleAlways;
    [self.view addSubview:label];     
    
* 支持xib 拖拽  
![](https://github.com/SunriseOYR/ORCycleLabel/blob/master/showImg/xib.png?raw=true)  
