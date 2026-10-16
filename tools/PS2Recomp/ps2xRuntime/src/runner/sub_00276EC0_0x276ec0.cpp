#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00276EC0
// Address: 0x276ec0 - 0x277170
void sub_00276EC0_0x276ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276EC0_0x276ec0");
#endif

    switch (ctx->pc) {
        case 0x276ec0u: goto label_276ec0;
        case 0x276ec4u: goto label_276ec4;
        case 0x276ec8u: goto label_276ec8;
        case 0x276eccu: goto label_276ecc;
        case 0x276ed0u: goto label_276ed0;
        case 0x276ed4u: goto label_276ed4;
        case 0x276ed8u: goto label_276ed8;
        case 0x276edcu: goto label_276edc;
        case 0x276ee0u: goto label_276ee0;
        case 0x276ee4u: goto label_276ee4;
        case 0x276ee8u: goto label_276ee8;
        case 0x276eecu: goto label_276eec;
        case 0x276ef0u: goto label_276ef0;
        case 0x276ef4u: goto label_276ef4;
        case 0x276ef8u: goto label_276ef8;
        case 0x276efcu: goto label_276efc;
        case 0x276f00u: goto label_276f00;
        case 0x276f04u: goto label_276f04;
        case 0x276f08u: goto label_276f08;
        case 0x276f0cu: goto label_276f0c;
        case 0x276f10u: goto label_276f10;
        case 0x276f14u: goto label_276f14;
        case 0x276f18u: goto label_276f18;
        case 0x276f1cu: goto label_276f1c;
        case 0x276f20u: goto label_276f20;
        case 0x276f24u: goto label_276f24;
        case 0x276f28u: goto label_276f28;
        case 0x276f2cu: goto label_276f2c;
        case 0x276f30u: goto label_276f30;
        case 0x276f34u: goto label_276f34;
        case 0x276f38u: goto label_276f38;
        case 0x276f3cu: goto label_276f3c;
        case 0x276f40u: goto label_276f40;
        case 0x276f44u: goto label_276f44;
        case 0x276f48u: goto label_276f48;
        case 0x276f4cu: goto label_276f4c;
        case 0x276f50u: goto label_276f50;
        case 0x276f54u: goto label_276f54;
        case 0x276f58u: goto label_276f58;
        case 0x276f5cu: goto label_276f5c;
        case 0x276f60u: goto label_276f60;
        case 0x276f64u: goto label_276f64;
        case 0x276f68u: goto label_276f68;
        case 0x276f6cu: goto label_276f6c;
        case 0x276f70u: goto label_276f70;
        case 0x276f74u: goto label_276f74;
        case 0x276f78u: goto label_276f78;
        case 0x276f7cu: goto label_276f7c;
        case 0x276f80u: goto label_276f80;
        case 0x276f84u: goto label_276f84;
        case 0x276f88u: goto label_276f88;
        case 0x276f8cu: goto label_276f8c;
        case 0x276f90u: goto label_276f90;
        case 0x276f94u: goto label_276f94;
        case 0x276f98u: goto label_276f98;
        case 0x276f9cu: goto label_276f9c;
        case 0x276fa0u: goto label_276fa0;
        case 0x276fa4u: goto label_276fa4;
        case 0x276fa8u: goto label_276fa8;
        case 0x276facu: goto label_276fac;
        case 0x276fb0u: goto label_276fb0;
        case 0x276fb4u: goto label_276fb4;
        case 0x276fb8u: goto label_276fb8;
        case 0x276fbcu: goto label_276fbc;
        case 0x276fc0u: goto label_276fc0;
        case 0x276fc4u: goto label_276fc4;
        case 0x276fc8u: goto label_276fc8;
        case 0x276fccu: goto label_276fcc;
        case 0x276fd0u: goto label_276fd0;
        case 0x276fd4u: goto label_276fd4;
        case 0x276fd8u: goto label_276fd8;
        case 0x276fdcu: goto label_276fdc;
        case 0x276fe0u: goto label_276fe0;
        case 0x276fe4u: goto label_276fe4;
        case 0x276fe8u: goto label_276fe8;
        case 0x276fecu: goto label_276fec;
        case 0x276ff0u: goto label_276ff0;
        case 0x276ff4u: goto label_276ff4;
        case 0x276ff8u: goto label_276ff8;
        case 0x276ffcu: goto label_276ffc;
        case 0x277000u: goto label_277000;
        case 0x277004u: goto label_277004;
        case 0x277008u: goto label_277008;
        case 0x27700cu: goto label_27700c;
        case 0x277010u: goto label_277010;
        case 0x277014u: goto label_277014;
        case 0x277018u: goto label_277018;
        case 0x27701cu: goto label_27701c;
        case 0x277020u: goto label_277020;
        case 0x277024u: goto label_277024;
        case 0x277028u: goto label_277028;
        case 0x27702cu: goto label_27702c;
        case 0x277030u: goto label_277030;
        case 0x277034u: goto label_277034;
        case 0x277038u: goto label_277038;
        case 0x27703cu: goto label_27703c;
        case 0x277040u: goto label_277040;
        case 0x277044u: goto label_277044;
        case 0x277048u: goto label_277048;
        case 0x27704cu: goto label_27704c;
        case 0x277050u: goto label_277050;
        case 0x277054u: goto label_277054;
        case 0x277058u: goto label_277058;
        case 0x27705cu: goto label_27705c;
        case 0x277060u: goto label_277060;
        case 0x277064u: goto label_277064;
        case 0x277068u: goto label_277068;
        case 0x27706cu: goto label_27706c;
        case 0x277070u: goto label_277070;
        case 0x277074u: goto label_277074;
        case 0x277078u: goto label_277078;
        case 0x27707cu: goto label_27707c;
        case 0x277080u: goto label_277080;
        case 0x277084u: goto label_277084;
        case 0x277088u: goto label_277088;
        case 0x27708cu: goto label_27708c;
        case 0x277090u: goto label_277090;
        case 0x277094u: goto label_277094;
        case 0x277098u: goto label_277098;
        case 0x27709cu: goto label_27709c;
        case 0x2770a0u: goto label_2770a0;
        case 0x2770a4u: goto label_2770a4;
        case 0x2770a8u: goto label_2770a8;
        case 0x2770acu: goto label_2770ac;
        case 0x2770b0u: goto label_2770b0;
        case 0x2770b4u: goto label_2770b4;
        case 0x2770b8u: goto label_2770b8;
        case 0x2770bcu: goto label_2770bc;
        case 0x2770c0u: goto label_2770c0;
        case 0x2770c4u: goto label_2770c4;
        case 0x2770c8u: goto label_2770c8;
        case 0x2770ccu: goto label_2770cc;
        case 0x2770d0u: goto label_2770d0;
        case 0x2770d4u: goto label_2770d4;
        case 0x2770d8u: goto label_2770d8;
        case 0x2770dcu: goto label_2770dc;
        case 0x2770e0u: goto label_2770e0;
        case 0x2770e4u: goto label_2770e4;
        case 0x2770e8u: goto label_2770e8;
        case 0x2770ecu: goto label_2770ec;
        case 0x2770f0u: goto label_2770f0;
        case 0x2770f4u: goto label_2770f4;
        case 0x2770f8u: goto label_2770f8;
        case 0x2770fcu: goto label_2770fc;
        case 0x277100u: goto label_277100;
        case 0x277104u: goto label_277104;
        case 0x277108u: goto label_277108;
        case 0x27710cu: goto label_27710c;
        case 0x277110u: goto label_277110;
        case 0x277114u: goto label_277114;
        case 0x277118u: goto label_277118;
        case 0x27711cu: goto label_27711c;
        case 0x277120u: goto label_277120;
        case 0x277124u: goto label_277124;
        case 0x277128u: goto label_277128;
        case 0x27712cu: goto label_27712c;
        case 0x277130u: goto label_277130;
        case 0x277134u: goto label_277134;
        case 0x277138u: goto label_277138;
        case 0x27713cu: goto label_27713c;
        case 0x277140u: goto label_277140;
        case 0x277144u: goto label_277144;
        case 0x277148u: goto label_277148;
        case 0x27714cu: goto label_27714c;
        case 0x277150u: goto label_277150;
        case 0x277154u: goto label_277154;
        case 0x277158u: goto label_277158;
        case 0x27715cu: goto label_27715c;
        case 0x277160u: goto label_277160;
        case 0x277164u: goto label_277164;
        case 0x277168u: goto label_277168;
        case 0x27716cu: goto label_27716c;
        default: break;
    }

    ctx->pc = 0x276ec0u;

label_276ec0:
    // 0x276ec0: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x276ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_276ec4:
    // 0x276ec4: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x276ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
label_276ec8:
    // 0x276ec8: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x276ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
label_276ecc:
    // 0x276ecc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x276eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_276ed0:
    // 0x276ed0: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x276ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
label_276ed4:
    // 0x276ed4: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x276ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_276ed8:
    // 0x276ed8: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x276ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
label_276edc:
    // 0x276edc: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x276edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_276ee0:
    // 0x276ee0: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x276ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
label_276ee4:
    // 0x276ee4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x276ee4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_276ee8:
    // 0x276ee8: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x276ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
label_276eec:
    // 0x276eec: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x276eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_276ef0:
    // 0x276ef0: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x276ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_276ef4:
    // 0x276ef4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x276ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_276ef8:
    // 0x276ef8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x276ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_276efc:
    // 0x276efc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x276efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f00:
    // 0x276f00: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x276f00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_276f04:
    // 0x276f04: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x276f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_276f08:
    // 0x276f08: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x276f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_276f0c:
    // 0x276f0c: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x276f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_276f10:
    // 0x276f10: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x276f10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f14:
    // 0x276f14: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x276f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f18:
    // 0x276f18: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x276f18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_276f1c:
    // 0x276f1c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x276f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276f20:
    // 0x276f20: 0xc7a3000c  lwc1        $f3, 0xC($sp)
    ctx->pc = 0x276f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_276f24:
    // 0x276f24: 0xc7a50010  lwc1        $f5, 0x10($sp)
    ctx->pc = 0x276f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_276f28:
    // 0x276f28: 0xc7a60014  lwc1        $f6, 0x14($sp)
    ctx->pc = 0x276f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_276f2c:
    // 0x276f2c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x276f2cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_276f30:
    // 0x276f30: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x276f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_276f34:
    // 0x276f34: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x276f34u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_276f38:
    // 0x276f38: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x276f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_276f3c:
    // 0x276f3c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x276f3cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_276f40:
    // 0x276f40: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x276f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276f44:
    // 0x276f44: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x276f44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_276f48:
    // 0x276f48: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x276f48u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_276f4c:
    // 0x276f4c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x276f4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_276f50:
    // 0x276f50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x276f50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_276f54:
    // 0x276f54: 0xe7a50010  swc1        $f5, 0x10($sp)
    ctx->pc = 0x276f54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_276f58:
    // 0x276f58: 0xe7a60014  swc1        $f6, 0x14($sp)
    ctx->pc = 0x276f58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_276f5c:
    // 0x276f5c: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x276f5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_276f60:
    // 0x276f60: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x276f60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_276f64:
    // 0x276f64: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x276f64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_276f68:
    // 0x276f68: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x276f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_276f6c:
    // 0x276f6c: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x276f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_276f70:
    // 0x276f70: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x276f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_276f74:
    // 0x276f74: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x276f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_276f78:
    // 0x276f78: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x276f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_276f7c:
    // 0x276f7c: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x276f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_276f80:
    // 0x276f80: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x276f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f84:
    // 0x276f84: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x276f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f88:
    // 0x276f88: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x276f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f8c:
    // 0x276f8c: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x276f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f90:
    // 0x276f90: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x276f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f94:
    // 0x276f94: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x276f94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_276f98:
    // 0x276f98: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x276f98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_276f9c:
    // 0x276f9c: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x276f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_276fa0:
    // 0x276fa0: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x276fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_276fa4:
    // 0x276fa4: 0x27a40038  addiu       $a0, $sp, 0x38
    ctx->pc = 0x276fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_276fa8:
    // 0x276fa8: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x276fa8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_276fac:
    // 0x276fac: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x276facu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_276fb0:
    // 0x276fb0: 0x10800066  beqz        $a0, . + 4 + (0x66 << 2)
label_276fb4:
    if (ctx->pc == 0x276FB4u) {
        ctx->pc = 0x276FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FB0u;
        // 0x276fb4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276FB8u;
        goto label_276fb8;
    }
    ctx->pc = 0x276FB0u;
    {
        const bool branch_taken_0x276fb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x276FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FB0u;
        // 0x276fb4: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fb0) {
            ctx->pc = 0x27714Cu;
            goto label_27714c;
        }
    }
    ctx->pc = 0x276FB8u;
label_276fb8:
    // 0x276fb8: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x276fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_276fbc:
    // 0x276fbc: 0x0  nop
    ctx->pc = 0x276fbcu;
    // NOP
label_276fc0:
    // 0x276fc0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x276fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_276fc4:
    // 0x276fc4: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x276fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_276fc8:
    // 0x276fc8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x276fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_276fcc:
    // 0x276fcc: 0x4800021  bltz        $a0, . + 4 + (0x21 << 2)
label_276fd0:
    if (ctx->pc == 0x276FD0u) {
        ctx->pc = 0x276FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FCCu;
        // 0x276fd0: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276FD4u;
        goto label_276fd4;
    }
    ctx->pc = 0x276FCCu;
    {
        const bool branch_taken_0x276fcc = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x276FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FCCu;
        // 0x276fd0: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276fcc) {
            ctx->pc = 0x277054u;
            goto label_277054;
        }
    }
    ctx->pc = 0x276FD4u;
label_276fd4:
    // 0x276fd4: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x276fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_276fd8:
    // 0x276fd8: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x276fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_276fdc:
    // 0x276fdc: 0x8fa5013c  lw          $a1, 0x13C($sp)
    ctx->pc = 0x276fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_276fe0:
    // 0x276fe0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x276fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_276fe4:
    // 0x276fe4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x276fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_276fe8:
    // 0x276fe8: 0xe31021  addu        $v0, $a3, $v1
    ctx->pc = 0x276fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_276fec:
    // 0x276fec: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x276fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_276ff0:
    // 0x276ff0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x276ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_276ff4:
    // 0x276ff4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x276ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_276ff8:
    // 0x276ff8: 0x0  nop
    ctx->pc = 0x276ff8u;
    // NOP
label_276ffc:
    // 0x276ffc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_277000:
    if (ctx->pc == 0x277000u) {
        ctx->pc = 0x277000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FFCu;
        // 0x277000: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277004u;
        goto label_277004;
    }
    ctx->pc = 0x276FFCu;
    {
        const bool branch_taken_0x276ffc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276FFCu;
        // 0x277000: 0xc31021  addu        $v0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276ffc) {
            ctx->pc = 0x277010u;
            goto label_277010;
        }
    }
    ctx->pc = 0x277004u;
label_277004:
    // 0x277004: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x277004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_277008:
    // 0x277008: 0x1000000c  b           . + 4 + (0xC << 2)
label_27700c:
    if (ctx->pc == 0x27700Cu) {
        ctx->pc = 0x27700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277008u;
        // 0x27700c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277010u;
        goto label_277010;
    }
    ctx->pc = 0x277008u;
    {
        const bool branch_taken_0x277008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27700Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277008u;
        // 0x27700c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277008) {
            ctx->pc = 0x27703Cu;
            goto label_27703c;
        }
    }
    ctx->pc = 0x277010u;
label_277010:
    // 0x277010: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x277010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277014:
    // 0x277014: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x277014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277018:
    // 0x277018: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x277018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_27701c:
    // 0x27701c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27701cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277020:
    // 0x277020: 0x0  nop
    ctx->pc = 0x277020u;
    // NOP
label_277024:
    // 0x277024: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277028:
    if (ctx->pc == 0x277028u) {
        ctx->pc = 0x277028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277024u;
        // 0x277028: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27702Cu;
        goto label_27702c;
    }
    ctx->pc = 0x277024u;
    {
        const bool branch_taken_0x277024 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277024u;
        // 0x277028: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277024) {
            ctx->pc = 0x27703Cu;
            goto label_27703c;
        }
    }
    ctx->pc = 0x27702Cu;
label_27702c:
    // 0x27702c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x27702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_277030:
    // 0x277030: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x277030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_277034:
    // 0x277034: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x277034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_277038:
    // 0x277038: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x277038u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_27703c:
    // 0x27703c: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x27703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_277040:
    // 0x277040: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x277040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277044:
    // 0x277044: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x277044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_277048:
    // 0x277048: 0x481ffe5  bgez        $a0, . + 4 + (-0x1B << 2)
label_27704c:
    if (ctx->pc == 0x27704Cu) {
        ctx->pc = 0x27704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277048u;
        // 0x27704c: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277050u;
        goto label_277050;
    }
    ctx->pc = 0x277048u;
    {
        const bool branch_taken_0x277048 = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x27704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277048u;
        // 0x27704c: 0x8fa5013c  lw          $a1, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277048) {
            ctx->pc = 0x276FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276fe0;
        }
    }
    ctx->pc = 0x277050u;
label_277050:
    // 0x277050: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x277050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_277054:
    // 0x277054: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x277054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277058:
    // 0x277058: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x277058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27705c:
    // 0x27705c: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x27705cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277060:
    // 0x277060: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x277060u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277064:
    // 0x277064: 0x0  nop
    ctx->pc = 0x277064u;
    // NOP
label_277068:
    // 0x277068: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_27706c:
    if (ctx->pc == 0x27706Cu) {
        ctx->pc = 0x27706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277068u;
        // 0x27706c: 0xc4a10048  lwc1        $f1, 0x48($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277070u;
        goto label_277070;
    }
    ctx->pc = 0x277068u;
    {
        const bool branch_taken_0x277068 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277068) {
            ctx->pc = 0x27706Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277068u;
            // 0x27706c: 0xc4a10048  lwc1        $f1, 0x48($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x277078u;
            goto label_277078;
        }
    }
    ctx->pc = 0x277070u;
label_277070:
    // 0x277070: 0x10000006  b           . + 4 + (0x6 << 2)
label_277074:
    if (ctx->pc == 0x277074u) {
        ctx->pc = 0x277074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277070u;
        // 0x277074: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277078u;
        goto label_277078;
    }
    ctx->pc = 0x277070u;
    {
        const bool branch_taken_0x277070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277070u;
        // 0x277074: 0x46020001  sub.s       $f0, $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277070) {
            ctx->pc = 0x27708Cu;
            goto label_27708c;
        }
    }
    ctx->pc = 0x277078u;
label_277078:
    // 0x277078: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277078u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27707c:
    // 0x27707c: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27707cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277080:
    // 0x277080: 0x0  nop
    ctx->pc = 0x277080u;
    // NOP
label_277084:
    // 0x277084: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_277088:
    if (ctx->pc == 0x277088u) {
        ctx->pc = 0x277088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277084u;
        // 0x277088: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27708Cu;
        goto label_27708c;
    }
    ctx->pc = 0x277084u;
    {
        const bool branch_taken_0x277084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277084) {
            ctx->pc = 0x277088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277084u;
            // 0x277088: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27708Cu;
            goto label_27708c;
        }
    }
    ctx->pc = 0x27708Cu;
label_27708c:
    // 0x27708c: 0x46000102  mul.s       $f4, $f0, $f0
    ctx->pc = 0x27708cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277090:
    // 0x277090: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x277090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277094:
    // 0x277094: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x277094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277098:
    // 0x277098: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x277098u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27709c:
    // 0x27709c: 0x0  nop
    ctx->pc = 0x27709cu;
    // NOP
label_2770a0:
    // 0x2770a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_2770a4:
    if (ctx->pc == 0x2770A4u) {
        ctx->pc = 0x2770A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770A0u;
        // 0x2770a4: 0xc4a2004c  lwc1        $f2, 0x4C($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2770A8u;
        goto label_2770a8;
    }
    ctx->pc = 0x2770A0u;
    {
        const bool branch_taken_0x2770a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2770a0) {
            ctx->pc = 0x2770A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2770A0u;
            // 0x2770a4: 0xc4a2004c  lwc1        $f2, 0x4C($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2770B0u;
            goto label_2770b0;
        }
    }
    ctx->pc = 0x2770A8u;
label_2770a8:
    // 0x2770a8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2770ac:
    if (ctx->pc == 0x2770ACu) {
        ctx->pc = 0x2770ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770A8u;
        // 0x2770ac: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2770B0u;
        goto label_2770b0;
    }
    ctx->pc = 0x2770A8u;
    {
        const bool branch_taken_0x2770a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770A8u;
        // 0x2770ac: 0x46030001  sub.s       $f0, $f0, $f3 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770a8) {
            ctx->pc = 0x2770C4u;
            goto label_2770c4;
        }
    }
    ctx->pc = 0x2770B0u;
label_2770b0:
    // 0x2770b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2770b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2770b4:
    // 0x2770b4: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x2770b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2770b8:
    // 0x2770b8: 0x0  nop
    ctx->pc = 0x2770b8u;
    // NOP
label_2770bc:
    // 0x2770bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2770c0:
    if (ctx->pc == 0x2770C0u) {
        ctx->pc = 0x2770C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770BCu;
        // 0x2770c0: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2770C4u;
        goto label_2770c4;
    }
    ctx->pc = 0x2770BCu;
    {
        const bool branch_taken_0x2770bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2770bc) {
            ctx->pc = 0x2770C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2770BCu;
            // 0x2770c0: 0x46021801  sub.s       $f0, $f3, $f2 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2770C4u;
            goto label_2770c4;
        }
    }
    ctx->pc = 0x2770C4u;
label_2770c4:
    // 0x2770c4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x2770c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2770c8:
    // 0x2770c8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2770c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2770cc:
    // 0x2770cc: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x2770ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2770d0:
    // 0x2770d0: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x2770d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2770d4:
    // 0x2770d4: 0x0  nop
    ctx->pc = 0x2770d4u;
    // NOP
label_2770d8:
    // 0x2770d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2770dc:
    if (ctx->pc == 0x2770DCu) {
        ctx->pc = 0x2770DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770D8u;
        // 0x2770dc: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2770E0u;
        goto label_2770e0;
    }
    ctx->pc = 0x2770D8u;
    {
        const bool branch_taken_0x2770d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2770DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770D8u;
        // 0x2770dc: 0x460020c0  add.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770d8) {
            ctx->pc = 0x2770E8u;
            goto label_2770e8;
        }
    }
    ctx->pc = 0x2770E0u;
label_2770e0:
    // 0x2770e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2770e4:
    if (ctx->pc == 0x2770E4u) {
        ctx->pc = 0x2770E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770E0u;
        // 0x2770e4: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2770E8u;
        goto label_2770e8;
    }
    ctx->pc = 0x2770E0u;
    {
        const bool branch_taken_0x2770e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2770E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770E0u;
        // 0x2770e4: 0x46020801  sub.s       $f0, $f1, $f2 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2770e0) {
            ctx->pc = 0x277100u;
            goto label_277100;
        }
    }
    ctx->pc = 0x2770E8u;
label_2770e8:
    // 0x2770e8: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x2770e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2770ec:
    // 0x2770ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2770ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2770f0:
    // 0x2770f0: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2770f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2770f4:
    // 0x2770f4: 0x0  nop
    ctx->pc = 0x2770f4u;
    // NOP
label_2770f8:
    // 0x2770f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2770fc:
    if (ctx->pc == 0x2770FCu) {
        ctx->pc = 0x2770FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2770F8u;
        // 0x2770fc: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277100u;
        goto label_277100;
    }
    ctx->pc = 0x2770F8u;
    {
        const bool branch_taken_0x2770f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2770f8) {
            ctx->pc = 0x2770FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2770F8u;
            // 0x2770fc: 0x46011001  sub.s       $f0, $f2, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x277100u;
            goto label_277100;
        }
    }
    ctx->pc = 0x277100u;
label_277100:
    // 0x277100: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x277100u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277104:
    // 0x277104: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x277104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277108:
    // 0x277108: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x277108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_27710c:
    // 0x27710c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27710cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_277110:
    // 0x277110: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x277110u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277114:
    // 0x277114: 0x0  nop
    ctx->pc = 0x277114u;
    // NOP
label_277118:
    // 0x277118: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_27711c:
    if (ctx->pc == 0x27711Cu) {
        ctx->pc = 0x27711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277118u;
        // 0x27711c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277120u;
        goto label_277120;
    }
    ctx->pc = 0x277118u;
    {
        const bool branch_taken_0x277118 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27711Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277118u;
        // 0x27711c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277118) {
            ctx->pc = 0x277124u;
            goto label_277124;
        }
    }
    ctx->pc = 0x277120u;
label_277120:
    // 0x277120: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277124:
    // 0x277124: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_277128:
    if (ctx->pc == 0x277128u) {
        ctx->pc = 0x277128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277124u;
        // 0x277128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27712Cu;
        goto label_27712c;
    }
    ctx->pc = 0x277124u;
    {
        const bool branch_taken_0x277124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277124u;
        // 0x277128: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277124) {
            ctx->pc = 0x27713Cu;
            goto label_27713c;
        }
    }
    ctx->pc = 0x27712Cu;
label_27712c:
    // 0x27712c: 0x240f809  jalr        $s2
label_277130:
    if (ctx->pc == 0x277130u) {
        ctx->pc = 0x277130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27712Cu;
        // 0x277130: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277134u;
        goto label_277134;
    }
    ctx->pc = 0x27712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x277134u);
        ctx->pc = 0x277130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27712Cu;
        // 0x277130: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27712Cu, 0x277134u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277134u;
label_277134:
    // 0x277134: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_277138:
    if (ctx->pc == 0x277138u) {
        ctx->pc = 0x277138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277134u;
        // 0x277138: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27713Cu;
        goto label_27713c;
    }
    ctx->pc = 0x277134u;
    {
        const bool branch_taken_0x277134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277134) {
            ctx->pc = 0x277138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277134u;
            // 0x277138: 0x7bb00190  lq          $s0, 0x190($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277150u;
            goto label_277150;
        }
    }
    ctx->pc = 0x27713Cu;
label_27713c:
    // 0x27713c: 0x8fa3013c  lw          $v1, 0x13C($sp)
    ctx->pc = 0x27713cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_277140:
    // 0x277140: 0x283102b  sltu        $v0, $s4, $v1
    ctx->pc = 0x277140u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_277144:
    // 0x277144: 0x5440ff9e  bnel        $v0, $zero, . + 4 + (-0x62 << 2)
label_277148:
    if (ctx->pc == 0x277148u) {
        ctx->pc = 0x277148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277144u;
        // 0x277148: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27714Cu;
        goto label_27714c;
    }
    ctx->pc = 0x277144u;
    {
        const bool branch_taken_0x277144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277144) {
            ctx->pc = 0x277148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277144u;
            // 0x277148: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x276FC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276fc0;
        }
    }
    ctx->pc = 0x27714Cu;
label_27714c:
    // 0x27714c: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x27714cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_277150:
    // 0x277150: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x277150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_277154:
    // 0x277154: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x277154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_277158:
    // 0x277158: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x277158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_27715c:
    // 0x27715c: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x27715cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_277160:
    // 0x277160: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x277160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_277164:
    // 0x277164: 0x3e00008  jr          $ra
label_277168:
    if (ctx->pc == 0x277168u) {
        ctx->pc = 0x277168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277164u;
        // 0x277168: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27716Cu;
        goto label_27716c;
    }
    ctx->pc = 0x277164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x277168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277164u;
        // 0x277168: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27716Cu;
label_27716c:
    // 0x27716c: 0x0  nop
    ctx->pc = 0x27716cu;
    // NOP
    ctx->pc = 0x277170u;
}
