#ifndef _PageView_Test_h_
#define _PageView_Test_h_

#include <iostream>
#include "CrossApp.h"

USING_NS_CC;

class PageViewTest :public CAViewController, CAPageViewDelegate
{
public:
	PageViewTest();
	virtual ~PageViewTest();

public:
	void segBtnCallBack(CAControl* btn,CCPoint point);

protected:
	void viewDidLoad(); 
	void viewDidUnload();

	virtual void reshapeViewRectDidFinish();

	virtual void pageViewDidBeginTurning(CAPageView* pageView);
	virtual void pageViewDidEndTurning(CAPageView* pageView);
	virtual void pageViewDidSelectPageAtIndex(CAPageView* pageView, unsigned int index, const CCPoint& point);

private:
	CADipSize size;
	CAVector<CAView*> _view;
	CAPageView* pageViewTest;
	CAPageControl* pageControl;
	CCPoint currentPoint;
	CCPoint terminalPoint;
	bool fullScreen;

};

#endif