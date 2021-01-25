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
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[7] <= -0.42499999701976776) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[16] <= 0.5149999856948853) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #2
                        if (x[58] <= 0.820000022649765) {
                            if (x[74] <= 0.6349999755620956) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #3
                        if (x[81] <= -0.6200000122189522) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[3] <= 0.07499999832361937) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #4
                        if (x[34] <= 0.8299999833106995) {
                            if (x[42] <= -0.9300000071525574) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #5
                        if (x[76] <= 0.3749999925494194) {
                            if (x[29] <= 0.6999999731779099) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #6
                        if (x[59] <= 0.6349999755620956) {
                            if (x[48] <= -0.5199999660253525) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #7
                        if (x[82] <= 0.7050000131130219) {
                            if (x[66] <= -0.5900000194087625) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #8
                        if (x[20] <= 0.689999982714653) {
                            if (x[88] <= 0.5699999928474426) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #9
                        if (x[32] <= 0.7049999833106995) {
                            if (x[19] <= 0.8599999845027924) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #10
                        if (x[31] <= -0.5350000113248825) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[76] <= 0.875) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #11
                        if (x[3] <= -0.679999977350235) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[61] <= -0.0350000262260437) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #12
                        if (x[15] <= 0.10500000230967999) {
                            if (x[8] <= 0.679999977350235) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #13
                        if (x[37] <= 0.8949999809265137) {
                            if (x[11] <= 0.6849999725818634) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #14
                        if (x[43] <= 0.8050000071525574) {
                            if (x[48] <= -0.9150000214576721) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #15
                        if (x[65] <= 0.6749999821186066) {
                            if (x[39] <= -0.5300000309944153) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #16
                        if (x[28] <= 0.8149999976158142) {
                            if (x[21] <= -0.6899999752640724) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #17
                        if (x[27] <= -0.8949999809265137) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[83] <= 0.5649999752640724) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #18
                        if (x[40] <= 0.8100000023841858) {
                            if (x[86] <= 0.6249999925494194) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #19
                        if (x[55] <= -0.5799999982118607) {
                            votes[1] += 1;
                        }

                        else {
                            if (x[3] <= -0.4899999760091305) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #20
                        if (x[19] <= 0.8850000202655792) {
                            if (x[6] <= -0.6599999889731407) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #21
                        if (x[75] <= -0.570000022649765) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[53] <= 0.6349999755620956) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #22
                        if (x[23] <= 0.6949999779462814) {
                            if (x[78] <= -0.36499999463558197) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #23
                        if (x[69] <= -0.6550000235438347) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[14] <= 0.6999999731779099) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #24
                        if (x[12] <= -0.7449999898672104) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[71] <= 0.6149999797344208) {
                                votes[0] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        // tree #25
                        if (x[27] <= -0.875) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[76] <= 0.21000000834465027) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #26
                        if (x[49] <= 0.7849999964237213) {
                            if (x[33] <= -0.9049999713897705) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // tree #27
                        if (x[47] <= 0.6499999761581421) {
                            if (x[72] <= -0.5450000166893005) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #28
                        if (x[86] <= 0.6249999925494194) {
                            if (x[13] <= 0.8299999833106995) {
                                votes[2] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        else {
                            votes[1] += 1;
                        }

                        // tree #29
                        if (x[75] <= -0.6700000260025263) {
                            votes[2] += 1;
                        }

                        else {
                            if (x[4] <= 0.4700000137090683) {
                                votes[1] += 1;
                            }

                            else {
                                votes[0] += 1;
                            }
                        }

                        // tree #30
                        if (x[76] <= 0.875) {
                            if (x[56] <= 0.6099999770522118) {
                                votes[2] += 1;
                            }

                            else {
                                votes[1] += 1;
                            }
                        }

                        else {
                            votes[0] += 1;
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 0:
                            return "punch";
                            case 1:
                            return "up";
                            case 2:
                            return "left";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }