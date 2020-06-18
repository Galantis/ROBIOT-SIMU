#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <list>
#include <Windows.h>
#include <vector>
#include <time.h>
#include <string>
#include "pch.h"

#include "CBatterie.h"
#include "CCompas.h"
#include "CCapteur.h"
#include "CComande.h"
#include "CMesure.h"
#include "CMoteur.h"

TEST(TestCaseName, TestName) {
	CMesure mesure;

	mesure.f_DoMesure();

	cout << mesure.i_GetDataMesure() << endl;

	EXPECT_EQ(1, 1);
	EXPECT_TRUE(true);
}