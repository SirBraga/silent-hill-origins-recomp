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

// Function: sub_00165EF0
// Address: 0x165ef0 - 0x166278
void sub_00165EF0_0x165ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165EF0_0x165ef0");
#endif

    switch (ctx->pc) {
        case 0x165f68u: goto label_165f68;
        case 0x165f70u: goto label_165f70;
        case 0x165f9cu: goto label_165f9c;
        case 0x165fa4u: goto label_165fa4;
        case 0x165fb4u: goto label_165fb4;
        case 0x166004u: goto label_166004;
        case 0x166018u: goto label_166018;
        case 0x166030u: goto label_166030;
        case 0x166038u: goto label_166038;
        case 0x166040u: goto label_166040;
        case 0x166048u: goto label_166048;
        case 0x166058u: goto label_166058;
        case 0x166060u: goto label_166060;
        case 0x166080u: goto label_166080;
        case 0x166090u: goto label_166090;
        case 0x16609cu: goto label_16609c;
        case 0x1660b8u: goto label_1660b8;
        case 0x16610cu: goto label_16610c;
        case 0x166120u: goto label_166120;
        case 0x166140u: goto label_166140;
        case 0x166180u: goto label_166180;
        case 0x16618cu: goto label_16618c;
        case 0x1661bcu: goto label_1661bc;
        case 0x1661dcu: goto label_1661dc;
        case 0x1661e8u: goto label_1661e8;
        case 0x1661f0u: goto label_1661f0;
        case 0x166208u: goto label_166208;
        case 0x16623cu: goto label_16623c;
        case 0x166254u: goto label_166254;
        default: break;
    }

    ctx->pc = 0x165ef0u;

    // 0x165ef0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x165ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x165ef4: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x165ef4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x165ef8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x165ef8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x165efc: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x165efcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x165f00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165f04: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x165f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x165f08: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x165f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x165f0c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x165f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x165f10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x165f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f14: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x165f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x165f18: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x165f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x165f1c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x165f1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165f20: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x165f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x165f24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x165f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x165f28: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x165f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x165f2c: 0xe6340004  swc1        $f20, 0x4($s1)
    ctx->pc = 0x165f2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x165f30: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x165f30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x165f34: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x165f34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x165f38: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x165f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
    // 0x165f3c: 0xe6340054  swc1        $f20, 0x54($s1)
    ctx->pc = 0x165f3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
    // 0x165f40: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x165f40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x165f44: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x165f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x165f48: 0xae20003c  sw          $zero, 0x3C($s1)
    ctx->pc = 0x165f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 0));
    // 0x165f4c: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x165f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
    // 0x165f50: 0xae20005c  sw          $zero, 0x5C($s1)
    ctx->pc = 0x165f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 0));
    // 0x165f54: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x165f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
    // 0x165f58: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x165f58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x165f5c: 0xe6200010  swc1        $f0, 0x10($s1)
    ctx->pc = 0x165f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
    // 0x165f60: 0xc0599be  jal         func_1666F8
    ctx->pc = 0x165F60u;
    SET_GPR_U32(ctx, 31, 0x165F68u);
    ctx->pc = 0x165F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F60u;
    // 0x165f64: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1666F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1666F8u, 0x165F60u, 0x165F68u)) {
        return;
    }
    ctx->pc = 0x165F68u;
label_165f68:
    // 0x165f68: 0xc0954b8  jal         func_2552E0
    ctx->pc = 0x165F68u;
    SET_GPR_U32(ctx, 31, 0x165F70u);
    ctx->pc = 0x2552E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2552E0u, 0x165F68u, 0x165F70u)) {
        return;
    }
    ctx->pc = 0x165F70u;
label_165f70:
    // 0x165f70: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x165f70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x165f74: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x165f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x165f78: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x165f78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x165f7c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x165f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165f80: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x165f80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x165f84: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x165f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165f88: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x165f88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x165f8c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x165f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165f90: 0xe4540028  swc1        $f20, 0x28($v0)
    ctx->pc = 0x165f90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x165f94: 0xc097b18  jal         func_25EC60
    ctx->pc = 0x165F94u;
    SET_GPR_U32(ctx, 31, 0x165F9Cu);
    ctx->pc = 0x165F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165F94u;
    // 0x165f98: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EC60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EC60u, 0x165F94u, 0x165F9Cu)) {
        return;
    }
    ctx->pc = 0x165F9Cu;
label_165f9c:
    // 0x165f9c: 0xc089892  jal         func_226248
    ctx->pc = 0x165F9Cu;
    SET_GPR_U32(ctx, 31, 0x165FA4u);
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x165F9Cu, 0x165FA4u)) {
        return;
    }
    ctx->pc = 0x165FA4u;
label_165fa4:
    // 0x165fa4: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x165fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x165fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165fac: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x165FACu;
    SET_GPR_U32(ctx, 31, 0x165FB4u);
    ctx->pc = 0x165FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FACu;
    // 0x165fb0: 0xae22002c  sw          $v0, 0x2C($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x165FACu, 0x165FB4u)) {
        return;
    }
    ctx->pc = 0x165FB4u;
label_165fb4:
    // 0x165fb4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x165fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x165fb8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x165fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x165fbc: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x165fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x165fc0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x165fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165fc4: 0x3c020016  lui         $v0, 0x16
    ctx->pc = 0x165fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)22 << 16));
    // 0x165fc8: 0x24427138  addiu       $v0, $v0, 0x7138
    ctx->pc = 0x165fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28984));
    // 0x165fcc: 0xac820048  sw          $v0, 0x48($a0)
    ctx->pc = 0x165fccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 2));
    // 0x165fd0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x165fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x165fd4: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x165fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x165fd8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165FD8u;
    {
        const bool branch_taken_0x165fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x165FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165FD8u;
        // 0x165fdc: 0x3c020025  lui         $v0, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165fd8) {
            ctx->pc = 0x165FE8u;
            goto label_165fe8;
        }
    }
    ctx->pc = 0x165FE0u;
    // 0x165fe0: 0x244244b8  addiu       $v0, $v0, 0x44B8
    ctx->pc = 0x165fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17592));
    // 0x165fe4: 0xac620048  sw          $v0, 0x48($v1)
    ctx->pc = 0x165fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 2));
label_165fe8:
    // 0x165fe8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x165fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x165fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x165fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x165ff0: 0x8c628670  lw          $v0, -0x7990($v1)
    ctx->pc = 0x165ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338670u));
    // 0x165ff4: 0xae22006c  sw          $v0, 0x6C($s1)
    ctx->pc = 0x165ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 2));
    // 0x165ff8: 0xac718670  sw          $s1, -0x7990($v1)
    ctx->pc = 0x165ff8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x338670u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338670u, _value); } while (0);
    // 0x165ffc: 0xc081be4  jal         func_206F90
    ctx->pc = 0x165FFCu;
    SET_GPR_U32(ctx, 31, 0x166004u);
    ctx->pc = 0x166000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x165FFCu;
    // 0x166000: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x165FFCu, 0x166004u)) {
        return;
    }
    ctx->pc = 0x166004u;
label_166004:
    // 0x166004: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x166004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x166008: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x166008u;
    {
        const bool branch_taken_0x166008 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16600Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166008u;
        // 0x16600c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166008) {
            ctx->pc = 0x166038u;
            goto label_166038;
        }
    }
    ctx->pc = 0x166010u;
    // 0x166010: 0xc081be4  jal         func_206F90
    ctx->pc = 0x166010u;
    SET_GPR_U32(ctx, 31, 0x166018u);
    ctx->pc = 0x206F90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206F90u, 0x166010u, 0x166018u)) {
        return;
    }
    ctx->pc = 0x166018u;
label_166018:
    // 0x166018: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x166018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x16601c: 0x3c050016  lui         $a1, 0x16
    ctx->pc = 0x16601cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)22 << 16));
    // 0x166020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x166020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166024: 0x24a56fe0  addiu       $a1, $a1, 0x6FE0
    ctx->pc = 0x166024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28640));
    // 0x166028: 0xc09545a  jal         func_255168
    ctx->pc = 0x166028u;
    SET_GPR_U32(ctx, 31, 0x166030u);
    ctx->pc = 0x16602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166028u;
    // 0x16602c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x166028u, 0x166030u)) {
        return;
    }
    ctx->pc = 0x166030u;
label_166030:
    // 0x166030: 0xc0940f4  jal         func_2503D0
    ctx->pc = 0x166030u;
    SET_GPR_U32(ctx, 31, 0x166038u);
    ctx->pc = 0x166034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166030u;
    // 0x166034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2503D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2503D0u, 0x166030u, 0x166038u)) {
        return;
    }
    ctx->pc = 0x166038u;
label_166038:
    // 0x166038: 0xc08949c  jal         func_225270
    ctx->pc = 0x166038u;
    SET_GPR_U32(ctx, 31, 0x166040u);
    ctx->pc = 0x225270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225270u, 0x166038u, 0x166040u)) {
        return;
    }
    ctx->pc = 0x166040u;
label_166040:
    // 0x166040: 0xc089892  jal         func_226248
    ctx->pc = 0x166040u;
    SET_GPR_U32(ctx, 31, 0x166048u);
    ctx->pc = 0x166044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166040u;
    // 0x166044: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x166040u, 0x166048u)) {
        return;
    }
    ctx->pc = 0x166048u;
label_166048:
    // 0x166048: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x166048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x16604c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16604cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166050: 0xc08ad6a  jal         func_22B5A8
    ctx->pc = 0x166050u;
    SET_GPR_U32(ctx, 31, 0x166058u);
    ctx->pc = 0x166054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166050u;
    // 0x166054: 0xae220034  sw          $v0, 0x34($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x166050u, 0x166058u)) {
        return;
    }
    ctx->pc = 0x166058u;
label_166058:
    // 0x166058: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x166058u;
    SET_GPR_U32(ctx, 31, 0x166060u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x166058u, 0x166060u)) {
        return;
    }
    ctx->pc = 0x166060u;
label_166060:
    // 0x166060: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x166060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x166064: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x166064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x166068: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x166068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x16606c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x16606cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x166070: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x166070u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x166074: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x166074u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166078: 0xc0893bc  jal         func_224EF0
    ctx->pc = 0x166078u;
    SET_GPR_U32(ctx, 31, 0x166080u);
    ctx->pc = 0x16607Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166078u;
    // 0x16607c: 0xae230040  sw          $v1, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224EF0u, 0x166078u, 0x166080u)) {
        return;
    }
    ctx->pc = 0x166080u;
label_166080:
    // 0x166080: 0x3c01437a  lui         $at, 0x437A
    ctx->pc = 0x166080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17274 << 16));
    // 0x166084: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x166084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x166088: 0xc0893cc  jal         func_224F30
    ctx->pc = 0x166088u;
    SET_GPR_U32(ctx, 31, 0x166090u);
    ctx->pc = 0x16608Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166088u;
    // 0x16608c: 0x8e240028  lw          $a0, 0x28($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224F30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224F30u, 0x166088u, 0x166090u)) {
        return;
    }
    ctx->pc = 0x166090u;
label_166090:
    // 0x166090: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x166090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x166094: 0xc089436  jal         func_2250D8
    ctx->pc = 0x166094u;
    SET_GPR_U32(ctx, 31, 0x16609Cu);
    ctx->pc = 0x166098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166094u;
    // 0x166098: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2250D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2250D8u, 0x166094u, 0x16609Cu)) {
        return;
    }
    ctx->pc = 0x16609Cu;
label_16609c:
    // 0x16609c: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x16609cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x1660a0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1660a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1660a4: 0x8c628678  lw          $v0, -0x7988($v1)
    ctx->pc = 0x1660a4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338678u));
    // 0x1660a8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1660A8u;
    {
        const bool branch_taken_0x1660a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660A8u;
        // 0x1660ac: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660a8) {
            ctx->pc = 0x1660DCu;
            goto label_1660dc;
        }
    }
    ctx->pc = 0x1660B0u;
    // 0x1660b0: 0x24a48678  addiu       $a0, $a1, -0x7988
    ctx->pc = 0x1660b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936184));
    // 0x1660b4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1660b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1660b8:
    // 0x1660b8: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1660b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1660bc: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x1660bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1660c0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1660C0u;
    {
        const bool branch_taken_0x1660c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1660C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660C0u;
        // 0x1660c4: 0xae23001c  sw          $v1, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660c0) {
            ctx->pc = 0x1660DCu;
            goto label_1660dc;
        }
    }
    ctx->pc = 0x1660C8u;
    // 0x1660c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1660c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1660cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1660ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1660d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1660d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1660d4: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1660D4u;
    {
        const bool branch_taken_0x1660d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1660d4) {
            ctx->pc = 0x1660D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1660D4u;
            // 0x1660d8: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1660B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1660b8;
        }
    }
    ctx->pc = 0x1660DCu;
label_1660dc:
    // 0x1660dc: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x1660dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1660e0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1660e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1660e4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1660E4u;
    {
        const bool branch_taken_0x1660e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1660E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1660E4u;
        // 0x1660e8: 0x24a38678  addiu       $v1, $a1, -0x7988 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1660e4) {
            ctx->pc = 0x1660F8u;
            goto label_1660f8;
        }
    }
    ctx->pc = 0x1660ECu;
    // 0x1660ec: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1660ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1660f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1660f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1660f4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1660f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
label_1660f8:
    // 0x1660f8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x1660f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1660fc: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1660fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x166100: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x166100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x166104: 0xc08a1b0  jal         func_2286C0
    ctx->pc = 0x166104u;
    SET_GPR_U32(ctx, 31, 0x16610Cu);
    ctx->pc = 0x166108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166104u;
    // 0x166108: 0x24074505  addiu       $a3, $zero, 0x4505 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17669));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x166104u, 0x16610Cu)) {
        return;
    }
    ctx->pc = 0x16610Cu;
label_16610c:
    // 0x16610c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x16610Cu;
    {
        const bool branch_taken_0x16610c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x166110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16610Cu;
        // 0x166110: 0xae220058  sw          $v0, 0x58($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16610c) {
            ctx->pc = 0x166254u;
            goto label_166254;
        }
    }
    ctx->pc = 0x166114u;
    // 0x166114: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166118: 0xc08a130  jal         func_2284C0
    ctx->pc = 0x166118u;
    SET_GPR_U32(ctx, 31, 0x166120u);
    ctx->pc = 0x16611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166118u;
    // 0x16611c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2284C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2284C0u, 0x166118u, 0x166120u)) {
        return;
    }
    ctx->pc = 0x166120u;
label_166120:
    // 0x166120: 0x3c130069  lui         $s3, 0x69
    ctx->pc = 0x166120u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)105 << 16));
    // 0x166124: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x166124u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166128: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x166128u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16612c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x16612Cu;
    {
        const bool branch_taken_0x16612c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x166130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16612Cu;
        // 0x166130: 0x27b20030  addiu       $s2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16612c) {
            ctx->pc = 0x166180u;
            goto label_166180;
        }
    }
    ctx->pc = 0x166134u;
    // 0x166134: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x166134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166138: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x166138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x16613c: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x16613cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_166140:
    // 0x166140: 0x54800006  bnel        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x166140u;
    {
        const bool branch_taken_0x166140 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x166140) {
            ctx->pc = 0x166144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x166140u;
            // 0x166144: 0xa0650000  sb          $a1, 0x0($v1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16615Cu;
            goto label_16615c;
        }
    }
    ctx->pc = 0x166148u;
    // 0x166148: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x166148u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x16614c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x16614cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x166150: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x166150u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x166154: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x166154u;
    {
        const bool branch_taken_0x166154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x166158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166154u;
        // 0x166158: 0xa0600003  sb          $zero, 0x3($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166154) {
            ctx->pc = 0x166168u;
            goto label_166168;
        }
    }
    ctx->pc = 0x16615Cu;
label_16615c:
    // 0x16615c: 0xa0650001  sb          $a1, 0x1($v1)
    ctx->pc = 0x16615cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 5));
    // 0x166160: 0xa0650002  sb          $a1, 0x2($v1)
    ctx->pc = 0x166160u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 5));
    // 0x166164: 0xa0660003  sb          $a2, 0x3($v1)
    ctx->pc = 0x166164u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 6));
label_166168:
    // 0x166168: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x166168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x16616c: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x16616cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x166170: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x166170u;
    {
        const bool branch_taken_0x166170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x166174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166170u;
        // 0x166174: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x166170) {
            ctx->pc = 0x166140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_166140;
        }
    }
    ctx->pc = 0x166178u;
    // 0x166178: 0xc08a0d0  jal         func_228340
    ctx->pc = 0x166178u;
    SET_GPR_U32(ctx, 31, 0x166180u);
    ctx->pc = 0x16617Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166178u;
    // 0x16617c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228340u, 0x166178u, 0x166180u)) {
        return;
    }
    ctx->pc = 0x166180u;
label_166180:
    // 0x166180: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x166180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x166184: 0xc091c52  jal         func_247148
    ctx->pc = 0x166184u;
    SET_GPR_U32(ctx, 31, 0x16618Cu);
    ctx->pc = 0x166188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166184u;
    // 0x166188: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247148u, 0x166184u, 0x16618Cu)) {
        return;
    }
    ctx->pc = 0x16618Cu;
label_16618c:
    // 0x16618c: 0x3c01c2c8  lui         $at, 0xC2C8
    ctx->pc = 0x16618cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49864 << 16));
    // 0x166190: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x166190u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x166194: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x166194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166198: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x166198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x16619c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16619cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1661a0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x1661a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1661a4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x1661a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1661a8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1661a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x1661ac: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1661acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1661b0: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1661b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1661b4: 0xc097202  jal         func_25C808
    ctx->pc = 0x1661B4u;
    SET_GPR_U32(ctx, 31, 0x1661BCu);
    ctx->pc = 0x1661B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661B4u;
    // 0x1661b8: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C808u, 0x1661B4u, 0x1661BCu)) {
        return;
    }
    ctx->pc = 0x1661BCu;
label_1661bc:
    // 0x1661bc: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x1661bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1661c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1661c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1661c4: 0xc620004c  lwc1        $f0, 0x4C($s1)
    ctx->pc = 0x1661c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1661c8: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x1661c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1661cc: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1661ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1661d0: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1661d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1661d4: 0xc089456  jal         func_225158
    ctx->pc = 0x1661D4u;
    SET_GPR_U32(ctx, 31, 0x1661DCu);
    ctx->pc = 0x1661D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661D4u;
    // 0x1661d8: 0xae220060  sw          $v0, 0x60($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225158u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225158u, 0x1661D4u, 0x1661DCu)) {
        return;
    }
    ctx->pc = 0x1661DCu;
label_1661dc:
    // 0x1661dc: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1661dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1661e0: 0xc097910  jal         func_25E440
    ctx->pc = 0x1661E0u;
    SET_GPR_U32(ctx, 31, 0x1661E8u);
    ctx->pc = 0x1661E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661E0u;
    // 0x1661e4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E440u, 0x1661E0u, 0x1661E8u)) {
        return;
    }
    ctx->pc = 0x1661E8u;
label_1661e8:
    // 0x1661e8: 0xc08ab50  jal         func_22AD40
    ctx->pc = 0x1661E8u;
    SET_GPR_U32(ctx, 31, 0x1661F0u);
    ctx->pc = 0x1661ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1661E8u;
    // 0x1661ec: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x1661E8u, 0x1661F0u)) {
        return;
    }
    ctx->pc = 0x1661F0u;
label_1661f0:
    // 0x1661f0: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x1661f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x1661f4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1661f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1661f8: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x1661f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1661fc: 0xae22005c  sw          $v0, 0x5C($s1)
    ctx->pc = 0x1661fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 2));
    // 0x166200: 0xc095e0c  jal         func_257830
    ctx->pc = 0x166200u;
    SET_GPR_U32(ctx, 31, 0x166208u);
    ctx->pc = 0x166204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166200u;
    // 0x166204: 0xaca30060  sw          $v1, 0x60($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257830u, 0x166200u, 0x166208u)) {
        return;
    }
    ctx->pc = 0x166208u;
label_166208:
    // 0x166208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x166208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16620c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x16620cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x166210: 0x26673ef0  addiu       $a3, $s3, 0x3EF0
    ctx->pc = 0x166210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16112));
    // 0x166214: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x166214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x166218: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x166218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x16621c: 0x68e3000f  ldl         $v1, 0xF($a3)
    ctx->pc = 0x16621cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x166220: 0x6ce30008  ldr         $v1, 0x8($a3)
    ctx->pc = 0x166220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x166224: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x166224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166228: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x166228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16622c: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x16622cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166230: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x166230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x166234: 0xc095c4a  jal         func_257128
    ctx->pc = 0x166234u;
    SET_GPR_U32(ctx, 31, 0x16623Cu);
    ctx->pc = 0x166238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x166234u;
    // 0x166238: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x166234u, 0x16623Cu)) {
        return;
    }
    ctx->pc = 0x16623Cu;
label_16623c:
    // 0x16623c: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x16623cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x166240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x166240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x166244: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x166244u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x166248: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x166248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x16624c: 0xc0979fe  jal         func_25E7F8
    ctx->pc = 0x16624Cu;
    SET_GPR_U32(ctx, 31, 0x166254u);
    ctx->pc = 0x166250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16624Cu;
    // 0x166250: 0x8e250064  lw          $a1, 0x64($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E7F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E7F8u, 0x16624Cu, 0x166254u)) {
        return;
    }
    ctx->pc = 0x166254u;
label_166254:
    // 0x166254: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x166254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x166258: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x166258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16625c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x16625cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x166260: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x166260u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x166264: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x166264u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x166268: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x166268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16626c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x16626cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x166270: 0x3e00008  jr          $ra
    ctx->pc = 0x166270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x166274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x166270u;
        // 0x166274: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x166270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x166278u;
}
