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

// Function: sub_00155ED8
// Address: 0x155ed8 - 0x1561f8
void sub_00155ED8_0x155ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00155ED8_0x155ed8");
#endif

    switch (ctx->pc) {
        case 0x155ed8u: goto label_155ed8;
        case 0x155edcu: goto label_155edc;
        case 0x155ee0u: goto label_155ee0;
        case 0x155ee4u: goto label_155ee4;
        case 0x155ee8u: goto label_155ee8;
        case 0x155eecu: goto label_155eec;
        case 0x155ef0u: goto label_155ef0;
        case 0x155ef4u: goto label_155ef4;
        case 0x155ef8u: goto label_155ef8;
        case 0x155efcu: goto label_155efc;
        case 0x155f00u: goto label_155f00;
        case 0x155f04u: goto label_155f04;
        case 0x155f08u: goto label_155f08;
        case 0x155f0cu: goto label_155f0c;
        case 0x155f10u: goto label_155f10;
        case 0x155f14u: goto label_155f14;
        case 0x155f18u: goto label_155f18;
        case 0x155f1cu: goto label_155f1c;
        case 0x155f20u: goto label_155f20;
        case 0x155f24u: goto label_155f24;
        case 0x155f28u: goto label_155f28;
        case 0x155f2cu: goto label_155f2c;
        case 0x155f30u: goto label_155f30;
        case 0x155f34u: goto label_155f34;
        case 0x155f38u: goto label_155f38;
        case 0x155f3cu: goto label_155f3c;
        case 0x155f40u: goto label_155f40;
        case 0x155f44u: goto label_155f44;
        case 0x155f48u: goto label_155f48;
        case 0x155f4cu: goto label_155f4c;
        case 0x155f50u: goto label_155f50;
        case 0x155f54u: goto label_155f54;
        case 0x155f58u: goto label_155f58;
        case 0x155f5cu: goto label_155f5c;
        case 0x155f60u: goto label_155f60;
        case 0x155f64u: goto label_155f64;
        case 0x155f68u: goto label_155f68;
        case 0x155f6cu: goto label_155f6c;
        case 0x155f70u: goto label_155f70;
        case 0x155f74u: goto label_155f74;
        case 0x155f78u: goto label_155f78;
        case 0x155f7cu: goto label_155f7c;
        case 0x155f80u: goto label_155f80;
        case 0x155f84u: goto label_155f84;
        case 0x155f88u: goto label_155f88;
        case 0x155f8cu: goto label_155f8c;
        case 0x155f90u: goto label_155f90;
        case 0x155f94u: goto label_155f94;
        case 0x155f98u: goto label_155f98;
        case 0x155f9cu: goto label_155f9c;
        case 0x155fa0u: goto label_155fa0;
        case 0x155fa4u: goto label_155fa4;
        case 0x155fa8u: goto label_155fa8;
        case 0x155facu: goto label_155fac;
        case 0x155fb0u: goto label_155fb0;
        case 0x155fb4u: goto label_155fb4;
        case 0x155fb8u: goto label_155fb8;
        case 0x155fbcu: goto label_155fbc;
        case 0x155fc0u: goto label_155fc0;
        case 0x155fc4u: goto label_155fc4;
        case 0x155fc8u: goto label_155fc8;
        case 0x155fccu: goto label_155fcc;
        case 0x155fd0u: goto label_155fd0;
        case 0x155fd4u: goto label_155fd4;
        case 0x155fd8u: goto label_155fd8;
        case 0x155fdcu: goto label_155fdc;
        case 0x155fe0u: goto label_155fe0;
        case 0x155fe4u: goto label_155fe4;
        case 0x155fe8u: goto label_155fe8;
        case 0x155fecu: goto label_155fec;
        case 0x155ff0u: goto label_155ff0;
        case 0x155ff4u: goto label_155ff4;
        case 0x155ff8u: goto label_155ff8;
        case 0x155ffcu: goto label_155ffc;
        case 0x156000u: goto label_156000;
        case 0x156004u: goto label_156004;
        case 0x156008u: goto label_156008;
        case 0x15600cu: goto label_15600c;
        case 0x156010u: goto label_156010;
        case 0x156014u: goto label_156014;
        case 0x156018u: goto label_156018;
        case 0x15601cu: goto label_15601c;
        case 0x156020u: goto label_156020;
        case 0x156024u: goto label_156024;
        case 0x156028u: goto label_156028;
        case 0x15602cu: goto label_15602c;
        case 0x156030u: goto label_156030;
        case 0x156034u: goto label_156034;
        case 0x156038u: goto label_156038;
        case 0x15603cu: goto label_15603c;
        case 0x156040u: goto label_156040;
        case 0x156044u: goto label_156044;
        case 0x156048u: goto label_156048;
        case 0x15604cu: goto label_15604c;
        case 0x156050u: goto label_156050;
        case 0x156054u: goto label_156054;
        case 0x156058u: goto label_156058;
        case 0x15605cu: goto label_15605c;
        case 0x156060u: goto label_156060;
        case 0x156064u: goto label_156064;
        case 0x156068u: goto label_156068;
        case 0x15606cu: goto label_15606c;
        case 0x156070u: goto label_156070;
        case 0x156074u: goto label_156074;
        case 0x156078u: goto label_156078;
        case 0x15607cu: goto label_15607c;
        case 0x156080u: goto label_156080;
        case 0x156084u: goto label_156084;
        case 0x156088u: goto label_156088;
        case 0x15608cu: goto label_15608c;
        case 0x156090u: goto label_156090;
        case 0x156094u: goto label_156094;
        case 0x156098u: goto label_156098;
        case 0x15609cu: goto label_15609c;
        case 0x1560a0u: goto label_1560a0;
        case 0x1560a4u: goto label_1560a4;
        case 0x1560a8u: goto label_1560a8;
        case 0x1560acu: goto label_1560ac;
        case 0x1560b0u: goto label_1560b0;
        case 0x1560b4u: goto label_1560b4;
        case 0x1560b8u: goto label_1560b8;
        case 0x1560bcu: goto label_1560bc;
        case 0x1560c0u: goto label_1560c0;
        case 0x1560c4u: goto label_1560c4;
        case 0x1560c8u: goto label_1560c8;
        case 0x1560ccu: goto label_1560cc;
        case 0x1560d0u: goto label_1560d0;
        case 0x1560d4u: goto label_1560d4;
        case 0x1560d8u: goto label_1560d8;
        case 0x1560dcu: goto label_1560dc;
        case 0x1560e0u: goto label_1560e0;
        case 0x1560e4u: goto label_1560e4;
        case 0x1560e8u: goto label_1560e8;
        case 0x1560ecu: goto label_1560ec;
        case 0x1560f0u: goto label_1560f0;
        case 0x1560f4u: goto label_1560f4;
        case 0x1560f8u: goto label_1560f8;
        case 0x1560fcu: goto label_1560fc;
        case 0x156100u: goto label_156100;
        case 0x156104u: goto label_156104;
        case 0x156108u: goto label_156108;
        case 0x15610cu: goto label_15610c;
        case 0x156110u: goto label_156110;
        case 0x156114u: goto label_156114;
        case 0x156118u: goto label_156118;
        case 0x15611cu: goto label_15611c;
        case 0x156120u: goto label_156120;
        case 0x156124u: goto label_156124;
        case 0x156128u: goto label_156128;
        case 0x15612cu: goto label_15612c;
        case 0x156130u: goto label_156130;
        case 0x156134u: goto label_156134;
        case 0x156138u: goto label_156138;
        case 0x15613cu: goto label_15613c;
        case 0x156140u: goto label_156140;
        case 0x156144u: goto label_156144;
        case 0x156148u: goto label_156148;
        case 0x15614cu: goto label_15614c;
        case 0x156150u: goto label_156150;
        case 0x156154u: goto label_156154;
        case 0x156158u: goto label_156158;
        case 0x15615cu: goto label_15615c;
        case 0x156160u: goto label_156160;
        case 0x156164u: goto label_156164;
        case 0x156168u: goto label_156168;
        case 0x15616cu: goto label_15616c;
        case 0x156170u: goto label_156170;
        case 0x156174u: goto label_156174;
        case 0x156178u: goto label_156178;
        case 0x15617cu: goto label_15617c;
        case 0x156180u: goto label_156180;
        case 0x156184u: goto label_156184;
        case 0x156188u: goto label_156188;
        case 0x15618cu: goto label_15618c;
        case 0x156190u: goto label_156190;
        case 0x156194u: goto label_156194;
        case 0x156198u: goto label_156198;
        case 0x15619cu: goto label_15619c;
        case 0x1561a0u: goto label_1561a0;
        case 0x1561a4u: goto label_1561a4;
        case 0x1561a8u: goto label_1561a8;
        case 0x1561acu: goto label_1561ac;
        case 0x1561b0u: goto label_1561b0;
        case 0x1561b4u: goto label_1561b4;
        case 0x1561b8u: goto label_1561b8;
        case 0x1561bcu: goto label_1561bc;
        case 0x1561c0u: goto label_1561c0;
        case 0x1561c4u: goto label_1561c4;
        case 0x1561c8u: goto label_1561c8;
        case 0x1561ccu: goto label_1561cc;
        case 0x1561d0u: goto label_1561d0;
        case 0x1561d4u: goto label_1561d4;
        case 0x1561d8u: goto label_1561d8;
        case 0x1561dcu: goto label_1561dc;
        case 0x1561e0u: goto label_1561e0;
        case 0x1561e4u: goto label_1561e4;
        case 0x1561e8u: goto label_1561e8;
        case 0x1561ecu: goto label_1561ec;
        case 0x1561f0u: goto label_1561f0;
        case 0x1561f4u: goto label_1561f4;
        default: break;
    }

    ctx->pc = 0x155ed8u;

label_155ed8:
    // 0x155ed8: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x155ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_155edc:
    // 0x155edc: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x155edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_155ee0:
    // 0x155ee0: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x155ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_155ee4:
    // 0x155ee4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x155ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_155ee8:
    // 0x155ee8: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x155ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
label_155eec:
    // 0x155eec: 0x27b60010  addiu       $s6, $sp, 0x10
    ctx->pc = 0x155eecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_155ef0:
    // 0x155ef0: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x155ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
label_155ef4:
    // 0x155ef4: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x155ef4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_155ef8:
    // 0x155ef8: 0xe7b70208  swc1        $f23, 0x208($sp)
    ctx->pc = 0x155ef8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_155efc:
    // 0x155efc: 0x30fe00ff  andi        $fp, $a3, 0xFF
    ctx->pc = 0x155efcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_155f00:
    // 0x155f00: 0xe7b60200  swc1        $f22, 0x200($sp)
    ctx->pc = 0x155f00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_155f04:
    // 0x155f04: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x155f04u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
label_155f08:
    // 0x155f08: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x155f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_155f0c:
    // 0x155f0c: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x155f0cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
label_155f10:
    // 0x155f10: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x155f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_155f14:
    // 0x155f14: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x155f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_155f18:
    // 0x155f18: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x155f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_155f1c:
    // 0x155f1c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_155f20:
    // 0x155f20: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x155f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_155f24:
    // 0x155f24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f28:
    // 0x155f28: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x155f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_155f2c:
    // 0x155f2c: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x155f2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_155f30:
    // 0x155f30: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x155f30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_155f34:
    // 0x155f34: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x155f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_155f38:
    // 0x155f38: 0xafa80140  sw          $t0, 0x140($sp)
    ctx->pc = 0x155f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 8));
label_155f3c:
    // 0x155f3c: 0xafa90144  sw          $t1, 0x144($sp)
    ctx->pc = 0x155f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 9));
label_155f40:
    // 0x155f40: 0xafaa0148  sw          $t2, 0x148($sp)
    ctx->pc = 0x155f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 10));
label_155f44:
    // 0x155f44: 0xc0c493d  jal         func_3124F4
label_155f48:
    if (ctx->pc == 0x155F48u) {
        ctx->pc = 0x155F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F44u;
        // 0x155f48: 0xafab014c  sw          $t3, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155F4Cu;
        goto label_155f4c;
    }
    ctx->pc = 0x155F44u;
    SET_GPR_U32(ctx, 31, 0x155F4Cu);
    ctx->pc = 0x155F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F44u;
    // 0x155f48: 0xafab014c  sw          $t3, 0x14C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155F44u, 0x155F4Cu)) {
        return;
    }
    ctx->pc = 0x155F4Cu;
label_155f4c:
    // 0x155f4c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x155f4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_155f50:
    // 0x155f50: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x155f50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_155f54:
    // 0x155f54: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x155f54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_155f58:
    // 0x155f58: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x155f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_155f5c:
    // 0x155f5c: 0x26310fd8  addiu       $s1, $s1, 0xFD8
    ctx->pc = 0x155f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
label_155f60:
    // 0x155f60: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x155f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_155f64:
    // 0x155f64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x155f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_155f68:
    // 0x155f68: 0x40f809  jalr        $v0
label_155f6c:
    if (ctx->pc == 0x155F6Cu) {
        ctx->pc = 0x155F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F68u;
        // 0x155f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155F70u;
        goto label_155f70;
    }
    ctx->pc = 0x155F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x155F70u);
        ctx->pc = 0x155F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F68u;
        // 0x155f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x155F68u, 0x155F70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x155F70u;
label_155f70:
    // 0x155f70: 0x27b50110  addiu       $s5, $sp, 0x110
    ctx->pc = 0x155f70u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_155f74:
    // 0x155f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x155f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155f78:
    // 0x155f78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x155f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_155f7c:
    // 0x155f7c: 0xc0c493d  jal         func_3124F4
label_155f80:
    if (ctx->pc == 0x155F80u) {
        ctx->pc = 0x155F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F7Cu;
        // 0x155f80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x155F84u;
        goto label_155f84;
    }
    ctx->pc = 0x155F7Cu;
    SET_GPR_U32(ctx, 31, 0x155F84u);
    ctx->pc = 0x155F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155F7Cu;
    // 0x155f80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x155F7Cu, 0x155F84u)) {
        return;
    }
    ctx->pc = 0x155F84u;
label_155f84:
    // 0x155f84: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x155f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_155f88:
    // 0x155f88: 0x108100  sll         $s0, $s0, 4
    ctx->pc = 0x155f88u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_155f8c:
    // 0x155f8c: 0x24632a08  addiu       $v1, $v1, 0x2A08
    ctx->pc = 0x155f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10760));
label_155f90:
    // 0x155f90: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x155f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_155f94:
    // 0x155f94: 0x2474000c  addiu       $s4, $v1, 0xC
    ctx->pc = 0x155f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_155f98:
    // 0x155f98: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x155f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_155f9c:
    // 0x155f9c: 0x24730008  addiu       $s3, $v1, 0x8
    ctx->pc = 0x155f9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_155fa0:
    // 0x155fa0: 0x214a021  addu        $s4, $s0, $s4
    ctx->pc = 0x155fa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_155fa4:
    // 0x155fa4: 0x2129021  addu        $s2, $s0, $s2
    ctx->pc = 0x155fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_155fa8:
    // 0x155fa8: 0x2139821  addu        $s3, $s0, $s3
    ctx->pc = 0x155fa8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_155fac:
    // 0x155fac: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x155facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_155fb0:
    // 0x155fb0: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x155fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_155fb4:
    // 0x155fb4: 0xc4500018  lwc1        $f16, 0x18($v0)
    ctx->pc = 0x155fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_155fb8:
    // 0x155fb8: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x155fb8u;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
label_155fbc:
    // 0x155fbc: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x155fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_155fc0:
    // 0x155fc0: 0x2402008b  addiu       $v0, $zero, 0x8B
    ctx->pc = 0x155fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 139));
label_155fc4:
    // 0x155fc4: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x155fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_155fc8:
    // 0x155fc8: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x155fc8u;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_155fcc:
    // 0x155fcc: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x155fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_155fd0:
    // 0x155fd0: 0x4600a4c6  mov.s       $f19, $f20
    ctx->pc = 0x155fd0u;
    ctx->f[19] = FPU_MOV_S(ctx->f[20]);
label_155fd4:
    // 0x155fd4: 0xc68f0000  lwc1        $f15, 0x0($s4)
    ctx->pc = 0x155fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_155fd8:
    // 0x155fd8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x155fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_155fdc:
    // 0x155fdc: 0xa3a20113  sb          $v0, 0x113($sp)
    ctx->pc = 0x155fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
label_155fe0:
    // 0x155fe0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x155fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_155fe4:
    // 0x155fe4: 0xe7b50000  swc1        $f21, 0x0($sp)
    ctx->pc = 0x155fe4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_155fe8:
    // 0x155fe8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_155fec:
    // 0x155fec: 0xc06ce2a  jal         func_1B38A8
label_155ff0:
    if (ctx->pc == 0x155FF0u) {
        ctx->pc = 0x155FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FECu;
        // 0x155ff0: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x155FF4u;
        goto label_155ff4;
    }
    ctx->pc = 0x155FECu;
    SET_GPR_U32(ctx, 31, 0x155FF4u);
    ctx->pc = 0x155FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FECu;
    // 0x155ff0: 0xe7b50008  swc1        $f21, 0x8($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x155FECu, 0x155FF4u)) {
        return;
    }
    ctx->pc = 0x155FF4u;
label_155ff4:
    // 0x155ff4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x155ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_155ff8:
    // 0x155ff8: 0xc06cff8  jal         func_1B3FE0
label_155ffc:
    if (ctx->pc == 0x155FFCu) {
        ctx->pc = 0x155FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155FF8u;
        // 0x155ffc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156000u;
        goto label_156000;
    }
    ctx->pc = 0x155FF8u;
    SET_GPR_U32(ctx, 31, 0x156000u);
    ctx->pc = 0x155FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155FF8u;
    // 0x155ffc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x155FF8u, 0x156000u)) {
        return;
    }
    ctx->pc = 0x156000u;
label_156000:
    // 0x156000: 0x27b50120  addiu       $s5, $sp, 0x120
    ctx->pc = 0x156000u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_156004:
    // 0x156004: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x156004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_156008:
    // 0x156008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x156008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_15600c:
    // 0x15600c: 0xc0c493d  jal         func_3124F4
label_156010:
    if (ctx->pc == 0x156010u) {
        ctx->pc = 0x156010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15600Cu;
        // 0x156010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156014u;
        goto label_156014;
    }
    ctx->pc = 0x15600Cu;
    SET_GPR_U32(ctx, 31, 0x156014u);
    ctx->pc = 0x156010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15600Cu;
    // 0x156010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15600Cu, 0x156014u)) {
        return;
    }
    ctx->pc = 0x156014u;
label_156014:
    // 0x156014: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x156014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_156018:
    // 0x156018: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x156018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_15601c:
    // 0x15601c: 0xa3a30122  sb          $v1, 0x122($sp)
    ctx->pc = 0x15601cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 290), (uint8_t)GPR_U32(ctx, 3));
label_156020:
    // 0x156020: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x156020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_156024:
    // 0x156024: 0xa3a30120  sb          $v1, 0x120($sp)
    ctx->pc = 0x156024u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 288), (uint8_t)GPR_U32(ctx, 3));
label_156028:
    // 0x156028: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x156028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15602c:
    // 0x15602c: 0xa3a30121  sb          $v1, 0x121($sp)
    ctx->pc = 0x15602cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 289), (uint8_t)GPR_U32(ctx, 3));
label_156030:
    // 0x156030: 0x40f809  jalr        $v0
label_156034:
    if (ctx->pc == 0x156034u) {
        ctx->pc = 0x156034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156030u;
        // 0x156034: 0xa3be0123  sb          $fp, 0x123($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 291), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156038u;
        goto label_156038;
    }
    ctx->pc = 0x156030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x156038u);
        ctx->pc = 0x156034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156030u;
        // 0x156034: 0xa3be0123  sb          $fp, 0x123($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 291), (uint8_t)GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156030u, 0x156038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x156038u;
label_156038:
    // 0x156038: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x156038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_15603c:
    // 0x15603c: 0x4600a486  mov.s       $f18, $f20
    ctx->pc = 0x15603cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[20]);
label_156040:
    // 0x156040: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x156040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_156044:
    // 0x156044: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x156044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_156048:
    // 0x156048: 0xc4700018  lwc1        $f16, 0x18($v1)
    ctx->pc = 0x156048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_15604c:
    // 0x15604c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x15604cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_156050:
    // 0x156050: 0xc64d0000  lwc1        $f13, 0x0($s2)
    ctx->pc = 0x156050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_156054:
    // 0x156054: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x156054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_156058:
    // 0x156058: 0xc66e0000  lwc1        $f14, 0x0($s3)
    ctx->pc = 0x156058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_15605c:
    // 0x15605c: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x15605cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
label_156060:
    // 0x156060: 0xc68f0000  lwc1        $f15, 0x0($s4)
    ctx->pc = 0x156060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_156064:
    // 0x156064: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x156064u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
label_156068:
    // 0x156068: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x156068u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_15606c:
    // 0x15606c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15606cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_156070:
    // 0x156070: 0xc06ce2a  jal         func_1B38A8
label_156074:
    if (ctx->pc == 0x156074u) {
        ctx->pc = 0x156074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156070u;
        // 0x156074: 0xe7b50000  swc1        $f21, 0x0($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x156078u;
        goto label_156078;
    }
    ctx->pc = 0x156070u;
    SET_GPR_U32(ctx, 31, 0x156078u);
    ctx->pc = 0x156074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156070u;
    // 0x156074: 0xe7b50000  swc1        $f21, 0x0($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x156070u, 0x156078u)) {
        return;
    }
    ctx->pc = 0x156078u;
label_156078:
    // 0x156078: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x156078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_15607c:
    // 0x15607c: 0xc06cff8  jal         func_1B3FE0
label_156080:
    if (ctx->pc == 0x156080u) {
        ctx->pc = 0x156080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15607Cu;
        // 0x156080: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156084u;
        goto label_156084;
    }
    ctx->pc = 0x15607Cu;
    SET_GPR_U32(ctx, 31, 0x156084u);
    ctx->pc = 0x156080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15607Cu;
    // 0x156080: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x15607Cu, 0x156084u)) {
        return;
    }
    ctx->pc = 0x156084u;
label_156084:
    // 0x156084: 0x8fa40210  lw          $a0, 0x210($sp)
    ctx->pc = 0x156084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 528)));
label_156088:
    // 0x156088: 0x5080004b  beql        $a0, $zero, . + 4 + (0x4B << 2)
label_15608c:
    if (ctx->pc == 0x15608Cu) {
        ctx->pc = 0x15608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156088u;
        // 0x15608c: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156090u;
        goto label_156090;
    }
    ctx->pc = 0x156088u;
    {
        const bool branch_taken_0x156088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x156088) {
            ctx->pc = 0x15608Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156088u;
            // 0x15608c: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1561B8u;
            goto label_1561b8;
        }
    }
    ctx->pc = 0x156090u;
label_156090:
    // 0x156090: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x156090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_156094:
    // 0x156094: 0x54a00048  bnel        $a1, $zero, . + 4 + (0x48 << 2)
label_156098:
    if (ctx->pc == 0x156098u) {
        ctx->pc = 0x156098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156094u;
        // 0x156098: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15609Cu;
        goto label_15609c;
    }
    ctx->pc = 0x156094u;
    {
        const bool branch_taken_0x156094 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x156094) {
            ctx->pc = 0x156098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x156094u;
            // 0x156098: 0x7bb001e0  lq          $s0, 0x1E0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1561B8u;
            goto label_1561b8;
        }
    }
    ctx->pc = 0x15609Cu;
label_15609c:
    // 0x15609c: 0x8ba20123  lwl         $v0, 0x123($sp)
    ctx->pc = 0x15609cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 291); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_1560a0:
    // 0x1560a0: 0x9ba20120  lwr         $v0, 0x120($sp)
    ctx->pc = 0x1560a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_1560a4:
    // 0x1560a4: 0xaba20133  swl         $v0, 0x133($sp)
    ctx->pc = 0x1560a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 307); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1560a8:
    // 0x1560a8: 0xbba20130  swr         $v0, 0x130($sp)
    ctx->pc = 0x1560a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1560ac:
    // 0x1560ac: 0x8fa2014c  lw          $v0, 0x14C($sp)
    ctx->pc = 0x1560acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_1560b0:
    // 0x1560b0: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_1560b4:
    if (ctx->pc == 0x1560B4u) {
        ctx->pc = 0x1560B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560B0u;
        // 0x1560b4: 0x240200ec  addiu       $v0, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560B8u;
        goto label_1560b8;
    }
    ctx->pc = 0x1560B0u;
    {
        const bool branch_taken_0x1560b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1560B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560B0u;
        // 0x1560b4: 0x240200ec  addiu       $v0, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560b0) {
            ctx->pc = 0x156134u;
            goto label_156134;
        }
    }
    ctx->pc = 0x1560B8u;
label_1560b8:
    // 0x1560b8: 0x3c0142a0  lui         $at, 0x42A0
    ctx->pc = 0x1560b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17056 << 16));
label_1560bc:
    // 0x1560bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1560bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1560c0:
    // 0x1560c0: 0x0  nop
    ctx->pc = 0x1560c0u;
    // NOP
label_1560c4:
    // 0x1560c4: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x1560c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1560c8:
    // 0x1560c8: 0x0  nop
    ctx->pc = 0x1560c8u;
    // NOP
label_1560cc:
    // 0x1560cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1560d0:
    if (ctx->pc == 0x1560D0u) {
        ctx->pc = 0x1560D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560CCu;
        // 0x1560d0: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560D4u;
        goto label_1560d4;
    }
    ctx->pc = 0x1560CCu;
    {
        const bool branch_taken_0x1560cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1560D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560CCu;
        // 0x1560d0: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560cc) {
            ctx->pc = 0x1560E8u;
            goto label_1560e8;
        }
    }
    ctx->pc = 0x1560D4u;
label_1560d4:
    // 0x1560d4: 0x240300cc  addiu       $v1, $zero, 0xCC
    ctx->pc = 0x1560d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_1560d8:
    // 0x1560d8: 0xa3a20130  sb          $v0, 0x130($sp)
    ctx->pc = 0x1560d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 2));
label_1560dc:
    // 0x1560dc: 0xa3a30131  sb          $v1, 0x131($sp)
    ctx->pc = 0x1560dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 305), (uint8_t)GPR_U32(ctx, 3));
label_1560e0:
    // 0x1560e0: 0x10000019  b           . + 4 + (0x19 << 2)
label_1560e4:
    if (ctx->pc == 0x1560E4u) {
        ctx->pc = 0x1560E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560E0u;
        // 0x1560e4: 0xa3a00132  sb          $zero, 0x132($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 306), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560E8u;
        goto label_1560e8;
    }
    ctx->pc = 0x1560E0u;
    {
        const bool branch_taken_0x1560e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1560E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560E0u;
        // 0x1560e4: 0xa3a00132  sb          $zero, 0x132($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 306), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560e0) {
            ctx->pc = 0x156148u;
            goto label_156148;
        }
    }
    ctx->pc = 0x1560E8u;
label_1560e8:
    // 0x1560e8: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x1560e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1560ec:
    // 0x1560ec: 0x0  nop
    ctx->pc = 0x1560ecu;
    // NOP
label_1560f0:
    // 0x1560f0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_1560f4:
    if (ctx->pc == 0x1560F4u) {
        ctx->pc = 0x1560F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560F0u;
        // 0x1560f4: 0x24030035  addiu       $v1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1560F8u;
        goto label_1560f8;
    }
    ctx->pc = 0x1560F0u;
    {
        const bool branch_taken_0x1560f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1560F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1560F0u;
        // 0x1560f4: 0x24030035  addiu       $v1, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1560f0) {
            ctx->pc = 0x156120u;
            goto label_156120;
        }
    }
    ctx->pc = 0x1560F8u;
label_1560f8:
    // 0x1560f8: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x1560f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
label_1560fc:
    // 0x1560fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1560fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156100:
    // 0x156100: 0x0  nop
    ctx->pc = 0x156100u;
    // NOP
label_156104:
    // 0x156104: 0x46160036  c.le.s      $f0, $f22
    ctx->pc = 0x156104u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_156108:
    // 0x156108: 0x0  nop
    ctx->pc = 0x156108u;
    // NOP
label_15610c:
    // 0x15610c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_156110:
    if (ctx->pc == 0x156110u) {
        ctx->pc = 0x156110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15610Cu;
        // 0x156110: 0x240200b7  addiu       $v0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156114u;
        goto label_156114;
    }
    ctx->pc = 0x15610Cu;
    {
        const bool branch_taken_0x15610c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x156110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15610Cu;
        // 0x156110: 0x240200b7  addiu       $v0, $zero, 0xB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15610c) {
            ctx->pc = 0x156120u;
            goto label_156120;
        }
    }
    ctx->pc = 0x156114u;
label_156114:
    // 0x156114: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x156114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_156118:
    // 0x156118: 0x10000008  b           . + 4 + (0x8 << 2)
label_15611c:
    if (ctx->pc == 0x15611Cu) {
        ctx->pc = 0x15611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156118u;
        // 0x15611c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156120u;
        goto label_156120;
    }
    ctx->pc = 0x156118u;
    {
        const bool branch_taken_0x156118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156118u;
        // 0x15611c: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x156118) {
            ctx->pc = 0x15613Cu;
            goto label_15613c;
        }
    }
    ctx->pc = 0x156120u;
label_156120:
    // 0x156120: 0x240200a6  addiu       $v0, $zero, 0xA6
    ctx->pc = 0x156120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_156124:
    // 0x156124: 0xa3a20130  sb          $v0, 0x130($sp)
    ctx->pc = 0x156124u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 2));
label_156128:
    // 0x156128: 0xa3a30132  sb          $v1, 0x132($sp)
    ctx->pc = 0x156128u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 306), (uint8_t)GPR_U32(ctx, 3));
label_15612c:
    // 0x15612c: 0x10000006  b           . + 4 + (0x6 << 2)
label_156130:
    if (ctx->pc == 0x156130u) {
        ctx->pc = 0x156130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15612Cu;
        // 0x156130: 0xa3a30131  sb          $v1, 0x131($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 305), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x156134u;
        goto label_156134;
    }
    ctx->pc = 0x15612Cu;
    {
        const bool branch_taken_0x15612c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x156130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15612Cu;
        // 0x156130: 0xa3a30131  sb          $v1, 0x131($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 305), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15612c) {
            ctx->pc = 0x156148u;
            goto label_156148;
        }
    }
    ctx->pc = 0x156134u;
label_156134:
    // 0x156134: 0x240300d1  addiu       $v1, $zero, 0xD1
    ctx->pc = 0x156134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 209));
label_156138:
    // 0x156138: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x156138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_15613c:
    // 0x15613c: 0xa3a20130  sb          $v0, 0x130($sp)
    ctx->pc = 0x15613cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 2));
label_156140:
    // 0x156140: 0xa3a30131  sb          $v1, 0x131($sp)
    ctx->pc = 0x156140u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 305), (uint8_t)GPR_U32(ctx, 3));
label_156144:
    // 0x156144: 0xa3a40132  sb          $a0, 0x132($sp)
    ctx->pc = 0x156144u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 306), (uint8_t)GPR_U32(ctx, 4));
label_156148:
    // 0x156148: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x156148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_15614c:
    // 0x15614c: 0x8fa50144  lw          $a1, 0x144($sp)
    ctx->pc = 0x15614cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 324)));
label_156150:
    // 0x156150: 0x8fa40148  lw          $a0, 0x148($sp)
    ctx->pc = 0x156150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_156154:
    // 0x156154: 0xc06d004  jal         func_1B4010
label_156158:
    if (ctx->pc == 0x156158u) {
        ctx->pc = 0x156158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156154u;
        // 0x156158: 0xa3200a  movz        $a0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15615Cu;
        goto label_15615c;
    }
    ctx->pc = 0x156154u;
    SET_GPR_U32(ctx, 31, 0x15615Cu);
    ctx->pc = 0x156158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x156154u;
    // 0x156158: 0xa3200a  movz        $a0, $a1, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4010u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4010u, 0x156154u, 0x15615Cu)) {
        return;
    }
    ctx->pc = 0x15615Cu;
label_15615c:
    // 0x15615c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x15615cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_156160:
    // 0x156160: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x156160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_156164:
    // 0x156164: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x156164u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_156168:
    // 0x156168: 0x2462f028  addiu       $v0, $v1, -0xFD8
    ctx->pc = 0x156168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963240));
label_15616c:
    // 0x15616c: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x15616cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_156170:
    // 0x156170: 0x3c050073  lui         $a1, 0x73
    ctx->pc = 0x156170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)115 << 16));
label_156174:
    // 0x156174: 0xc46cf028  lwc1        $f12, -0xFD8($v1)
    ctx->pc = 0x156174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294963240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_156178:
    // 0x156178: 0xc4b00fe0  lwc1        $f16, 0xFE0($a1)
    ctx->pc = 0x156178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_15617c:
    // 0x15617c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x15617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_156180:
    // 0x156180: 0xc44f000c  lwc1        $f15, 0xC($v0)
    ctx->pc = 0x156180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_156184:
    // 0x156184: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x156184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_156188:
    // 0x156188: 0xc44d0004  lwc1        $f13, 0x4($v0)
    ctx->pc = 0x156188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_15618c:
    // 0x15618c: 0x4600bc46  mov.s       $f17, $f23
    ctx->pc = 0x15618cu;
    ctx->f[17] = FPU_MOV_S(ctx->f[23]);
label_156190:
    // 0x156190: 0xc44e0008  lwc1        $f14, 0x8($v0)
    ctx->pc = 0x156190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_156194:
    // 0x156194: 0x460094c6  mov.s       $f19, $f18
    ctx->pc = 0x156194u;
    ctx->f[19] = FPU_MOV_S(ctx->f[18]);
label_156198:
    // 0x156198: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x156198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15619c:
    // 0x15619c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x15619cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1561a0:
    // 0x1561a0: 0xc06ce2a  jal         func_1B38A8
label_1561a4:
    if (ctx->pc == 0x1561A4u) {
        ctx->pc = 0x1561A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561A0u;
        // 0x1561a4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561A8u;
        goto label_1561a8;
    }
    ctx->pc = 0x1561A0u;
    SET_GPR_U32(ctx, 31, 0x1561A8u);
    ctx->pc = 0x1561A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561A0u;
    // 0x1561a4: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1561A0u, 0x1561A8u)) {
        return;
    }
    ctx->pc = 0x1561A8u;
label_1561a8:
    // 0x1561a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1561a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1561ac:
    // 0x1561ac: 0xc06cff8  jal         func_1B3FE0
label_1561b0:
    if (ctx->pc == 0x1561B0u) {
        ctx->pc = 0x1561B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561ACu;
        // 0x1561b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561B4u;
        goto label_1561b4;
    }
    ctx->pc = 0x1561ACu;
    SET_GPR_U32(ctx, 31, 0x1561B4u);
    ctx->pc = 0x1561B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1561ACu;
    // 0x1561b0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1561ACu, 0x1561B4u)) {
        return;
    }
    ctx->pc = 0x1561B4u;
label_1561b4:
    // 0x1561b4: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x1561b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1561b8:
    // 0x1561b8: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x1561b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1561bc:
    // 0x1561bc: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x1561bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1561c0:
    // 0x1561c0: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x1561c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1561c4:
    // 0x1561c4: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x1561c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1561c8:
    // 0x1561c8: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x1561c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1561cc:
    // 0x1561cc: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x1561ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1561d0:
    // 0x1561d0: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x1561d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1561d4:
    // 0x1561d4: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x1561d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1561d8:
    // 0x1561d8: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x1561d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1561dc:
    // 0x1561dc: 0xc7b70208  lwc1        $f23, 0x208($sp)
    ctx->pc = 0x1561dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1561e0:
    // 0x1561e0: 0xc7b60200  lwc1        $f22, 0x200($sp)
    ctx->pc = 0x1561e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1561e4:
    // 0x1561e4: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x1561e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1561e8:
    // 0x1561e8: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x1561e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1561ec:
    // 0x1561ec: 0x3e00008  jr          $ra
label_1561f0:
    if (ctx->pc == 0x1561F0u) {
        ctx->pc = 0x1561F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561ECu;
        // 0x1561f0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1561F4u;
        goto label_1561f4;
    }
    ctx->pc = 0x1561ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1561F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1561ECu;
        // 0x1561f0: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1561ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1561F4u;
label_1561f4:
    // 0x1561f4: 0x0  nop
    ctx->pc = 0x1561f4u;
    // NOP
    ctx->pc = 0x1561f8u;
}
