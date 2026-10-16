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

// Function: sub_001BFF38
// Address: 0x1bff38 - 0x1c0160
void sub_001BFF38_0x1bff38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BFF38_0x1bff38");
#endif

    switch (ctx->pc) {
        case 0x1bff60u: goto label_1bff60;
        case 0x1bff78u: goto label_1bff78;
        case 0x1bff8cu: goto label_1bff8c;
        case 0x1bffacu: goto label_1bffac;
        case 0x1bffd4u: goto label_1bffd4;
        case 0x1c000cu: goto label_1c000c;
        case 0x1c0020u: goto label_1c0020;
        case 0x1c0050u: goto label_1c0050;
        case 0x1c0064u: goto label_1c0064;
        case 0x1c00e4u: goto label_1c00e4;
        case 0x1c00fcu: goto label_1c00fc;
        case 0x1c0104u: goto label_1c0104;
        case 0x1c0148u: goto label_1c0148;
        default: break;
    }

    ctx->pc = 0x1bff38u;

    // 0x1bff38: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1bff38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1bff3c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1bff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1bff40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1bff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1bff44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bff44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bff48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bff4c: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1bff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1bff50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BFF50u;
    {
        const bool branch_taken_0x1bff50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF50u;
        // 0x1bff54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff50) {
            ctx->pc = 0x1BFF78u;
            goto label_1bff78;
        }
    }
    ctx->pc = 0x1BFF58u;
    // 0x1bff58: 0xc06fd80  jal         func_1BF600
    ctx->pc = 0x1BFF58u;
    SET_GPR_U32(ctx, 31, 0x1BFF60u);
    ctx->pc = 0x1BFF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF58u;
    // 0x1bff5c: 0xae000310  sw          $zero, 0x310($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BF600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1BF600u, 0x1BFF58u, 0x1BFF60u)) {
        return;
    }
    ctx->pc = 0x1BFF60u;
label_1bff60:
    // 0x1bff60: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1bff60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1bff64: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bff64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bff68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bff68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bff6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bff70: 0xc0704fc  jal         func_1C13F0
    ctx->pc = 0x1BFF70u;
    SET_GPR_U32(ctx, 31, 0x1BFF78u);
    ctx->pc = 0x1BFF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFF70u;
    // 0x1bff74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C13F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C13F0u, 0x1BFF70u, 0x1BFF78u)) {
        return;
    }
    ctx->pc = 0x1BFF78u;
label_1bff78:
    // 0x1bff78: 0x8e020308  lw          $v0, 0x308($s0)
    ctx->pc = 0x1bff78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
    // 0x1bff7c: 0x50400029  beql        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1BFF7Cu;
    {
        const bool branch_taken_0x1bff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bff7c) {
            ctx->pc = 0x1BFF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFF7Cu;
            // 0x1bff80: 0x8e0202cc  lw          $v0, 0x2CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0024u;
            goto label_1c0024;
        }
    }
    ctx->pc = 0x1BFF84u;
    // 0x1bff84: 0xc07be38  jal         func_1EF8E0
    ctx->pc = 0x1BFF84u;
    SET_GPR_U32(ctx, 31, 0x1BFF8Cu);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x1BFF84u, 0x1BFF8Cu)) {
        return;
    }
    ctx->pc = 0x1BFF8Cu;
label_1bff8c:
    // 0x1bff8c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BFF8Cu;
    {
        const bool branch_taken_0x1bff8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bff8c) {
            ctx->pc = 0x1BFF90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFF8Cu;
            // 0x1bff90: 0x8e0202cc  lw          $v0, 0x2CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0024u;
            goto label_1c0024;
        }
    }
    ctx->pc = 0x1BFF94u;
    // 0x1bff94: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1bff94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1bff98: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bff98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bff9c: 0xae000308  sw          $zero, 0x308($s0)
    ctx->pc = 0x1bff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 776), GPR_U32(ctx, 0));
    // 0x1bffa0: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1bffa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bffa4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1BFFA4u;
    SET_GPR_U32(ctx, 31, 0x1BFFACu);
    ctx->pc = 0x1BFFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFA4u;
    // 0x1bffa8: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1BFFA4u, 0x1BFFACu)) {
        return;
    }
    ctx->pc = 0x1BFFACu;
label_1bffac:
    // 0x1bffac: 0x8e030304  lw          $v1, 0x304($s0)
    ctx->pc = 0x1bffacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x1bffb0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1BFFB0u;
    {
        const bool branch_taken_0x1bffb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFB0u;
        // 0x1bffb4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffb0) {
            ctx->pc = 0x1BFFE0u;
            goto label_1bffe0;
        }
    }
    ctx->pc = 0x1BFFB8u;
    // 0x1bffb8: 0xae000304  sw          $zero, 0x304($s0)
    ctx->pc = 0x1bffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 772), GPR_U32(ctx, 0));
    // 0x1bffbc: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x1bffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    // 0x1bffc0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1bffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1bffc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BFFC4u;
    {
        const bool branch_taken_0x1bffc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFC4u;
        // 0x1bffc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffc4) {
            ctx->pc = 0x1BFFD8u;
            goto label_1bffd8;
        }
    }
    ctx->pc = 0x1BFFCCu;
    // 0x1bffcc: 0xc05eee2  jal         func_17BB88
    ctx->pc = 0x1BFFCCu;
    SET_GPR_U32(ctx, 31, 0x1BFFD4u);
    ctx->pc = 0x1BFFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFFCCu;
    // 0x1bffd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB88u, 0x1BFFCCu, 0x1BFFD4u)) {
        return;
    }
    ctx->pc = 0x1BFFD4u;
label_1bffd4:
    // 0x1bffd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bffd8:
    // 0x1bffd8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1BFFD8u;
    {
        const bool branch_taken_0x1bffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFD8u;
        // 0x1bffdc: 0xae020310  sw          $v0, 0x310($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 784), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffd8) {
            ctx->pc = 0x1C0020u;
            goto label_1c0020;
        }
    }
    ctx->pc = 0x1BFFE0u;
label_1bffe0:
    // 0x1bffe0: 0x8e020300  lw          $v0, 0x300($s0)
    ctx->pc = 0x1bffe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 768)));
    // 0x1bffe4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BFFE4u;
    {
        const bool branch_taken_0x1bffe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFE4u;
        // 0x1bffe8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffe4) {
            ctx->pc = 0x1C0020u;
            goto label_1c0020;
        }
    }
    ctx->pc = 0x1BFFECu;
    // 0x1bffec: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x1bffecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
    // 0x1bfff0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1bfff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x1bfff4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bfff4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bfff8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bfff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bfffc: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1bfffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    // 0x1c0000: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c0000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0004: 0xc07bf5e  jal         func_1EFD78
    ctx->pc = 0x1C0004u;
    SET_GPR_U32(ctx, 31, 0x1C000Cu);
    ctx->pc = 0x1C0008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0004u;
    // 0x1c0008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x1C0004u, 0x1C000Cu)) {
        return;
    }
    ctx->pc = 0x1C000Cu;
label_1c000c:
    // 0x1c000c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c000cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c0010: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c0010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0014: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x1c0014u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x339168u));
    // 0x1c0018: 0xc06bede  jal         func_1AFB78
    ctx->pc = 0x1C0018u;
    SET_GPR_U32(ctx, 31, 0x1C0020u);
    ctx->pc = 0x1C001Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0018u;
    // 0x1c001c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1C0018u, 0x1C0020u)) {
        return;
    }
    ctx->pc = 0x1C0020u;
label_1c0020:
    // 0x1c0020: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x1c0020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_1c0024:
    // 0x1c0024: 0x50400043  beql        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x1C0024u;
    {
        const bool branch_taken_0x1c0024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0024) {
            ctx->pc = 0x1C0028u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0024u;
            // 0x1c0028: 0x8e0202c4  lw          $v0, 0x2C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0134u;
            goto label_1c0134;
        }
    }
    ctx->pc = 0x1C002Cu;
    // 0x1c002c: 0x8e020308  lw          $v0, 0x308($s0)
    ctx->pc = 0x1c002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 776)));
    // 0x1c0030: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x1C0030u;
    {
        const bool branch_taken_0x1c0030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0030) {
            ctx->pc = 0x1C0034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0030u;
            // 0x1c0034: 0x8e0202c4  lw          $v0, 0x2C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0134u;
            goto label_1c0134;
        }
    }
    ctx->pc = 0x1C0038u;
    // 0x1c0038: 0x8e020310  lw          $v0, 0x310($s0)
    ctx->pc = 0x1c0038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1c003c: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x1C003Cu;
    {
        const bool branch_taken_0x1c003c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c003c) {
            ctx->pc = 0x1C0040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C003Cu;
            // 0x1c0040: 0x8e0202c4  lw          $v0, 0x2C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0134u;
            goto label_1c0134;
        }
    }
    ctx->pc = 0x1C0044u;
    // 0x1c0044: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c0044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0048: 0xc0704d2  jal         func_1C1348
    ctx->pc = 0x1C0048u;
    SET_GPR_U32(ctx, 31, 0x1C0050u);
    ctx->pc = 0x1C004Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0048u;
    // 0x1c004c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1348u, 0x1C0048u, 0x1C0050u)) {
        return;
    }
    ctx->pc = 0x1C0050u;
label_1c0050:
    // 0x1c0050: 0xc60c02d0  lwc1        $f12, 0x2D0($s0)
    ctx->pc = 0x1c0050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c0054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0058: 0xae0202cc  sw          $v0, 0x2CC($s0)
    ctx->pc = 0x1c0058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
    // 0x1c005c: 0xc0700fa  jal         func_1C03E8
    ctx->pc = 0x1C005Cu;
    SET_GPR_U32(ctx, 31, 0x1C0064u);
    ctx->pc = 0x1C0060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C005Cu;
    // 0x1c0060: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C03E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C03E8u, 0x1C005Cu, 0x1C0064u)) {
        return;
    }
    ctx->pc = 0x1C0064u;
label_1c0064:
    // 0x1c0064: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x1c0064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1c0068: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C0068u;
    {
        const bool branch_taken_0x1c0068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0068) {
            ctx->pc = 0x1C006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0068u;
            // 0x1c006c: 0x8e0202cc  lw          $v0, 0x2CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C00C8u;
            goto label_1c00c8;
        }
    }
    ctx->pc = 0x1C0070u;
    // 0x1c0070: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x1c0070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x1c0074: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C0074u;
    {
        const bool branch_taken_0x1c0074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0074) {
            ctx->pc = 0x1C0078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0074u;
            // 0x1c0078: 0x8e0202cc  lw          $v0, 0x2CC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C00C8u;
            goto label_1c00c8;
        }
    }
    ctx->pc = 0x1C007Cu;
    // 0x1c007c: 0xc60002dc  lwc1        $f0, 0x2DC($s0)
    ctx->pc = 0x1c007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0080: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x1c0080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x1c0084: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c0084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1c0088: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c008c: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1c008cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x1c0090: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1c0090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c0094: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1c0094u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1c0098: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x1c0098u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c009c: 0x0  nop
    ctx->pc = 0x1c009cu;
    // NOP
    // 0x1c00a0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C00A0u;
    {
        const bool branch_taken_0x1c00a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C00A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00A0u;
        // 0x1c00a4: 0x240300ff  addiu       $v1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00a0) {
            ctx->pc = 0x1C00C4u;
            goto label_1c00c4;
        }
    }
    ctx->pc = 0x1C00A8u;
    // 0x1c00a8: 0x920202a3  lbu         $v0, 0x2A3($s0)
    ctx->pc = 0x1c00a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 675)));
    // 0x1c00ac: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C00ACu;
    {
        const bool branch_taken_0x1c00ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C00B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00ACu;
        // 0x1c00b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00ac) {
            ctx->pc = 0x1C00C4u;
            goto label_1c00c4;
        }
    }
    ctx->pc = 0x1C00B4u;
    // 0x1c00b4: 0xa20302a7  sb          $v1, 0x2A7($s0)
    ctx->pc = 0x1c00b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 679), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c00b8: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x1c00b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
    // 0x1c00bc: 0xae0002ac  sw          $zero, 0x2AC($s0)
    ctx->pc = 0x1c00bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 684), GPR_U32(ctx, 0));
    // 0x1c00c0: 0xa20002ab  sb          $zero, 0x2AB($s0)
    ctx->pc = 0x1c00c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 683), (uint8_t)GPR_U32(ctx, 0));
label_1c00c4:
    // 0x1c00c4: 0x8e0202cc  lw          $v0, 0x2CC($s0)
    ctx->pc = 0x1c00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 716)));
label_1c00c8:
    // 0x1c00c8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1C00C8u;
    {
        const bool branch_taken_0x1c00c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c00c8) {
            ctx->pc = 0x1C00CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C00C8u;
            // 0x1c00cc: 0x8e0202c4  lw          $v0, 0x2C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0134u;
            goto label_1c0134;
        }
    }
    ctx->pc = 0x1C00D0u;
    // 0x1c00d0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c00d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1c00d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c00d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c00d8: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c00d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c00dc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C00DCu;
    SET_GPR_U32(ctx, 31, 0x1C00E4u);
    ctx->pc = 0x1C00E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00DCu;
    // 0x1c00e0: 0x248400f8  addiu       $a0, $a0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C00DCu, 0x1C00E4u)) {
        return;
    }
    ctx->pc = 0x1C00E4u;
label_1c00e4:
    // 0x1c00e4: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x1c00e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
    // 0x1c00e8: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C00E8u;
    {
        const bool branch_taken_0x1c00e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c00e8) {
            ctx->pc = 0x1C00ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C00E8u;
            // 0x1c00ec: 0x8e0202c4  lw          $v0, 0x2C4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0134u;
            goto label_1c0134;
        }
    }
    ctx->pc = 0x1C00F0u;
    // 0x1c00f0: 0x8e050454  lw          $a1, 0x454($s0)
    ctx->pc = 0x1c00f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1108)));
    // 0x1c00f4: 0xc0705d4  jal         func_1C1750
    ctx->pc = 0x1C00F4u;
    SET_GPR_U32(ctx, 31, 0x1C00FCu);
    ctx->pc = 0x1C00F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00F4u;
    // 0x1c00f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1750u, 0x1C00F4u, 0x1C00FCu)) {
        return;
    }
    ctx->pc = 0x1C00FCu;
label_1c00fc:
    // 0x1c00fc: 0xc070650  jal         func_1C1940
    ctx->pc = 0x1C00FCu;
    SET_GPR_U32(ctx, 31, 0x1C0104u);
    ctx->pc = 0x1C0100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C00FCu;
    // 0x1c0100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1940u, 0x1C00FCu, 0x1C0104u)) {
        return;
    }
    ctx->pc = 0x1C0104u;
label_1c0104:
    // 0x1c0104: 0x8e030260  lw          $v1, 0x260($s0)
    ctx->pc = 0x1c0104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1c0108: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x1c0108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c010c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c010cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c0110: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1c0110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1c0114: 0x244294d8  addiu       $v0, $v0, -0x6B28
    ctx->pc = 0x1c0114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939864));
    // 0x1c0118: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1c0118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c011c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1c011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1c0120: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1c0120u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0124: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1c0124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x1c0128: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1c0128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1c012c: 0xe601000c  swc1        $f1, 0xC($s0)
    ctx->pc = 0x1c012cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x1c0130: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x1c0130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_1c0134:
    // 0x1c0134: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0134u;
    {
        const bool branch_taken_0x1c0134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0134) {
            ctx->pc = 0x1C0138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0134u;
            // 0x1c0138: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0150u;
            goto label_1c0150;
        }
    }
    ctx->pc = 0x1C013Cu;
    // 0x1c013c: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x1c013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1c0140: 0xc0704e0  jal         func_1C1380
    ctx->pc = 0x1C0140u;
    SET_GPR_U32(ctx, 31, 0x1C0148u);
    ctx->pc = 0x1C0144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0140u;
    // 0x1c0144: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C1380u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C1380u, 0x1C0140u, 0x1C0148u)) {
        return;
    }
    ctx->pc = 0x1C0148u;
label_1c0148:
    // 0x1c0148: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x1c0148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
    // 0x1c014c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c014cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c0150:
    // 0x1c0150: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c0150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0154: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c0158: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0158u;
        // 0x1c015c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0160u;
}
