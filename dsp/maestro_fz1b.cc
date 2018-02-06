// generated from file './/maestro_fz1b.dsp' by dsp2cc:
// Code generated with Faust 0.9.90 (http://faust.grame.fr)


namespace maestro_fz1b {

struct table1d { // 1-dimensional function table
    float low;
    float high;
    float istep;
    int size;
    float data[];
};

template <int tab_size>
struct table1d_imp {
    float low;
    float high;
    float istep;
    int size;
    float data[tab_size];
    operator table1d&() const { return *(table1d*)this; }
};

static table1d_imp<100> clip2 __rt_data = {
	0.0,0.394515179396,101.97,100, {
	0.0,0.00603015075129,0.0180904522522,0.0301507537469,0.0422110552265,0.0542713566722,
	0.0663316580417,0.0783919592408,0.0904522600592,0.102512560027,0.114572858094,
	0.126633151913,0.13869343624,0.15075369936,0.162813915089,0.174874024928,
	0.18693389817,0.198993242803,0.21105140661,0.223106933614,0.235156577432,
	0.247193118816,0.259200598174,0.271144190587,0.282950034925,0.294470641721,
	0.305445189377,0.315505844416,0.324302375812,0.331685149347,0.337749693783,
	0.34272268487,0.34684305184,0.350309449589,0.353272707062,0.355843964801,
	0.35810490171,0.360116111787,0.361923194669,0.363561013504,0.365056646443,
	0.366431442802,0.367702471426,0.368883554945,0.369986019104,0.371019243547,
	0.371991072367,0.372908124189,0.373776029317,0.374599613231,0.375383040109,
	0.37612992624,0.376843430486,0.377526327079,0.378181064683,0.37880981468,
	0.379414510938,0.379996882771,0.380558482439,0.381100708226,0.381624823916,
	0.382131975308,0.3826232043,0.38309946095,0.383561613855,0.384010459105,
	0.384446728066,0.38487109414,0.385284178678,0.385686556167,0.386078758778,
	0.386461280398,0.386834580178,0.387199085695,0.387555195759,0.387903282914,
	0.388243695683,0.38857676057,0.38890278387,0.389222053284,0.389534839388,
	0.389841396959,0.390141966168,0.390436773672,0.390726033604,0.39100994847,
	0.391288709974,0.391562499764,0.391831490126,0.392095844606,0.392355718592,
	0.392611259843,0.39286260898,0.393109899932,0.393353260356,0.393592812019,
	0.393828671151,0.394060948779,0.394289751025,0.394515179396
	}
};

static table1d_imp<100> clip __rt_data = {
	0.0,0.769813131784,101.97,100, {
	0.0,0.00603015075255,0.0180904522575,0.0301507537617,0.0422110552649,0.0542713567661,
	0.0663316582644,0.0783919597583,0.0904522612455,0.102512562723,0.114572864185,
	0.126633165625,0.138693467031,0.150753768388,0.162814069669,0.174874370839,
	0.186934671842,0.198994972595,0.211055272974,0.223115572796,0.235175871782,
	0.247236169522,0.259296465397,0.271356758486,0.283417047408,0.295477330103,
	0.307537603488,0.319597862958,0.331658101628,0.343718309203,0.3557784703,
	0.367838561921,0.379898549689,0.391958382223,0.404017982724,0.416077236409,
	0.428135971741,0.440193932392,0.452250735407,0.464305808797,0.476358298572,
	0.488406930473,0.500449804845,0.512484093473,0.52450559405,0.536508081033,
	0.548482372001,0.560415011246,0.572286469833,0.58406880165,0.595722828331,
	0.607195223197,0.618416376286,0.629300558395,0.639750242256,0.64966571619,
	0.658958839532,0.667566864631,0.675461119451,0.682647579023,0.689160379535,
	0.695051977325,0.700383596623,0.705217971535,0.709614777857,0.713628274534,
	0.717306443498,0.720691011494,0.723817922022,0.726717991172,0.729417598864,
	0.731939341041,0.734302611159,0.736524102405,0.738618233494,0.740597505834,
	0.742472801431,0.744253630739,0.745948338779,0.747564276749,0.749107945186,
	0.750585113719,0.752000921552,0.753359962067,0.754666354304,0.755923803588,
	0.757135653112,0.758304928018,0.759434373175,0.760526485687,0.761583542953,
	0.762607626974,0.763600645475,0.76456435032,0.765500353613,0.766410141819,
	0.767295088185,0.768156463695,0.768995446755,0.769813131784
	}
};

class Dsp: public PluginLV2 {
private:
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
	double 	fRec1[4];
	double 	fConst77;
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
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec4[2];

	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static double symclip(double x);
	static double symclip2(double x);
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
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
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
	fConst77 = (3.90562012680894e-14 * fConst0);
	fConst78 = (7.11924745007574e-14 * fConst0);
	fConst79 = (1.76229458254285e-12 - fConst78);
	fConst80 = (1.17592568896086e-09 + (fConst0 * (7.93585849536688e-13 - fConst40)));
	fConst81 = (3.02052693316163e-15 * fConst0);
	fConst82 = ((fConst0 * (fConst81 - 6.65048188070582e-13)) - 1.05551089841126e-09);
	fConst83 = (5.00075601036616e-14 * fConst0);
	fConst84 = (fConst0 * (1.82816261254886e-12 - fConst83));
	fConst85 = (1.76229458254285e-12 + fConst78);
	fConst86 = ((fConst0 * fConst55) - 1.17592568896086e-09);
	fConst87 = (1.05551089841126e-09 + (fConst0 * (0 - (6.65048188070582e-13 + fConst81))));
	fConst88 = (fConst0 * (1.82816261254886e-12 + fConst83));
	fConst89 = (1.30187337560298e-14 * fConst0);
	fConst90 = (0 - (1.76229458254285e-12 + fConst19));
	fConst91 = ((fConst0 * (0 - fConst7)) - 1.17592568896086e-09);
	fConst92 = (1.05551089841126e-09 + (fConst0 * (6.65048188070582e-13 + fConst22)));
	fConst93 = (fConst0 * (0 - (1.82816261254886e-12 + fConst24)));
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

double always_inline Dsp::symclip(double x) {
    double f = fabs(x);
    f = f * clip.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip.data[0];
    } else if (i >= clip.size-1) {
        f = clip.data[clip.size-1];
    } else {
	f -= i;
	f = clip.data[i]*(1-f) + clip.data[i+1]*f;
    }
    return copysign(f, x);
}

double always_inline Dsp::symclip2(double x) {
    double f = fabs(x);
    f = f * clip2.istep;
    int i = static_cast<int>(f);
    if (i < 0) {
        f = clip2.data[0];
    } else if (i >= clip2.size-1) {
        f = clip2.data[clip2.size-1];
    } else {
	f -= i;
	f = clip2.data[i]*(1-f) + clip2.data[i+1]*f;
    }
    return copysign(f, x);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (4.748558434412966e-05 * (exp((5 * double(fslider1))) - 1));
	for (int i=0; i<count; i++) {
		fRec0[0] = (fSlow0 + (0.993 * fRec0[1]));
		double fTemp0 = (1 - fRec0[0]);
		double fTemp1 = (fConst18 + ((fTemp0 * (5.64844645829367e-07 + ((fRec0[0] * (fConst16 + (fConst14 * fRec0[0]))) + (fConst0 * (fConst4 + (fTemp0 * (fConst12 + (fRec0[0] * (fConst10 + (fConst8 * fRec0[0])))))))))) + (fRec0[0] * (fConst5 + (fConst2 * fRec0[0])))));
		fRec3[0] = ((double)input0[i] - (fConst71 * ((fConst70 * fRec3[1]) + (fConst69 * fRec3[2]))));
		fRec2[0] = ((fConst71 * ((fConst73 * fRec3[2]) + (fConst72 * fRec3[0]))) - (fConst67 * ((fConst66 * fRec2[1]) + (fConst63 * fRec2[2]))));
		double fTemp2 = ((fConst76 * fRec2[1]) + (fConst0 * ((fConst75 * fRec2[0]) + (fConst74 * fRec2[2]))));
		fRec1[0] = ((symclip((fConst67 * (fTemp0 * fTemp2))) + symclip2((fConst67 * (fRec0[0] * fTemp2)))) - ((((fRec1[1] * (fConst61 + ((fTemp0 * (1.6945339374881e-06 + ((fRec0[0] * (fConst60 + (fConst59 * fRec0[0]))) + (fConst0 * (fConst53 + (fTemp0 * (fConst58 + (fRec0[0] * (fConst57 + (fConst56 * fRec0[0])))))))))) + (fRec0[0] * (fConst54 + (fConst52 * fRec0[0])))))) + (fRec1[2] * (fConst51 + ((fTemp0 * (1.6945339374881e-06 + ((fRec0[0] * (fConst49 + (fConst47 * fRec0[0]))) + (fConst0 * (fConst38 + (fTemp0 * (fConst45 + (fRec0[0] * (fConst43 + (fConst41 * fRec0[0])))))))))) + (fRec0[0] * (fConst39 + (fConst36 * fRec0[0]))))))) + (fRec1[3] * (fConst34 + ((fTemp0 * (5.64844645829367e-07 + ((fRec0[0] * (fConst33 + (fConst32 * fRec0[0]))) + (fConst0 * (fConst27 + (fTemp0 * (fConst31 + (fRec0[0] * (fConst30 + (fConst29 * fRec0[0])))))))))) + (fRec0[0] * (fConst28 + (fConst26 * fRec0[0]))))))) / fTemp1));
		fRec4[0] = (fSlow1 + (0.993 * fRec4[1]));
		output0[i] = (FAUSTFLOAT)(fConst0 * ((fRec4[0] * ((((fRec1[0] * ((fConst93 * fRec0[0]) + (fTemp0 * (fConst92 + (fRec0[0] * (1.59925893698676e-09 + ((fConst91 * fRec0[0]) + (fConst0 * (fConst90 + (fConst89 * fTemp0)))))))))) + (fRec1[1] * ((fConst88 * fRec0[0]) + (fTemp0 * (fConst87 + (fRec0[0] * (1.59925893698676e-09 + ((fConst86 * fRec0[0]) + (fConst0 * (fConst85 + (fConst0 * (0 - (3.90562012680894e-14 * fTemp0))))))))))))) + (fRec1[2] * ((fConst84 * fRec0[0]) + (fTemp0 * (fConst82 + (fRec0[0] * (((fConst80 * fRec0[0]) + (fConst0 * (fConst79 + (fConst77 * fTemp0)))) - 1.59925893698676e-09))))))) + (fRec1[3] * ((fConst25 * fRec0[0]) + (fTemp0 * (fConst23 + (fRec0[0] * (((fConst21 * fRec0[0]) + (fConst0 * (fConst20 + (fConst0 * (0 - (1.30187337560298e-14 * fTemp0)))))) - 1.59925893698676e-09)))))))) / fTemp1));
		// post processing
		fRec4[1] = fRec4[0];
		for (int i=3; i>0; i--) fRec1[i] = fRec1[i-1];
		fRec2[2] = fRec2[1]; fRec2[1] = fRec2[0];
		fRec3[2] = fRec3[1]; fRec3[1] = fRec3[0];
		fRec0[1] = fRec0[0];
	}
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
