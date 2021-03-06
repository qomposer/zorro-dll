
ZORRO_VARIABLE(var, Slider1, g->vSlider[1])
ZORRO_VARIABLE(var, Slider2, g->vSlider[2])
ZORRO_VARIABLE(var, Slider3, g->vSlider[3])

ZORRO_VARIABLE  (int    , PlotScale  , g->nPlotScale)
ZORRO_VARIABLE  (int    , PlotWidth  , g->nPlotWidth)
ZORRO_VARIABLE  (int    , PlotHeight1, g->nPlotHeight1)
ZORRO_VARIABLE  (int    , PlotHeight2, g->nPlotHeight2)
ZORRO_VARIABLE  (int    , PlotDate   , g->nPlotDate)
ZORRO_VARIABLE  (int    , PlotBars   , g->nPlotBars)
ZORRO_VARIABLE  (int    , PlotPeriod , g->nPlotPeriod)
ZORRO_VARIABLE  (EColor , ColorDn    , g->dwColorDn)
ZORRO_VARIABLE  (EColor , ColorUp    , g->dwColorUp)
ZORRO_VARIABLE  (EColor , ColorCandle, g->dwColorCandle)
ZORRO_VARIABLE  (EColor , ColorEquity, g->dwColorEquity)
ZORRO_VARIABLE  (EColor , ColorDD    , g->dwColorDD)
ZORRO_VARIABLE  (EColor , ColorWin   , g->dwColorWin)
ZORRO_VARIABLE  (EColor , ColorLoss  , g->dwColorLoss)
ZORRO_VARPOINTER(EColor*, ColorBars  , g->dwColorBars)
ZORRO_VARPOINTER(EColor*, ColorPanel , g->dwColorPanel)

ZORRO_VARIABLE(var, PIP         , g->asset->vPIP)
ZORRO_VARIABLE(var, PIPCost     , g->asset->vPIPCost)
ZORRO_VARIABLE(var, MarginCost  , g->asset->vMarginCost)
ZORRO_VARIABLE(var, Leverage    , g->asset->vLeverage)
ZORRO_VARIABLE(var, LotAmount   , g->asset->vLotAmount)
ZORRO_VARIABLE(var, Spread      , g->asset->vSpread)
ZORRO_VARIABLE(var, RollLong    , g->asset->vRollLong)
ZORRO_VARIABLE(var, RollShort   , g->asset->vRollShort)
ZORRO_VARIABLE(var, WinPayout   , g->asset->vWinPayout)
ZORRO_VARIABLE(var, LossPayout  , g->asset->vLossPayout)
ZORRO_VARIABLE(var, Slippage    , g->vSlippage)
ZORRO_VARIABLE(var, Commission  , g->asset->vCommission)
ZORRO_VARIABLE(var, InitialPrice, g->asset->vInitialPrice)
ZORRO_VARIABLE(var, AskPrice    , g->asset->vPrice)
ZORRO_VARIABLE(var, TimeAsk     , g->asset->tAsk)
ZORRO_VARIABLE(var, TimeBid     , g->asset->tBid)
ZORRO_VARIABLE(var, HedgeRatio  , g->asset->vFactor)
ZORRO_VARIABLE(EHedgeMode    , Hedge   , g->nHedge)
ZORRO_VARIABLE(ETrainFlag    , Optimize, g->nOptimize)
ZORRO_VARIABLE(EOrderFillMode, Fill    , g->nFill)
ZORRO_VARIABLE(DATE          , Now     , g->tNow)

ZORRO_VARPOINTER(ETrainFlag* , TrainMode, &g->nOptimize)
ZORRO_VARPOINTER(ETradeFlag* , TradeMode, &g->nTradeMode)
ZORRO_VARIABLE  (EPlotMode   , PlotMode ,  g->nPlotMode)
ZORRO_VARPOINTER(EPlotMode*  , ChartMode, &g->nPlotMode)

ZORRO_VARIABLE(var, Lots        , g->vLots)
ZORRO_VARIABLE(var, Margin      , g->vMargin)
ZORRO_VARIABLE(var, Risk        , g->vRisk)
ZORRO_VARIABLE(var, Entry       , g->vEntry)
ZORRO_VARIABLE(var, Stop        , g->vStop)
ZORRO_VARIABLE(var, StopFactor  , g->vStopFactor)
ZORRO_VARIABLE(var, SpreadFactor, g->vSpreadFactor)
ZORRO_VARIABLE(var, OrderLimit  , g->vOrderLimit)
ZORRO_VARIABLE(var, Trail       , g->vTrail)
ZORRO_VARIABLE(var, TrailSlope  , g->vTrailSlope)
ZORRO_VARIABLE(var, TrailStep   , g->vTrailStep)
ZORRO_VARIABLE(var, TrailLock   , g->vTrailLock)
ZORRO_VARIABLE(var, TrailSpeed  , g->vTrailSpeed)
ZORRO_VARIABLE(var, TakeProfit  , g->vTakeProfit)
ZORRO_VARIABLE(int, ExitTime    , g->nExitTime)
ZORRO_VARIABLE(int, LifeTime    , g->nLifeTime)
ZORRO_VARIABLE(int, EntryTime   , g->nEntryTime)
ZORRO_VARIABLE(var, EntryDelay  , g->vEntryDelay)
ZORRO_VARIABLE(int, MaxLong     , g->nMaxLong)
ZORRO_VARIABLE(int, MaxShort    , g->nMaxShort)

ZORRO_VARIABLE  (int, LookBack       , g->nLookBack)
ZORRO_VARIABLE  (int, UnstablePeriod , g->nUnstablePeriod)
ZORRO_VARIABLE  (int, DataSkip       , g->nDataSkip)
ZORRO_VARIABLE  (int, DataSplit      , g->nDataSplit)
ZORRO_VARIABLE  (var, DataSlope      , g->vDataSlope)
ZORRO_VARIABLE  (var, BarPeriod      , g->vBarPeriod)
ZORRO_VARIABLE  (int, BarOffset      , g->nBarOffset)
ZORRO_VARIABLE  (ETimeZone, BarZone  , g->nBarZone)
ZORRO_VARIABLE  (int, FrameOffset    , g->nFrameOffset)
ZORRO_VARIABLE  (int, TimeFrame      , g->nTimeFrame)
ZORRO_VARIABLE  (int, NumBarCycles   , g->numSampleCycles)
ZORRO_VARIABLE  (int, NumSampleCycles, g->numSampleCycles)
ZORRO_VARIABLE  (int, NumOptCycles   , g->numOptCycles)
ZORRO_VARIABLE  (int, NumWFOCycles   , g->numWFOCycles)
ZORRO_VARIABLE  (int, NumTotalCycles , g->numTotalCycles)
ZORRO_VARIABLE  (int, NumDays        , g->numDays)
ZORRO_VARIABLE  (int, NumYears       , g->numYears)
ZORRO_VARIABLE  (int, StartDate      , g->nStartDate)
ZORRO_VARIABLE  (int, EndDate        , g->nEndDate)
ZORRO_VARIABLE  (int, StartWeek      , g->nStartWeek)
ZORRO_VARIABLE  (int, EndWeek        , g->nEndWeek)
ZORRO_VARIABLE  (int, StartMarket    , g->nStartMarket)
ZORRO_VARIABLE  (int, EndMarket      , g->nEndMarket)
ZORRO_VARIABLE  (int, UpdateDays     , g->nUpdateDays)
ZORRO_VARIABLE  (int, ReTrainDays    , g->nReTrainDays)
ZORRO_VARIABLE  (int, GapDays        , g->nGapDays)
ZORRO_VARIABLE  (int, MaxBars        , g->nMaxBars)
ZORRO_VARIABLE  (int, NumBars        , g->numBars)
ZORRO_VARIABLE  (int, NumMinutes     , g->numMinutes)
ZORRO_VARIABLE  (int, Bar            , g->nBar)
ZORRO_VARIABLE  (int, StartBar       , g->nFrameStart)
ZORRO_EXPRESSION(int, EndBar         , g->nFrameStart + g->numFrameBars)
ZORRO_VARIABLE  (int, Day            , g->nDay)
ZORRO_VARIABLE  (int, SampleCycle    , g->nSampleCycle)
ZORRO_VARIABLE  (int, OptCycle       , g->nOptCycle)
ZORRO_VARIABLE  (int, WFOCycle       , g->nWFOCycle)
ZORRO_EXPRESSION(int, WFOBar         , g->nBar - g->nWFOStart)
ZORRO_VARIABLE  (int, WFOPeriod      , g->nWFOPeriod)
ZORRO_VARIABLE  (int, TotalCycle     , g->nTotalCycle)
ZORRO_VARIABLE  (int, TradesPerBar   , g->nTradesPerBar)
ZORRO_VARIABLE  (int, MinutesPerDay  , g->nMinutesPerDay)
ZORRO_VARIABLE  (int, TimeStep       , g->nTimeStep)
ZORRO_VARIABLE  (int, LogNumber      , g->nLogNumber)

ZORRO_VARIABLE  (int  , LoopNum1      , g->nLoop[0])
ZORRO_VARIABLE  (int  , LoopNum2      , g->nLoop[1])
ZORRO_VARPOINTER(void*, Loop1         , g->pLoopPar[0])
ZORRO_VARPOINTER(void*, Loop2         , g->pLoopPar[1])
ZORRO_VARIABLE  (int  , Cycle1        , g->nLoopCycle[0])
ZORRO_VARIABLE  (int  , Cycle2        , g->nLoopCycle[1])
ZORRO_VARIABLE  (int  , NumLoops1     , g->numLoops[0])
ZORRO_VARIABLE  (int  , NumLoops2     , g->numLoops[1])
ZORRO_VARIABLE  (int  , SelectWFO     , g->nSelectWFO)
ZORRO_VARIABLE  (int  , NumParameters , g->numParTrain)
ZORRO_VARIABLE  (int  , ParCycle      , g->nParCycle)
ZORRO_VARIABLE  (int  , StepCycle     , g->nStepCycle)
ZORRO_VARIABLE  (int  , StepNext      , g->bDoStep)
ZORRO_VARIABLE  (EDetrendMode, Detrend, g->nDetrend)
ZORRO_VARIABLE  (EWeekendMode, Weekend, g->nWeekend)
ZORRO_VARIABLE  (var  , FuzzyRange    , g->vFuzzyRange)
ZORRO_VARIABLE  (var  , FuzzyLevel    , g->vFuzzyLevel)
ZORRO_VARIABLE  (int  , MonteCarlo    , g->nMonteCarlo)
ZORRO_VARIABLE  (int  , Confidence    , g->nConfidence)

ZORRO_EXPRESSION(int*      , Command   , g->nCommand)
ZORRO_VARIABLE  (int       , NumCores  , g->numCores)
ZORRO_VARIABLE  (int       , Core      , g->nCore)
ZORRO_VARIABLE  (EVerbosity, Verbose   , g->nVerbose)
ZORRO_VARIABLE  (ESaveMode , SaveMode  , g->nSaveMode)
ZORRO_VARIABLE  (int       , BoxState  , g->nBoxState)
ZORRO_VARIABLE  (int       , TickTime  , g->nTickTime)
ZORRO_VARIABLE  (int       , TockTime  , g->nTockTime)
ZORRO_VARIABLE  (int       , TickSmooth, g->nTickAvg)
ZORRO_VARIABLE  (int       , TickFix   , g->nTimeFix)
ZORRO_VARIABLE  (var       , Outlier   , g->vOutlier)
ZORRO_VARIABLE  (var       , DDScale   , g->vCBIScale)
ZORRO_EXPRESSION(bool      , Train     , is(EStatusFlag::TRAINMODE) != 0)
ZORRO_EXPRESSION(bool      , Test      , is(EStatusFlag::TESTMODE) != 0)
ZORRO_EXPRESSION(bool      , ReTrain   , is(EStatusFlag::PROCESS) != 0 && is(EStatusFlag::TRAINMODE) != 0 && Core != 0)
ZORRO_EXPRESSION(bool      , ReTest    , is(EStatusFlag::PROCESS) != 0 && is(EStatusFlag::TESTMODE) != 0 && Core != 0)

ZORRO_VARIABLE  (var, Capital    , g->vCapital)
ZORRO_VARIABLE  (var, Balance    , g->vBalance)
ZORRO_VARIABLE  (var, Equity     , g->vEquity)
ZORRO_VARIABLE  (var, MarginVal  , g->vMarginVal)
ZORRO_VARIABLE  (var, MarginTotal, g->vMarginSum)
ZORRO_VARIABLE  (var, RiskVal    , g->vRiskSum)
ZORRO_VARIABLE  (var, RiskTotal  , g->vRiskSum)
ZORRO_EXPRESSION(var, TradeVal   , g->vWinVal - g->vLossVal)

ZORRO_VARPOINTER(string*, Assets     , g->pAssets)
ZORRO_VARPOINTER(ASSET* , ThisAsset  , g->asset)
ZORRO_VARPOINTER(char*  , Asset      , g->asset->sName)
ZORRO_VARIABLE  (int    , AssetBar   , g->asset->nBar)
ZORRO_VARIABLE  (int    , AssetFrame , g->asset->nFrame)
ZORRO_VARIABLE  (int    , AssetZone  , g->asset->nZone)
ZORRO_VARIABLE  (int    , AssetMarket, g->asset->nMarket)
ZORRO_VARPOINTER(var*   , AssetVar   , g->asset->Skill)
ZORRO_VARPOINTER(string , AssetStr   , reinterpret_cast<string>(g->asset->Skill))
ZORRO_VARIABLE  (var    , AssetFactor, g->vAssetFactor)
ZORRO_VARIABLE  (int    , LotsPool   , g->asset->nNetSum)
ZORRO_VARIABLE  (int    , LotsPhantom, g->asset->nPhantomSum)
ZORRO_VARPOINTER(char*  , Symbol     , g->asset->sSymbol)
ZORRO_VARIABLE  (int    , Component  , g->statLong->nComponent)
ZORRO_VARIABLE  (int    , Multiplier , g->asset->nMultiplier)

ZORRO_VARIABLE(var, PatternCount, g->vAdvise[0])
ZORRO_VARIABLE(var, PatternRate , g->vAdvise[1])
ZORRO_VARIABLE(var, PatternPF   , g->vAdvise[2])

ZORRO_VARIABLE(string, AssetList  , g->sAssetList)
ZORRO_VARIABLE(string, FactorList , g->sFactorList)
ZORRO_VARIABLE(string, Algo       , g->sAlgo)
ZORRO_VARIABLE(string, Script     , g->sScript)
ZORRO_VARIABLE(string, Factors    , g->sFactors)
ZORRO_VARIABLE(string, Broker     , g->sBroker)
ZORRO_VARIABLE(string, Account    , g->sAccount)
ZORRO_VARIABLE(string, History    , g->sHistory)
ZORRO_VARIABLE(string, WebFolder  , g->sWebFolder)
ZORRO_VARIABLE(string, ZorroFolder, g->sZorroFolder)
ZORRO_VARIABLE(string, Curves     , g->sCurves)

ZORRO_VARIABLE  (var, WinLong           , g->statLong->vWin)
ZORRO_VARIABLE  (var, WinShort          , g->statShort->vWin)
ZORRO_VARIABLE  (var, WinTotal          , g->w.vWin)
ZORRO_VARIABLE  (var, PipsTotal         , g->w.vPips)
ZORRO_VARIABLE  (var, LossLong          , g->statLong->vLoss)
ZORRO_VARIABLE  (var, LossShort         , g->statShort->vLoss)
ZORRO_VARIABLE  (var, LossTotal         , g->w.vLoss)
ZORRO_VARIABLE  (var, WinValLong        , g->statLong->vWinVal)
ZORRO_VARIABLE  (var, WinValShort       , g->statShort->vWinVal)
ZORRO_VARIABLE  (var, WinValTotal       , g->vWinVal)
ZORRO_VARIABLE  (var, LossValLong       , g->statLong->vLossVal)
ZORRO_VARIABLE  (var, LossValShort      , g->statShort->vLossVal)
ZORRO_VARIABLE  (var, LossValTotal      , g->vLossVal)
ZORRO_VARIABLE  (int, NumWinLong        , g->statLong->numWin)
ZORRO_VARIABLE  (int, NumWinShort       , g->statShort->numWin)
ZORRO_VARIABLE  (int, NumWinTotal       , g->w.numWin)
ZORRO_VARIABLE  (int, NumLossLong       , g->statLong->numLoss)
ZORRO_VARIABLE  (int, NumLossShort      , g->statShort->numLoss)
ZORRO_VARIABLE  (int, NumLossTotal      , g->w.numLoss)
ZORRO_VARIABLE  (int, WinStreakLong     , g->statLong->nWinStreak)
ZORRO_VARIABLE  (int, WinStreakShort    , g->statShort->nWinStreak)
ZORRO_VARIABLE  (int, WinStreakTotal    , g->nWinStreak)
ZORRO_VARIABLE  (int, LossStreakLong    , g->statLong->nLossStreak)
ZORRO_VARIABLE  (int, LossStreakShort   , g->statShort->nLossStreak)
ZORRO_VARIABLE  (int, LossStreakTotal   , g->nLossStreak)
ZORRO_VARIABLE  (var, WinStreakValLong  , g->statLong->vWinStreakVal)
ZORRO_VARIABLE  (var, WinStreakValShort , g->statShort->vWinStreakVal)
ZORRO_VARIABLE  (var, WinStreakValTotal , g->vWinStreakVal)
ZORRO_VARIABLE  (var, LossStreakValLong , g->statLong->vLossStreakVal)
ZORRO_VARIABLE  (var, LossStreakValShort, g->statShort->vLossStreakVal)
ZORRO_VARIABLE  (var, LossStreakValTotal, g->vLossStreakVal)
ZORRO_VARIABLE  (int, NumWinningLong    , g->statLong->numWinning)
ZORRO_VARIABLE  (int, NumWinningShort   , g->statShort->numWinning)
ZORRO_VARIABLE  (int, NumLosingLong     , g->statLong->numLosing)
ZORRO_VARIABLE  (int, NumLosingShort    , g->statShort->numLosing)
ZORRO_VARIABLE  (int, NumShortTotal     , g->numShort)
ZORRO_VARIABLE  (int, NumLongTotal      , g->numLong)
ZORRO_EXPRESSION(int, NumOpenLong       , NumWinningLong + NumLosingLong)
ZORRO_EXPRESSION(int, NumOpenShort      , NumWinningShort + NumLosingShort)
ZORRO_EXPRESSION(int, NumOpenTotal      , NumShortTotal + NumLongTotal)
ZORRO_VARIABLE  (int, NumOpenPhantom    , g->numPhantom)
ZORRO_VARIABLE  (int, NumPendingLong    , g->statLong->numPending)
ZORRO_VARIABLE  (int, NumPendingShort   , g->statShort->numPending)
ZORRO_VARIABLE  (int, NumPendingTotal   , g->numPending)
ZORRO_VARIABLE  (int, NumRejected       , g->numRejected)
ZORRO_VARIABLE  (int, NumTrades         , g->numTrades)
ZORRO_VARIABLE  (var, WinMaxLong        , g->statLong->vWinMax)
ZORRO_VARIABLE  (var, WinMaxShort       , g->statShort->vWinMax)
ZORRO_VARIABLE  (var, WinMaxTotal       , g->w.vWinMax)
ZORRO_VARIABLE  (var, LossMaxLong       , g->statLong->vLossMax)
ZORRO_VARIABLE  (var, LossMaxShort      , g->statShort->vLossMax)
ZORRO_VARIABLE  (var, LossMaxTotal      , g->w.vLossMax)
ZORRO_EXPRESSION(var, BalanceLong       , WinLong - LossLong)
ZORRO_EXPRESSION(var, BalanceShort      , WinShort - LossShort)
ZORRO_EXPRESSION(var, EquityLong        , BalanceLong + WinValLong - LossValLong)
ZORRO_EXPRESSION(var, EquityShort       , BalanceShort + WinValShort - LossValShort)
ZORRO_EXPRESSION(var, ProfitClosed      , WinLong - LossLong + WinShort - LossShort)
ZORRO_EXPRESSION(var, ProfitOpen        , WinValLong - LossValLong + WinValShort - LossValShort)
ZORRO_VARIABLE  (var, OptimalFLong      , g->statLong->vOptimalF)
ZORRO_VARIABLE  (var, OptimalFShort     , g->statShort->vOptimalF)
ZORRO_VARIABLE  (var, OptimalF          , g->statShort->vOptimalF2)
ZORRO_VARIABLE  (var, OptimalFRatio     , g->vOptimalFRatio)
ZORRO_VARIABLE  (var, ObjectiveLong     , g->statLong->vTrainPF)
ZORRO_VARIABLE  (var, ObjectiveShort    , g->statShort->vTrainPF)
ZORRO_EXPRESSION(var*, AlgoVar2         , g->statLong->Skill)
ZORRO_EXPRESSION(var*, AlgoVar          , g->statShort->Skill)
ZORRO_EXPRESSION(var*, ResultLong       , g->statLong->Result)
ZORRO_EXPRESSION(var*, ResultShort      , g->statShort->Result)
ZORRO_VARIABLE  (PERFORMANCE, ThisPerformance, g->w)

ZORRO_VARIABLE  (var   , DrawDownMax    , g->w.vDrawDown)
ZORRO_VARIABLE  (var   , MAE            , g->w.vEquityDown)
ZORRO_VARIABLE  (var   , MarginMax      , g->w.vMarginMax)
ZORRO_VARIABLE  (var   , RiskMax        , g->w.vRiskMax)
ZORRO_VARIABLE  (var   , SpreadCost     , g->w.vSpreadCost)
ZORRO_EXPRESSION(var   , SlippageCost   , g->w.vSlippageWin + g->w.vSlippageLoss)
ZORRO_VARIABLE  (var   , RollCost       , g->w.vRollCost)
ZORRO_VARIABLE  (var   , CommissionCost , g->w.vCommissionCost)
ZORRO_VARIABLE  (var   , ReturnMean     , g->w.vMean)
ZORRO_VARIABLE  (var   , ReturnStdDev   , g->w.vStdDev)
ZORRO_VARIABLE  (var   , Ulcer          , g->w.vUlcer)
ZORRO_VARIABLE  (var   , R2             , g->w.vR2)
ZORRO_VARIABLE  (int   , DrawDownBars   , g->w.numDrawDownBars)
ZORRO_VARIABLE  (int   , DrawDownBarsMax, g->w.numDrawDownMax)
ZORRO_VARIABLE  (int   , LossStreakMax  , g->w.numLossStreakMax)
ZORRO_VARIABLE  (int   , NumOpenMax     , g->numTradesMax)
ZORRO_VARIABLE  (int   , InMarketBars   , g->w.numMarketBars)
ZORRO_VARIABLE  (int   , InMarketSum    , g->w.numMarketTotal)
ZORRO_VARPOINTER(float*, Results        , g->pResults)
ZORRO_VARPOINTER(var*  , ResultsDaily   , g->pCurve)
ZORRO_VARPOINTER(var*  , DatesDaily     , g->pTime)
ZORRO_VARPOINTER(BAR*  , Bars           , g->bars)

ZORRO_EXPRESSION(bool, TradeIsOpen    , TradeFlag(ETradeFlag::OPEN))
ZORRO_EXPRESSION(bool, TradeIsPending , TradeFlag(ETradeFlag::WAITBUY))
ZORRO_EXPRESSION(bool, TradeIsClosed  , !TradeIsOpen && TradeFlag(ETradeFlag::STOPPED|ETradeFlag::PROFIT|ETradeFlag::TIME|ETradeFlag::SOLD|ETradeFlag::EXIT|ETradeFlag::REMOVED|ETradeFlag::REVERSED|ETradeFlag::EXPIRED))
ZORRO_EXPRESSION(bool, TradeIsShort   , TradeFlag(ETradeFlag::BID))
ZORRO_EXPRESSION(bool, TradeIsLong    , !TradeFlag(ETradeFlag::BID))
ZORRO_EXPRESSION(bool, TradeIsPhantom , TradeFlag(ETradeFlag::PHANTOM))
ZORRO_EXPRESSION(bool, TradeIsPool    , TradeIs(ETradeFlag::PHANTOM|ETradeFlag::NET))
ZORRO_EXPRESSION(bool, TradeIsVirtual , TradeIs(ETradeFlag::PHANTOM|ETradeFlag::NET))
ZORRO_EXPRESSION(bool, TradeIsNewBar  , g->tr->nBarClose != g->nBar)
ZORRO_EXPRESSION(bool, TradeIsStop    , TradeIs(ETradeFlag::EVENT|ETradeFlag::STOPPED))
ZORRO_EXPRESSION(bool, TradeIsProfit  , TradeIs(ETradeFlag::EVENT|ETradeFlag::PROFIT))
ZORRO_EXPRESSION(bool, TradeIsEntry   , TradeIs(ETradeFlag::EVENT|ETradeFlag::WAITBUY))
ZORRO_EXPRESSION(bool, TradeIsContract, (g->tr->nContract & EContractType::PUT|EContractType::CALL|EContractType::FUTURE) != 0)
ZORRO_EXPRESSION(bool, TradeIsCall    , (g->tr->nContract & EContractType::CALL) != 0)
ZORRO_EXPRESSION(bool, TradeIsPut     , (g->tr->nContract & EContractType::PUT) != 0)

ZORRO_VARPOINTER(TRADE*       , ThisTrade       , g->tr)
ZORRO_VARIABLE  (float        , TradePriceOpen  , g->tr->fEntryPrice)
ZORRO_VARIABLE  (float        , TradePriceClose , g->tr->fExitPrice)
ZORRO_VARIABLE  (float        , TradeResult     , g->tr->fResult)
ZORRO_VARIABLE  (float        , TradeProfit     , g->tr->fResult)
ZORRO_VARIABLE  (float        , TradeStopLimit  , g->tr->fStopLimit)
ZORRO_VARIABLE  (float        , TradeStopDiff   , g->tr->fStopDiff)
ZORRO_VARIABLE  (float        , TradeProfitLimit, g->tr->fProfitLimit)
ZORRO_VARIABLE  (float        , TradeTrailLimit , g->tr->fTrailLimit)
ZORRO_VARIABLE  (float        , TradeTrailDiff  , g->tr->fTrailDiff)
ZORRO_VARIABLE  (float        , TradeTrailSlope , g->tr->fTrailSlope)
ZORRO_VARIABLE  (float        , TradeTrailStep  , g->tr->fTrailStep)
ZORRO_VARIABLE  (float        , TradeTrailLock  , g->tr->fTrailLock)
ZORRO_VARIABLE  (float        , TradeEntryLimit , g->tr->fEntryLimit)
ZORRO_VARIABLE  (float        , TradeUnits      , g->tr->fUnits)
ZORRO_VARIABLE  (int          , TradeExitTime   , g->tr->nExitTime)
ZORRO_EXPRESSION(int          , TradeTime       , g->nBar - g->tr->nBarOpen)
ZORRO_VARIABLE  (int          , TradeLots       , g->tr->nLots)
ZORRO_VARIABLE  (int          , TradeID         , g->tr->nID)
ZORRO_VARIABLE  (int          , TradeBarOpen    , g->tr->nBarOpen)
ZORRO_VARIABLE  (int          , TradeBarClose   , g->tr->nBarClose)
ZORRO_VARIABLE  (float        , TradeMAE        , g->tr->fMAE)
ZORRO_VARIABLE  (float        , TradeMFE        , g->tr->fMFE)
ZORRO_VARIABLE  (float        , TradeRoll       , g->tr->fRoll)
ZORRO_VARIABLE  (EContractType, TradeContract   , g->tr->nContract)
ZORRO_VARIABLE  (float        , TradeStrike     , g->tr->fStrike)
ZORRO_VARIABLE  (float        , TradeUnderlying , g->tr->fUnl)
ZORRO_VARPOINTER(var*         , TradeVar        , g->tr->Skill)
ZORRO_VARPOINTER(float*       , TradeParameter  , g->tr->fArg)
ZORRO_VARPOINTER(ETradeDir    , TradeDir        , TradeIsShort ? ETradeDir::DOWN : ETradeDir::UP)
ZORRO_VARPOINTER(STATUS*      , TradeStatus     , g->tr->status)
ZORRO_VARPOINTER(char*        , TradeAlgo       , g->tr->status->sAlgo)
ZORRO_VARPOINTER(char*        , TradeAsset      , g->tr->status->asset->sName)

ZORRO_VARPOINTER(CONTRACT*, Contracts   , g->asset->pContracts)
ZORRO_VARIABLE  (int  , NumContracts    , g->asset->numContracts)
ZORRO_EXPRESSION(int  , ContractRow     , g->asset->nContractRow + g->asset->nContractOffs)
ZORRO_VARPOINTER(CONTRACT*, ThisContract, g->contract)
ZORRO_VARIABLE  (float, ContractAsk     , g->contract->fAsk)
ZORRO_VARIABLE  (float, ContractBid     , g->contract->fBid)
ZORRO_VARIABLE  (float, ContractVol     , g->contract->fVol)
ZORRO_VARIABLE  (float, ContractStrike  , g->contract->fStrike)
ZORRO_VARIABLE  (long , ContractExpiry  , g->contract->Expiry)
ZORRO_VARIABLE  (long , ContractType    , g->contract->Type)

ZORRO_VARIABLE(var, rAroonDown     , g->vAroonDown)
ZORRO_VARIABLE(var, rAroonUp       , g->vAroonUp)
ZORRO_VARIABLE(var, rRealUpperBand , g->vRealUpperBand)
ZORRO_VARIABLE(var, rRealMiddleBand, g->vRealMiddleBand)
ZORRO_VARIABLE(var, rRealLowerBand , g->vRealLowerBand)
ZORRO_VARIABLE(var, rInPhase       , g->vInPhase)
ZORRO_VARIABLE(var, rQuadrature    , g->vQuadrature)
ZORRO_VARIABLE(var, rSine          , g->vSine)
ZORRO_VARIABLE(var, rLeadSine      , g->vLeadSine)
ZORRO_VARIABLE(var, rMACD          , g->vMACD)
ZORRO_VARIABLE(var, rMACDSignal    , g->vMACDSignal)
ZORRO_VARIABLE(var, rMACDHist      , g->vMACDHist)
ZORRO_VARIABLE(var, rMAMA          , g->vMAMA)
ZORRO_VARIABLE(var, rFAMA          , g->vFAMA)
ZORRO_VARIABLE(var, rMin           , g->vMin)
ZORRO_VARIABLE(var, rMax           , g->vMax)
ZORRO_VARIABLE(var, rMinIdx        , g->vMinIdx)
ZORRO_VARIABLE(var, rMaxIdx        , g->vMaxIdx)
ZORRO_VARIABLE(var, rSlowK         , g->vSlowK)
ZORRO_VARIABLE(var, rSlowD         , g->vSlowD)
ZORRO_VARIABLE(var, rFastK         , g->vFastK)
ZORRO_VARIABLE(var, rFastD         , g->vFastD)
ZORRO_VARIABLE(var, rDominantPeriod, g->vDominantPeriod)
ZORRO_VARIABLE(var, rDominantPhase , g->vDominantPhase)
ZORRO_VARIABLE(var, rRed           , g->vRed)
ZORRO_VARIABLE(var, rGreen         , g->vGreen)
ZORRO_VARIABLE(var, rBlue          , g->vBlue)
ZORRO_VARIABLE(var, rError         , g->vError)
ZORRO_VARIABLE(var, rEMA           , g->vEMA)
ZORRO_VARIABLE(var, rPeak          , g->vPeak)
ZORRO_VARIABLE(var, rSlope         , g->vSlope)
ZORRO_VARIABLE(var, rSign          , g->vSign)
ZORRO_VARIABLE(var, rLength        , g->vLength)
ZORRO_VARIABLE(var, rMomentum      , g->vMomentum)
ZORRO_VARIABLE(var, rTenkan        , g->vTenkan)
ZORRO_VARIABLE(var, rKijun         , g->vKijun)
ZORRO_VARIABLE(var, rSenkouA       , g->vSenkouA)
ZORRO_VARIABLE(var, rSenkouB       , g->vSenkouB)

ZORRO_EXPRESSION(const char*, YMDHMS, "%y%m%d %H:%M:%S")
ZORRO_EXPRESSION(const char*, HMS   , "%H:%M:%S")
ZORRO_EXPRESSION(const char*, YMD   , "%Y%m%d")

#undef ZORRO_VARIABLE
#undef ZORRO_EXPRESSION
#undef ZORRO_VARPOINTER
