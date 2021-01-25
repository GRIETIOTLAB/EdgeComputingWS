#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[2] = { 0 };
                        // tree #1
                        if (x[5] <= -2.1100000143051147) {
                            if (x[28] <= -20.414999961853027) {
                                if (x[57] <= -2.8000000715255737) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[26] <= -9.789999961853027) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #2
                        if (x[11] <= -4.784999847412109) {
                            if (x[14] <= -9.889999866485596) {
                                if (x[10] <= -4.940000057220459) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[56] <= -3.4700000286102295) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #3
                        if (x[54] <= -4.175000190734863) {
                            if (x[15] <= -9.859999656677246) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[23] <= -8.865000009536743) {
                                    if (x[13] <= -9.555000305175781) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[3] <= -1.9599999785423279) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #4
                        if (x[21] <= -18.09500026702881) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[53] <= -4.795000076293945) {
                                if (x[5] <= -2.1100000143051147) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #5
                        if (x[9] <= -3.6700000762939453) {
                            if (x[19] <= -11.324999809265137) {
                                if (x[1] <= -0.5350000113248825) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[44] <= -10.985000133514404) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[12] <= -6.505000114440918) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[46] <= -12.24500036239624) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #6
                        if (x[15] <= -9.859999656677246) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[59] <= -2.0299999713897705) {
                                if (x[23] <= -12.664999961853027) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[59] <= -2.149999976158142) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[51] <= -6.880000114440918) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #7
                        if (x[19] <= -11.324999809265137) {
                            if (x[18] <= -10.28000020980835) {
                                if (x[38] <= -15.864999771118164) {
                                    if (x[39] <= -16.230000019073486) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[20] <= -3.6449999809265137) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #8
                        if (x[0] <= -1.0799999833106995) {
                            if (x[12] <= -4.465000033378601) {
                                if (x[21] <= -17.710000038146973) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[55] <= -3.8300000429153442) {
                                        if (x[35] <= -17.984999656677246) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #9
                        if (x[36] <= -16.704999923706055) {
                            if (x[41] <= -14.954999923706055) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[62] <= -1.5199999809265137) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[20] <= -2.189999580383301) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        // tree #10
                        if (x[20] <= -15.675000667572021) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[12] <= -4.0899999141693115) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #11
                        if (x[18] <= -9.960000038146973) {
                            if (x[11] <= -6.764999866485596) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[36] <= -16.704999923706055) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[15] <= -8.850000381469727) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[33] <= -15.420000076293945) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[1] <= 1.2349999696016312) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #12
                        if (x[41] <= -14.954999923706055) {
                            if (x[30] <= -20.394999504089355) {
                                if (x[11] <= -4.950000047683716) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[25] <= -14.960000038146973) {
                                if (x[26] <= -22.380000114440918) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #13
                        if (x[43] <= -14.945000171661377) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[20] <= -14.21500015258789) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[20] <= -12.764999866485596) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[14] <= -7.590000152587891) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #14
                        if (x[19] <= -11.324999809265137) {
                            if (x[17] <= -13.139999866485596) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[17] <= -5.080000221729279) {
                                    if (x[47] <= -9.650000095367432) {
                                        if (x[30] <= -17.40999984741211) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[41] <= -7.680000066757202) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #15
                        if (x[20] <= -13.855000019073486) {
                            if (x[63] <= -1.2800000309944153) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[9] <= -3.6700000762939453) {
                                if (x[3] <= -1.9599999785423279) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #16
                        if (x[0] <= -1.1600000262260437) {
                            if (x[1] <= -1.2750000357627869) {
                                if (x[13] <= -11.010000228881836) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[29] <= -17.25) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[38] <= -19.039999961853027) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #17
                        if (x[21] <= -14.244999885559082) {
                            if (x[27] <= -16.225000381469727) {
                                if (x[30] <= -26.36500072479248) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[26] <= -13.519999980926514) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[43] <= -12.03499984741211) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #18
                        if (x[35] <= -17.015000343322754) {
                            if (x[62] <= -1.2350000143051147) {
                                if (x[32] <= -19.989999771118164) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[8] <= -4.269999980926514) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[26] <= -21.914999961853027) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[18] <= -8.670000076293945) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #19
                        if (x[56] <= -3.4700000286102295) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[13] <= -6.855000019073486) {
                                if (x[43] <= -12.03499984741211) {
                                    if (x[17] <= -13.139999866485596) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[60] <= -1.7599999904632568) {
                                            if (x[30] <= -17.40999984741211) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[40] <= -13.930000305175781) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #20
                        if (x[62] <= -1.5199999809265137) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[49] <= -8.049999952316284) {
                                if (x[62] <= -1.3600000143051147) {
                                    if (x[35] <= -9.240000009536743) {
                                        if (x[29] <= -17.25) {
                                            if (x[36] <= -13.84000015258789) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #21
                        if (x[18] <= -10.599999904632568) {
                            if (x[26] <= -17.255000114440918) {
                                if (x[14] <= -5.75) {
                                    if (x[53] <= -4.795000076293945) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            if (x[4] <= 0.23499998450279236) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #22
                        if (x[45] <= -10.599999904632568) {
                            if (x[54] <= -4.175000190734863) {
                                if (x[18] <= -6.105000019073486) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[4] <= -1.7400000095367432) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #23
                        if (x[53] <= -4.795000076293945) {
                            if (x[14] <= -6.440000057220459) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[34] <= -18.234999656677246) {
                                if (x[19] <= -19.22499990463257) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #24
                        if (x[19] <= -9.269999980926514) {
                            if (x[49] <= -7.590000152587891) {
                                if (x[5] <= -2.1100000143051147) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #25
                        if (x[19] <= -11.324999809265137) {
                            if (x[30] <= -17.40999984741211) {
                                votes[1] += 1;
                            }

                            else {
                                if (x[10] <= -5.375) {
                                    if (x[57] <= -2.7200000286102295) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[60] <= -1.6600000262260437) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #26
                        if (x[12] <= -7.625) {
                            votes[0] += 1;
                        }

                        else {
                            if (x[5] <= -2.1100000143051147) {
                                if (x[35] <= -21.875) {
                                    if (x[31] <= -17.989999771118164) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #27
                        if (x[5] <= -2.1100000143051147) {
                            if (x[48] <= -8.850000381469727) {
                                if (x[63] <= -1.2400000095367432) {
                                    if (x[44] <= -11.324999809265137) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[33] <= -16.914999961853027) {
                                    if (x[9] <= -5.319999933242798) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #28
                        if (x[5] <= -2.1100000143051147) {
                            if (x[52] <= -6.105000019073486) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[27] <= -19.5649995803833) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[63] <= -1.4000000357627869) {
                                        if (x[37] <= -14.925000667572021) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #29
                        if (x[20] <= -13.855000019073486) {
                            if (x[34] <= -20.210000038146973) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            if (x[63] <= -1.4000000357627869) {
                                if (x[54] <= -4.430000066757202) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #30
                        if (x[18] <= -9.960000038146973) {
                            if (x[19] <= -11.324999809265137) {
                                if (x[46] <= -11.050000190734863) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[56] <= -3.2850000858306885) {
                                        if (x[60] <= -1.7599999904632568) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[61] <= -1.7350000143051147) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[21] <= -5.004999876022339) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 2; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* predictLabel(float *x) {
                        switch (predict(x)) {
                            case 0:
                            return "two";
                            case 1:
                            return "six";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }