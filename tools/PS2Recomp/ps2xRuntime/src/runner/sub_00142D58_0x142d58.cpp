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

// Function: sub_00142D58
// Address: 0x142d58 - 0x142e80
void sub_00142D58_0x142d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142D58_0x142d58");
#endif

    switch (ctx->pc) {
        case 0x142d7cu: goto label_142d7c;
        case 0x142d94u: goto label_142d94;
        case 0x142dacu: goto label_142dac;
        case 0x142dd0u: goto label_142dd0;
        case 0x142de0u: goto label_142de0;
        case 0x142df4u: goto label_142df4;
        case 0x142e00u: goto label_142e00;
        case 0x142e6cu: goto label_142e6c;
        default: break;
    }

    ctx->pc = 0x142d58u;

    // 0x142d58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x142d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x142d5c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x142d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x142d60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x142d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x142d64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x142d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142d68: 0x8e0501ac  lw          $a1, 0x1AC($s0)
    ctx->pc = 0x142d68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x142d6c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x142D6Cu;
    {
        const bool branch_taken_0x142d6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x142d6c) {
            ctx->pc = 0x142D70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142D6Cu;
            // 0x142d70: 0x8e0501b0  lw          $a1, 0x1B0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142D84u;
            goto label_142d84;
        }
    }
    ctx->pc = 0x142D74u;
    // 0x142d74: 0xc07f228  jal         func_1FC8A0
    ctx->pc = 0x142D74u;
    SET_GPR_U32(ctx, 31, 0x142D7Cu);
    ctx->pc = 0x142D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D74u;
    // 0x142d78: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC8A0u, 0x142D74u, 0x142D7Cu)) {
        return;
    }
    ctx->pc = 0x142D7Cu;
label_142d7c:
    // 0x142d7c: 0xae0201b8  sw          $v0, 0x1B8($s0)
    ctx->pc = 0x142d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 2));
    // 0x142d80: 0x8e0501b0  lw          $a1, 0x1B0($s0)
    ctx->pc = 0x142d80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_142d84:
    // 0x142d84: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x142D84u;
    {
        const bool branch_taken_0x142d84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x142d84) {
            ctx->pc = 0x142D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142D84u;
            // 0x142d88: 0x8e0501b4  lw          $a1, 0x1B4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142D9Cu;
            goto label_142d9c;
        }
    }
    ctx->pc = 0x142D8Cu;
    // 0x142d8c: 0xc07f228  jal         func_1FC8A0
    ctx->pc = 0x142D8Cu;
    SET_GPR_U32(ctx, 31, 0x142D94u);
    ctx->pc = 0x142D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142D8Cu;
    // 0x142d90: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC8A0u, 0x142D8Cu, 0x142D94u)) {
        return;
    }
    ctx->pc = 0x142D94u;
label_142d94:
    // 0x142d94: 0xae0201bc  sw          $v0, 0x1BC($s0)
    ctx->pc = 0x142d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 444), GPR_U32(ctx, 2));
    // 0x142d98: 0x8e0501b4  lw          $a1, 0x1B4($s0)
    ctx->pc = 0x142d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_142d9c:
    // 0x142d9c: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x142D9Cu;
    {
        const bool branch_taken_0x142d9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x142d9c) {
            ctx->pc = 0x142DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142D9Cu;
            // 0x142da0: 0x8e0201bc  lw          $v0, 0x1BC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142DB4u;
            goto label_142db4;
        }
    }
    ctx->pc = 0x142DA4u;
    // 0x142da4: 0xc07f228  jal         func_1FC8A0
    ctx->pc = 0x142DA4u;
    SET_GPR_U32(ctx, 31, 0x142DACu);
    ctx->pc = 0x142DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DA4u;
    // 0x142da8: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC8A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC8A0u, 0x142DA4u, 0x142DACu)) {
        return;
    }
    ctx->pc = 0x142DACu;
label_142dac:
    // 0x142dac: 0xae0201c0  sw          $v0, 0x1C0($s0)
    ctx->pc = 0x142dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
    // 0x142db0: 0x8e0201bc  lw          $v0, 0x1BC($s0)
    ctx->pc = 0x142db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 444)));
label_142db4:
    // 0x142db4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142DB4u;
    {
        const bool branch_taken_0x142db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x142db4) {
            ctx->pc = 0x142DC8u;
            goto label_142dc8;
        }
    }
    ctx->pc = 0x142DBCu;
    // 0x142dbc: 0x8e0201c0  lw          $v0, 0x1C0($s0)
    ctx->pc = 0x142dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    // 0x142dc0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x142DC0u;
    {
        const bool branch_taken_0x142dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142DC0u;
        // 0x142dc4: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142dc0) {
            ctx->pc = 0x142E2Cu;
            goto label_142e2c;
        }
    }
    ctx->pc = 0x142DC8u;
label_142dc8:
    // 0x142dc8: 0xc0954b8  jal         func_2552E0
    ctx->pc = 0x142DC8u;
    SET_GPR_U32(ctx, 31, 0x142DD0u);
    ctx->pc = 0x2552E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2552E0u, 0x142DC8u, 0x142DD0u)) {
        return;
    }
    ctx->pc = 0x142DD0u;
label_142dd0:
    // 0x142dd0: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x142dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
    // 0x142dd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x142dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142dd8: 0xc0957f0  jal         func_255FC0
    ctx->pc = 0x142DD8u;
    SET_GPR_U32(ctx, 31, 0x142DE0u);
    ctx->pc = 0x142DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DD8u;
    // 0x142ddc: 0xae0200e8  sw          $v0, 0xE8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 232), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x142DD8u, 0x142DE0u)) {
        return;
    }
    ctx->pc = 0x142DE0u;
label_142de0:
    // 0x142de0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x142de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x142de4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x142de4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x142de8: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x142de8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x142dec: 0xc05ee76  jal         func_17B9D8
    ctx->pc = 0x142DECu;
    SET_GPR_U32(ctx, 31, 0x142DF4u);
    ctx->pc = 0x142DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DECu;
    // 0x142df0: 0x8e0500e8  lw          $a1, 0xE8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B9D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B9D8u, 0x142DECu, 0x142DF4u)) {
        return;
    }
    ctx->pc = 0x142DF4u;
label_142df4:
    // 0x142df4: 0x8e0400e8  lw          $a0, 0xE8($s0)
    ctx->pc = 0x142df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x142df8: 0xc0773c4  jal         func_1DCF10
    ctx->pc = 0x142DF8u;
    SET_GPR_U32(ctx, 31, 0x142E00u);
    ctx->pc = 0x142DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142DF8u;
    // 0x142dfc: 0x26050044  addiu       $a1, $s0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DCF10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DCF10u, 0x142DF8u, 0x142E00u)) {
        return;
    }
    ctx->pc = 0x142E00u;
label_142e00:
    // 0x142e00: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x142e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x142e04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x142e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x142e08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142e08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142e0c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x142e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x142e10: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x142e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x142e14: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x142e14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x142e18: 0x8e0300e8  lw          $v1, 0xE8($s0)
    ctx->pc = 0x142e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x142e1c: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x142e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x142e20: 0x8e0200e8  lw          $v0, 0xE8($s0)
    ctx->pc = 0x142e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 232)));
    // 0x142e24: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x142e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x142e28: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x142e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_142e2c:
    // 0x142e2c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x142e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x142e30: 0x8c4346f8  lw          $v1, 0x46F8($v0)
    ctx->pc = 0x142e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18168)));
    // 0x142e34: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x142E34u;
    {
        const bool branch_taken_0x142e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x142E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E34u;
        // 0x142e38: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e34) {
            ctx->pc = 0x142E70u;
            goto label_142e70;
        }
    }
    ctx->pc = 0x142E3Cu;
    // 0x142e3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x142e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x142e40: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x142e40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x142e44: 0x8c454708  lw          $a1, 0x4708($v0)
    ctx->pc = 0x142e44u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B4708u));
    // 0x142e48: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x142e48u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x142e4c: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x142E4Cu;
    {
        const bool branch_taken_0x142e4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x142E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E4Cu;
        // 0x142e50: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e4c) {
            ctx->pc = 0x142E74u;
            goto label_142e74;
        }
    }
    ctx->pc = 0x142E54u;
    // 0x142e54: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x142e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x142e58: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x142E58u;
    {
        const bool branch_taken_0x142e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x142E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E58u;
        // 0x142e5c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142e58) {
            ctx->pc = 0x142E74u;
            goto label_142e74;
        }
    }
    ctx->pc = 0x142E60u;
    // 0x142e60: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x142e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x142e64: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x142E64u;
    SET_GPR_U32(ctx, 31, 0x142E6Cu);
    ctx->pc = 0x142E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142E64u;
    // 0x142e68: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x142E64u, 0x142E6Cu)) {
        return;
    }
    ctx->pc = 0x142E6Cu;
label_142e6c:
    // 0x142e6c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x142e6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_142e70:
    // 0x142e70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142e70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_142e74:
    // 0x142e74: 0x3e00008  jr          $ra
    ctx->pc = 0x142E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142E74u;
        // 0x142e78: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142E7Cu;
    // 0x142e7c: 0x0  nop
    ctx->pc = 0x142e7cu;
    // NOP
    ctx->pc = 0x142e80u;
}
