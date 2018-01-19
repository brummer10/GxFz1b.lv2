// generated from file './/maestro_fz1b.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace gx_resample
{

class FixedRateResampler {
private:
    Resampler r_up, r_down;
    int inputRate, outputRate;
    int last_in_count;
public:
    int setup(int _inputRate, int _outputRate);
    int up(int count, float *input, float *output);
    void down(float *input, float *output);
    int max_out_count(int in_count) {
	return static_cast<int>(ceil((in_count*static_cast<double>(outputRate))/inputRate)); }
};

int FixedRateResampler::setup(int _inputRate, int _outputRate)
{
    const int qual = 16; // resulting in a total delay of 2*qual (0.7ms @44100)
    inputRate = _inputRate;
    outputRate = _outputRate;
    if (inputRate == outputRate) {
	return 0;
    }
    // upsampler
    int ret = r_up.setup(inputRate, outputRate, 1, qual);
    if (ret) {
	return ret;
    }
    // k == filtlen() == 2 * qual
    // pre-fill with k-1 zeros
    r_up.inp_count = r_up.filtlen() - 1;
    r_up.out_count = 1;
    r_up.inp_data = r_up.out_data = 0;
    r_up.process();
    // downsampler
    ret = r_down.setup(outputRate, inputRate, 1, qual);
    if (ret) {
	return ret;
    }
    // k == filtlen() == 2 * qual * fact
    // pre-fill with k-2 zeros
    r_down.inp_count = r_down.filtlen() - 2;
    r_down.out_count = 1;
    r_down.inp_data = r_down.out_data = 0;
    r_down.process();
    return 0;
}

int FixedRateResampler::up(int count, float *input, float *output)
{
    if (inputRate == outputRate) {
	memcpy(output, input, count*sizeof(float));
	r_down.out_count = count;
	return count;
    }
    r_up.inp_count = count;
    r_down.out_count = count+1; // +1 == trick to drain input
    r_up.inp_data = input;
    int m = max_out_count(count);
    r_up.out_count = m;
    r_up.out_data = output;
    r_up.process();
    assert(r_up.inp_count == 0);
    assert(r_up.out_count <= 1);
    r_down.inp_count = m - r_up.out_count;
    return r_down.inp_count;
}

void FixedRateResampler::down(float *input, float *output)
{
    if (inputRate == outputRate) {
	memcpy(output, input, r_down.out_count*sizeof(float));
	return;
    }
    r_down.inp_data = input;
    r_down.out_data = output;
    r_down.process();
    assert(r_down.inp_count == 0);
    assert(r_down.out_count == 1);
}

} // namespace gx_resample

namespace maestro_fz1b {

class Dsp: public PluginLV2 {
private:
	double 	fLowVec0[2];
	uint32_t 	iLowConst0;
	double 	fLowConst1;
	double 	fLowConst2;
	double 	fLowConst3;
	double 	fLowConst4;
	double 	fLowRec0[2];

	double 	fLowdVec0[2];
	uint32_t 	iLowdConst0;
	double 	fLowdConst1;
	double 	fLowdConst2;
	double 	fLowdConst3;
	double 	fLowdConst4;
	double 	fLowdRec0[2];

	gx_resample::FixedRateResampler smp;
	uint32_t samplingFreq;
	uint32_t fSamplingFreq;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec0[2];
	double 	fConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fConst16;
	double 	fConst17;
	double 	fConst18;
	double 	fConst19;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fRec3[3];
	double 	fConst72;
	double 	fConst73;
	double 	fRec2[3];
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fRec1[4];
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fConst94;
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec4[2];

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "maestro_fz1b_amp";
	name = N_("Fz1b");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<3; i++) fRec3[i] = 0;
	for (int i=0; i<3; i++) fRec2[i] = 0;
	for (int i=0; i<4; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) fLowVec0[i] = 0;
	for (int i=0; i<2; i++) fLowRec0[i] = 0;
	for (int i=0; i<2; i++) fLowdVec0[i] = 0;
	for (int i=0; i<2; i++) fLowdRec0[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t RsamplingFreq)
{
	samplingFreq = 192000;
	smp.setup(RsamplingFreq, samplingFreq);
	iLowConst0 = min(192000, max(1, RsamplingFreq));
	fLowConst1 = (1.0 / tan((1.5707963267948966 * (double(iLowConst0) / double(iLowConst0)))));
	fLowConst2 = (1 + fLowConst1);
	fLowConst3 = (1.0 / fLowConst2);
	fLowConst4 = (0 - ((1 - fLowConst1) / fLowConst2));

	iLowdConst0 = min(192000, max(1, samplingFreq));
	fLowdConst1 = (1.0 / tan((1.5707963267948966 * (double(iLowdConst0) / double(iLowdConst0)))));
	fLowdConst2 = (1 + fLowdConst1);
	fLowdConst3 = (1.0 / fLowdConst2);
	fLowdConst4 = (0 - ((1 - fLowdConst1) / fLowdConst2));

	fSamplingFreq = samplingFreq;
	fConst0 = double(min(1.92e+05, max(1.0, (double)fSamplingFreq)));
	fConst1 = (3.69544261950301e-15 * fConst0);
	fConst2 = ((fConst0 * ((fConst0 * (0 - (2.9609547910481e-12 + fConst1))) - 4.06723885686377e-09)) - 4.1532694546277e-07);
	fConst3 = (4.91278027048167e-15 * fConst0);
	fConst4 = (5.5061464504327e-09 + (fConst0 * (3.78383230341818e-12 + fConst3)));
	fConst5 = (5.64844645829367e-07 + (fConst0 * fConst4));
	fConst6 = (1.14751043954261e-15 * fConst0);
	fConst7 = (7.93585849536688e-13 + fConst6);
	fConst8 = (1.17592568896086e-09 + (fConst0 * fConst7));
	fConst9 = (1.52551865311194e-15 * fConst0);
	fConst10 = ((fConst0 * (0 - (1.00764876980391e-12 + fConst9))) - 1.59925893698676e-09);
	fConst11 = (2.53236096416581e-15 * fConst0);
	fConst12 = ((fConst0 * (0 - (1.67269695787449e-12 + fConst11))) - 2.65476983539803e-09);
	fConst13 = (2.22617025271265e-15 * fConst0);
	fConst14 = ((fConst0 * ((fConst0 * (0 - (1.78370770545066e-12 + fConst13))) - 2.45014388967697e-09)) - 2.50196955098054e-07);
	fConst15 = (2.95950618703715e-15 * fConst0);
	fConst16 = (3.40267858933354e-07 + (fConst0 * (3.31695569303175e-09 + (fConst0 * (2.27941705025191e-12 + fConst15)))));
	fConst17 = (5.19570906196242e-15 * fConst0);
	fConst18 = (5.97374253143396e-07 + (fConst0 * (5.82324741468653e-09 + (fConst0 * (4.00174457342226e-12 + fConst17)))));
	fConst19 = (2.37308248335858e-14 * fConst0);
	fConst20 = (fConst19 - 1.76229458254285e-12);
	fConst21 = (1.17592568896086e-09 + (fConst0 * (fConst6 - 7.93585849536688e-13)));
	fConst22 = (1.00684231105388e-15 * fConst0);
	fConst23 = ((fConst0 * (6.65048188070582e-13 - fConst22)) - 1.05551089841126e-09);
	fConst24 = (1.66691867012205e-14 * fConst0);
	fConst25 = (fConst0 * (fConst24 - 1.82816261254886e-12));
	fConst26 = ((fConst0 * (4.06723885686377e-09 + (fConst0 * (fConst1 - 2.9609547910481e-12)))) - 4.1532694546277e-07);
	fConst27 = ((fConst0 * (3.78383230341818e-12 - fConst3)) - 5.5061464504327e-09);
	fConst28 = (5.64844645829367e-07 + (fConst0 * fConst27));
	fConst29 = ((fConst0 * (7.93585849536688e-13 - fConst6)) - 1.17592568896086e-09);
	fConst30 = (1.59925893698676e-09 + (fConst0 * (fConst9 - 1.00764876980391e-12)));
	fConst31 = (2.65476983539803e-09 + (fConst0 * (fConst11 - 1.67269695787449e-12)));
	fConst32 = ((fConst0 * (2.45014388967697e-09 + (fConst0 * (fConst13 - 1.78370770545066e-12)))) - 2.50196955098054e-07);
	fConst33 = (3.40267858933354e-07 + (fConst0 * ((fConst0 * (2.27941705025191e-12 - fConst15)) - 3.31695569303175e-09)));
	fConst34 = (5.97374253143396e-07 + (fConst0 * ((fConst0 * (4.00174457342226e-12 - fConst17)) - 5.82324741468653e-09)));
	fConst35 = (1.1086327858509e-14 * fConst0);
	fConst36 = ((fConst0 * (4.06723885686377e-09 + (fConst0 * (2.9609547910481e-12 - fConst35)))) - 1.24598083638831e-06);
	fConst37 = (1.4738340811445e-14 * fConst0);
	fConst38 = ((fConst0 * (fConst37 - 3.78383230341818e-12)) - 5.5061464504327e-09);
	fConst39 = (1.6945339374881e-06 + (fConst0 * fConst38));
	fConst40 = (3.44253131862782e-15 * fConst0);
	fConst41 = ((fConst0 * (fConst40 - 7.93585849536688e-13)) - 1.17592568896086e-09);
	fConst42 = (4.57655595933581e-15 * fConst0);
	fConst43 = (1.59925893698676e-09 + (fConst0 * (1.00764876980391e-12 - fConst42)));
	fConst44 = (7.59708289249744e-15 * fConst0);
	fConst45 = (2.65476983539803e-09 + (fConst0 * (1.67269695787449e-12 - fConst44)));
	fConst46 = (6.67851075813796e-15 * fConst0);
	fConst47 = ((fConst0 * (2.45014388967697e-09 + (fConst0 * (1.78370770545066e-12 - fConst46)))) - 7.50590865294163e-07);
	fConst48 = (8.87851856111145e-15 * fConst0);
	fConst49 = (1.02080357680006e-06 + (fConst0 * ((fConst0 * (fConst48 - 2.27941705025191e-12)) - 3.31695569303175e-09)));
	fConst50 = (1.55871271858873e-14 * fConst0);
	fConst51 = (1.79212275943019e-06 + (fConst0 * ((fConst0 * (fConst50 - 4.00174457342226e-12)) - 5.82324741468653e-09)));
	fConst52 = ((fConst0 * ((fConst0 * (2.9609547910481e-12 + fConst35)) - 4.06723885686377e-09)) - 1.24598083638831e-06);
	fConst53 = (5.5061464504327e-09 + (fConst0 * (0 - (3.78383230341818e-12 + fConst37))));
	fConst54 = (1.6945339374881e-06 + (fConst0 * fConst53));
	fConst55 = (7.93585849536688e-13 + fConst40);
	fConst56 = (1.17592568896086e-09 + (fConst0 * (0 - fConst55)));
	fConst57 = ((fConst0 * (1.00764876980391e-12 + fConst42)) - 1.59925893698676e-09);
	fConst58 = ((fConst0 * (1.67269695787449e-12 + fConst44)) - 2.65476983539803e-09);
	fConst59 = ((fConst0 * ((fConst0 * (1.78370770545066e-12 + fConst46)) - 2.45014388967697e-09)) - 7.50590865294163e-07);
	fConst60 = (1.02080357680006e-06 + (fConst0 * (3.31695569303175e-09 + (fConst0 * (0 - (2.27941705025191e-12 + fConst48))))));
	fConst61 = (1.79212275943019e-06 + (fConst0 * (5.82324741468653e-09 + (fConst0 * (0 - (4.00174457342226e-12 + fConst50))))));
	fConst62 = (2.99541272269559e-10 * fConst0);
	fConst63 = (0.00431534332782975 + (fConst0 * (fConst62 - 6.36544927839803e-06)));
	fConst64 = faustpower<2>(fConst0);
	fConst65 = (5.99082544539119e-10 * fConst64);
	fConst66 = (0.0086306866556595 - fConst65);
	fConst67 = (1.0 / (0.00431534332782975 + (fConst0 * (6.36544927839803e-06 + fConst62))));
	fConst68 = (3.6140707558631e-10 * fConst0);
	fConst69 = (0.000294161326155175 + (fConst0 * (fConst68 - 3.47966534422887e-06)));
	fConst70 = (0.00058832265231035 - (7.22814151172621e-10 * fConst64));
	fConst71 = (1.0 / (0.000294161326155175 + (fConst0 * (3.47966534422887e-06 + fConst68))));
	fConst72 = (2.72939576591612e-06 * fConst0);
	fConst73 = (0 - fConst72);
	fConst74 = (0.000402521980258519 + fConst62);
	fConst75 = (fConst62 - 0.000402521980258519);
	fConst76 = (0 - fConst65);
	fConst77 = (1.0 / tanh(1.0001));
	fConst78 = (3.90562012680894e-14 * fConst0);
	fConst79 = (7.11924745007574e-14 * fConst0);
	fConst80 = (1.76229458254285e-12 - fConst79);
	fConst81 = (1.17592568896086e-09 + (fConst0 * (7.93585849536688e-13 - fConst40)));
	fConst82 = (3.02052693316163e-15 * fConst0);
	fConst83 = ((fConst0 * (fConst82 - 6.65048188070582e-13)) - 1.05551089841126e-09);
	fConst84 = (5.00075601036616e-14 * fConst0);
	fConst85 = (fConst0 * (1.82816261254886e-12 - fConst84));
	fConst86 = (1.76229458254285e-12 + fConst79);
	fConst87 = ((fConst0 * fConst55) - 1.17592568896086e-09);
	fConst88 = (1.05551089841126e-09 + (fConst0 * (0 - (6.65048188070582e-13 + fConst82))));
	fConst89 = (fConst0 * (1.82816261254886e-12 + fConst84));
	fConst90 = (1.30187337560298e-14 * fConst0);
	fConst91 = (0 - (1.76229458254285e-12 + fConst19));
	fConst92 = ((fConst0 * (0 - fConst7)) - 1.17592568896086e-09);
	fConst93 = (1.05551089841126e-09 + (fConst0 * (6.65048188070582e-13 + fConst22)));
	fConst94 = (fConst0 * (0 - (1.82816261254886e-12 + fConst24)));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
	for (int i=0; i<count; i++) {
		double fLowTemp0 = (double)input0[i];
		fLowVec0[0] = fLowTemp0;
		fLowRec0[0] = ((fLowConst4 * fLowRec0[1]) + (fLowConst3 * (fLowVec0[0] + fLowVec0[1])));
		output0[i] = (FAUSTFLOAT)fLowRec0[0];
		// post processing
		fLowRec0[1] = fLowRec0[0];
		fLowVec0[1] = fLowVec0[0];
	}
	FAUSTFLOAT buf[smp.max_out_count(count)];
	int ReCount = smp.up(count, output0, buf);
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (4.748558434412966e-05 * (exp((5 * double(fslider1))) - 1));
	for (int i=0; i<ReCount; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = (1 - fRec0[0]);
		double fTemp1 = (fConst18 + ((fTemp0 * (5.64844645829367e-07 + ((fRec0[0] * (fConst16 + (fConst14 * fRec0[0]))) + (fConst0 * (fConst4 + (fTemp0 * (fConst12 + (fRec0[0] * (fConst10 + (fConst8 * fRec0[0])))))))))) + (fRec0[0] * (fConst5 + (fConst2 * fRec0[0])))));
		fRec3[0] = ((double)buf[i] - (fConst71 * ((fConst70 * fRec3[1]) + (fConst69 * fRec3[2]))));
		fRec2[0] = ((fConst71 * ((fConst73 * fRec3[2]) + (fConst72 * fRec3[0]))) - (fConst67 * ((fConst66 * fRec2[1]) + (fConst63 * fRec2[2]))));
		double fTemp2 = ((fConst76 * fRec2[1]) + (fConst0 * ((fConst75 * fRec2[0]) + (fConst74 * fRec2[2]))));
		fRec1[0] = (((fConst67 * (fTemp0 * fTemp2)) + (fConst77 * tanh((1.0001 * max(-1.12, min(1.2, (fConst67 * (fRec0[0] * fTemp2)))))))) - ((((fRec1[1] * (fConst61 + ((fTemp0 * (1.6945339374881e-06 + ((fRec0[0] * (fConst60 + (fConst59 * fRec0[0]))) + (fConst0 * (fConst53 + (fTemp0 * (fConst58 + (fRec0[0] * (fConst57 + (fConst56 * fRec0[0])))))))))) + (fRec0[0] * (fConst54 + (fConst52 * fRec0[0])))))) + (fRec1[2] * (fConst51 + ((fTemp0 * (1.6945339374881e-06 + ((fRec0[0] * (fConst49 + (fConst47 * fRec0[0]))) + (fConst0 * (fConst38 + (fTemp0 * (fConst45 + (fRec0[0] * (fConst43 + (fConst41 * fRec0[0])))))))))) + (fRec0[0] * (fConst39 + (fConst36 * fRec0[0]))))))) + (fRec1[3] * (fConst34 + ((fTemp0 * (5.64844645829367e-07 + ((fRec0[0] * (fConst33 + (fConst32 * fRec0[0]))) + (fConst0 * (fConst27 + (fTemp0 * (fConst31 + (fRec0[0] * (fConst30 + (fConst29 * fRec0[0])))))))))) + (fRec0[0] * (fConst28 + (fConst26 * fRec0[0]))))))) / fTemp1));
		fRec4[0] = (fSlow1 + (0.993 * fRec4[1]));
		buf[i] = (FAUSTFLOAT)(fConst0 * ((fRec4[0] * ((((fRec1[0] * ((fConst94 * fRec0[0]) + (fTemp0 * (fConst93 + (fRec0[0] * (1.59925893698676e-09 + ((fConst92 * fRec0[0]) + (fConst0 * (fConst91 + (fConst90 * fTemp0)))))))))) + (fRec1[1] * ((fConst89 * fRec0[0]) + (fTemp0 * (fConst88 + (fRec0[0] * (1.59925893698676e-09 + ((fConst87 * fRec0[0]) + (fConst0 * (fConst86 + (fConst0 * (0 - (3.90562012680894e-14 * fTemp0))))))))))))) + (fRec1[2] * ((fConst85 * fRec0[0]) + (fTemp0 * (fConst83 + (fRec0[0] * (((fConst81 * fRec0[0]) + (fConst0 * (fConst80 + (fConst78 * fTemp0)))) - 1.59925893698676e-09))))))) + (fRec1[3] * ((fConst25 * fRec0[0]) + (fTemp0 * (fConst23 + (fRec0[0] * (((fConst21 * fRec0[0]) + (fConst0 * (fConst20 + (fConst0 * (0 - (1.30187337560298e-14 * fTemp0)))))) - 1.59925893698676e-09)))))))) / fTemp1));
		// post processing
		fRec4[1] = fRec4[0];
		for (int i=3; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec3[2] = fRec3[1]; fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
	}
	for (int i=0; i<ReCount; i++) {
		double fLowdTemp0 = (double)buf[i];
		fLowdVec0[0] = fLowdTemp0;
		fLowdRec0[0] = ((fLowdConst4 * fLowdRec0[1]) + (fLowdConst3 * (fLowdVec0[0] + fLowdVec0[1])));
		buf[i] = (FAUSTFLOAT)fLowdRec0[0];
		// post processing
		fLowdRec0[1] = fLowdRec0[0];
		fLowdVec0[1] = fLowdVec0[0];
	}
	smp.down(buf, output0);
#undef fslider0
#undef fslider1
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case BALANCE: 
		fslider0_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	case VOLUME: 
		fslider1_ = (float*)data; // , 0.5, 0.0, 1.0, 0.01 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   BALANCE, 
   VOLUME, 
} PortIndex;
*/

} // end namespace maestro_fz1b
