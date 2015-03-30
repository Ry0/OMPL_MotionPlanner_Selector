#Geometric plannersをいろいろ試してみる
##動作環境

* Ubuntu 14.04
* OMPL
* Gnuplot

##コンパイル

```bash
git clone git@github.com:Ry0/OMPL_MotionPlanner_Selector.git
cd OMPL_MotionPlanner_Selector
mkdir build
cd build
cmake ..
make
./MotionPlanner
```

##選べるプランナーは現段階で9種類！

下のサイトで自由に追加可能  

[http://ompl.kavrakilab.org/planners.html](http://ompl.kavrakilab.org/planners.html)