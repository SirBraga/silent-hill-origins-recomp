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

// Function: sub_0018BA50
// Address: 0x18ba50 - 0x18bc20
void sub_0018BA50_0x18ba50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BA50_0x18ba50");
#endif

    switch (ctx->pc) {
        case 0x18ba88u: goto label_18ba88;
        case 0x18baa0u: goto label_18baa0;
        case 0x18babcu: goto label_18babc;
        case 0x18bad0u: goto label_18bad0;
        case 0x18baecu: goto label_18baec;
        case 0x18baf4u: goto label_18baf4;
        case 0x18bb08u: goto label_18bb08;
        case 0x18bb6cu: goto label_18bb6c;
        case 0x18bb84u: goto label_18bb84;
        case 0x18bb90u: goto label_18bb90;
        case 0x18bb98u: goto label_18bb98;
        case 0x18bbacu: goto label_18bbac;
        case 0x18bbc0u: goto label_18bbc0;
        case 0x18bbd0u: goto label_18bbd0;
        case 0x18bbe4u: goto label_18bbe4;
        case 0x18bbf8u: goto label_18bbf8;
        default: break;
    }

    ctx->pc = 0x18ba50u;

    // 0x18ba50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x18ba50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x18ba54: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x18ba54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x18ba58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x18ba58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x18ba5c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x18ba5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x18ba60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18ba60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ba64: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x18ba64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x18ba68: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x18ba68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x18ba6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18ba6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18ba70: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x18ba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x18ba74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18ba74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18ba78: 0x8c548b2c  lw          $s4, -0x74D4($v0)
    ctx->pc = 0x18ba78u;
    SET_GPR_S32(ctx, 20, (int32_t)FAST_READ32(0x338B2Cu));
    // 0x18ba7c: 0x8e2500c0  lw          $a1, 0xC0($s1)
    ctx->pc = 0x18ba7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x18ba80: 0xc06437c  jal         func_190DF0
    ctx->pc = 0x18BA80u;
    SET_GPR_U32(ctx, 31, 0x18BA88u);
    ctx->pc = 0x18BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA80u;
    // 0x18ba84: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190DF0u, 0x18BA80u, 0x18BA88u)) {
        return;
    }
    ctx->pc = 0x18BA88u;
label_18ba88:
    // 0x18ba88: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x18BA88u;
    {
        const bool branch_taken_0x18ba88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BA88u;
        // 0x18ba8c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ba88) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BA90u;
    // 0x18ba90: 0x3c10006a  lui         $s0, 0x6A
    ctx->pc = 0x18ba90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
    // 0x18ba94: 0x8e3300c0  lw          $s3, 0xC0($s1)
    ctx->pc = 0x18ba94u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x18ba98: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18BA98u;
    SET_GPR_U32(ctx, 31, 0x18BAA0u);
    ctx->pc = 0x18BA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BA98u;
    // 0x18ba9c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18BA98u, 0x18BAA0u)) {
        return;
    }
    ctx->pc = 0x18BAA0u;
label_18baa0:
    // 0x18baa0: 0x26108f50  addiu       $s0, $s0, -0x70B0
    ctx->pc = 0x18baa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938448));
    // 0x18baa4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x18BAA4u;
    {
        const bool branch_taken_0x18baa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAA4u;
        // 0x18baa8: 0x263200c4  addiu       $s2, $s1, 0xC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18baa4) {
            ctx->pc = 0x18BAD8u;
            goto label_18bad8;
        }
    }
    ctx->pc = 0x18BAACu;
    // 0x18baac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18baacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bab0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bab4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18BAB4u;
    SET_GPR_U32(ctx, 31, 0x18BABCu);
    ctx->pc = 0x18BAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAB4u;
    // 0x18bab8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18BAB4u, 0x18BABCu)) {
        return;
    }
    ctx->pc = 0x18BABCu;
label_18babc:
    // 0x18babc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18BABCu;
    {
        const bool branch_taken_0x18babc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BABCu;
        // 0x18bac0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18babc) {
            ctx->pc = 0x18BAD8u;
            goto label_18bad8;
        }
    }
    ctx->pc = 0x18BAC4u;
    // 0x18bac4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18bac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bac8: 0xc07d374  jal         func_1F4DD0
    ctx->pc = 0x18BAC8u;
    SET_GPR_U32(ctx, 31, 0x18BAD0u);
    ctx->pc = 0x18BACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAC8u;
    // 0x18bacc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DD0u, 0x18BAC8u, 0x18BAD0u)) {
        return;
    }
    ctx->pc = 0x18BAD0u;
label_18bad0:
    // 0x18bad0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x18BAD0u;
    {
        const bool branch_taken_0x18bad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BAD0u;
        // 0x18bad4: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bad0) {
            ctx->pc = 0x18BADCu;
            goto label_18badc;
        }
    }
    ctx->pc = 0x18BAD8u;
label_18bad8:
    // 0x18bad8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18bad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18badc:
    // 0x18badc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18BADCu;
    {
        const bool branch_taken_0x18badc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BADCu;
        // 0x18bae0: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18badc) {
            ctx->pc = 0x18BB58u;
            goto label_18bb58;
        }
    }
    ctx->pc = 0x18BAE4u;
    // 0x18bae4: 0xc0643ca  jal         func_190F28
    ctx->pc = 0x18BAE4u;
    SET_GPR_U32(ctx, 31, 0x18BAECu);
    ctx->pc = 0x18BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAE4u;
    // 0x18bae8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190F28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190F28u, 0x18BAE4u, 0x18BAECu)) {
        return;
    }
    ctx->pc = 0x18BAECu;
label_18baec:
    // 0x18baec: 0xc07600c  jal         func_1D8030
    ctx->pc = 0x18BAECu;
    SET_GPR_U32(ctx, 31, 0x18BAF4u);
    ctx->pc = 0x18BAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BAECu;
    // 0x18baf0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x18BAECu, 0x18BAF4u)) {
        return;
    }
    ctx->pc = 0x18BAF4u;
label_18baf4:
    // 0x18baf4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x18baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x18baf8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x18BAF8u;
    {
        const bool branch_taken_0x18baf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18baf8) {
            ctx->pc = 0x18BAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BAF8u;
            // 0x18bafc: 0x8e220120  lw          $v0, 0x120($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BB10u;
            goto label_18bb10;
        }
    }
    ctx->pc = 0x18BB00u;
    // 0x18bb00: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x18BB00u;
    SET_GPR_U32(ctx, 31, 0x18BB08u);
    ctx->pc = 0x18BB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB00u;
    // 0x18bb04: 0xc44c0bdc  lwc1        $f12, 0xBDC($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 3036)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x18BB00u, 0x18BB08u)) {
        return;
    }
    ctx->pc = 0x18BB08u;
label_18bb08:
    // 0x18bb08: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x18bb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x18bb0c: 0x8e220120  lw          $v0, 0x120($s1)
    ctx->pc = 0x18bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 288)));
label_18bb10:
    // 0x18bb10: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x18bb10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18bb14: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BB14u;
    {
        const bool branch_taken_0x18bb14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb14) {
            ctx->pc = 0x18BB18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BB14u;
            // 0x18bb18: 0x8e220124  lw          $v0, 0x124($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BB28u;
            goto label_18bb28;
        }
    }
    ctx->pc = 0x18BB1Cu;
    // 0x18bb1c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18bb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x18bb20: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x18BB20u;
    {
        const bool branch_taken_0x18bb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB20u;
        // 0x18bb24: 0x8c628ad4  lw          $v0, -0x752C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb20) {
            ctx->pc = 0x18BB54u;
            goto label_18bb54;
        }
    }
    ctx->pc = 0x18BB28u;
label_18bb28:
    // 0x18bb28: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x18bb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18bb2c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BB2Cu;
    {
        const bool branch_taken_0x18bb2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb2c) {
            ctx->pc = 0x18BB30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BB2Cu;
            // 0x18bb30: 0x8e220128  lw          $v0, 0x128($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BB40u;
            goto label_18bb40;
        }
    }
    ctx->pc = 0x18BB34u;
    // 0x18bb34: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x18bb38: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18BB38u;
    {
        const bool branch_taken_0x18bb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB38u;
        // 0x18bb3c: 0x8c628ad8  lw          $v0, -0x7528($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb38) {
            ctx->pc = 0x18BB54u;
            goto label_18bb54;
        }
    }
    ctx->pc = 0x18BB40u;
label_18bb40:
    // 0x18bb40: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x18bb40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x18bb44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18BB44u;
    {
        const bool branch_taken_0x18bb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB44u;
        // 0x18bb48: 0x8e428ae0  lw          $v0, -0x7520($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb44) {
            ctx->pc = 0x18BB54u;
            goto label_18bb54;
        }
    }
    ctx->pc = 0x18BB4Cu;
    // 0x18bb4c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x18bb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x18bb50: 0x8c628adc  lw          $v0, -0x7524($v1)
    ctx->pc = 0x18bb50u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338ADCu));
label_18bb54:
    // 0x18bb54: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x18bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
label_18bb58:
    // 0x18bb58: 0x8e2400c4  lw          $a0, 0xC4($s1)
    ctx->pc = 0x18bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x18bb5c: 0x5080001a  beql        $a0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x18BB5Cu;
    {
        const bool branch_taken_0x18bb5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x18bb5c) {
            ctx->pc = 0x18BB60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BB5Cu;
            // 0x18bb60: 0x8e3100c0  lw          $s1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BBC8u;
            goto label_18bbc8;
        }
    }
    ctx->pc = 0x18BB64u;
    // 0x18bb64: 0xc065c58  jal         func_197160
    ctx->pc = 0x18BB64u;
    SET_GPR_U32(ctx, 31, 0x18BB6Cu);
    ctx->pc = 0x18BB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB64u;
    // 0x18bb68: 0x8e458ae0  lw          $a1, -0x7520($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197160u, 0x18BB64u, 0x18BB6Cu)) {
        return;
    }
    ctx->pc = 0x18BB6Cu;
label_18bb6c:
    // 0x18bb6c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x18BB6Cu;
    {
        const bool branch_taken_0x18bb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18bb6c) {
            ctx->pc = 0x18BB70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18BB6Cu;
            // 0x18bb70: 0x8e3100c0  lw          $s1, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18BBC8u;
            goto label_18bbc8;
        }
    }
    ctx->pc = 0x18BB74u;
    // 0x18bb74: 0x8e2500c4  lw          $a1, 0xC4($s1)
    ctx->pc = 0x18bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x18bb78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18bb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bb7c: 0xc06354e  jal         func_18D538
    ctx->pc = 0x18BB7Cu;
    SET_GPR_U32(ctx, 31, 0x18BB84u);
    ctx->pc = 0x18BB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB7Cu;
    // 0x18bb80: 0x26b08f50  addiu       $s0, $s5, -0x70B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18D538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D538u, 0x18BB7Cu, 0x18BB84u)) {
        return;
    }
    ctx->pc = 0x18BB84u;
label_18bb84:
    // 0x18bb84: 0xae2200c8  sw          $v0, 0xC8($s1)
    ctx->pc = 0x18bb84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 2));
    // 0x18bb88: 0xc0646d4  jal         func_191B50
    ctx->pc = 0x18BB88u;
    SET_GPR_U32(ctx, 31, 0x18BB90u);
    ctx->pc = 0x18BB8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB88u;
    // 0x18bb8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191B50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191B50u, 0x18BB88u, 0x18BB90u)) {
        return;
    }
    ctx->pc = 0x18BB90u;
label_18bb90:
    // 0x18bb90: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18BB90u;
    SET_GPR_U32(ctx, 31, 0x18BB98u);
    ctx->pc = 0x18BB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BB90u;
    // 0x18bb94: 0x8e3200c0  lw          $s2, 0xC0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18BB90u, 0x18BB98u)) {
        return;
    }
    ctx->pc = 0x18BB98u;
label_18bb98:
    // 0x18bb98: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x18BB98u;
    {
        const bool branch_taken_0x18bb98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BB98u;
        // 0x18bb9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bb98) {
            ctx->pc = 0x18BBF8u;
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BBA0u;
    // 0x18bba0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bba4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18BBA4u;
    SET_GPR_U32(ctx, 31, 0x18BBACu);
    ctx->pc = 0x18BBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBA4u;
    // 0x18bba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18BBA4u, 0x18BBACu)) {
        return;
    }
    ctx->pc = 0x18BBACu;
label_18bbac:
    // 0x18bbac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18BBACu;
    {
        const bool branch_taken_0x18bbac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBACu;
        // 0x18bbb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbac) {
            ctx->pc = 0x18BBF8u;
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BBB4u;
    // 0x18bbb4: 0x8e2600c4  lw          $a2, 0xC4($s1)
    ctx->pc = 0x18bbb4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
    // 0x18bbb8: 0xc07d316  jal         func_1F4C58
    ctx->pc = 0x18BBB8u;
    SET_GPR_U32(ctx, 31, 0x18BBC0u);
    ctx->pc = 0x18BBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBB8u;
    // 0x18bbbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x18BBB8u, 0x18BBC0u)) {
        return;
    }
    ctx->pc = 0x18BBC0u;
label_18bbc0:
    // 0x18bbc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x18BBC0u;
    {
        const bool branch_taken_0x18bbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBC0u;
        // 0x18bbc4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbc0) {
            ctx->pc = 0x18BBFCu;
            goto label_18bbfc;
        }
    }
    ctx->pc = 0x18BBC8u;
label_18bbc8:
    // 0x18bbc8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x18BBC8u;
    SET_GPR_U32(ctx, 31, 0x18BBD0u);
    ctx->pc = 0x18BBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBC8u;
    // 0x18bbcc: 0x26b08f50  addiu       $s0, $s5, -0x70B0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x18BBC8u, 0x18BBD0u)) {
        return;
    }
    ctx->pc = 0x18BBD0u;
label_18bbd0:
    // 0x18bbd0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x18BBD0u;
    {
        const bool branch_taken_0x18bbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBD0u;
        // 0x18bbd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbd0) {
            ctx->pc = 0x18BBF8u;
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BBD8u;
    // 0x18bbd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bbd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bbdc: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x18BBDCu;
    SET_GPR_U32(ctx, 31, 0x18BBE4u);
    ctx->pc = 0x18BBE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBDCu;
    // 0x18bbe0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x18BBDCu, 0x18BBE4u)) {
        return;
    }
    ctx->pc = 0x18BBE4u;
label_18bbe4:
    // 0x18bbe4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18BBE4u;
    {
        const bool branch_taken_0x18bbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BBE4u;
        // 0x18bbe8: 0x8e468ae0  lw          $a2, -0x7520($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937312)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bbe4) {
            ctx->pc = 0x18BBF8u;
            goto label_18bbf8;
        }
    }
    ctx->pc = 0x18BBECu;
    // 0x18bbec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18bbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bbf0: 0xc07d316  jal         func_1F4C58
    ctx->pc = 0x18BBF0u;
    SET_GPR_U32(ctx, 31, 0x18BBF8u);
    ctx->pc = 0x18BBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BBF0u;
    // 0x18bbf4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x18BBF0u, 0x18BBF8u)) {
        return;
    }
    ctx->pc = 0x18BBF8u;
label_18bbf8:
    // 0x18bbf8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x18bbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_18bbfc:
    // 0x18bbfc: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x18bbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18bc00: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x18bc00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18bc04: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18bc04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18bc08: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x18bc08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18bc0c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x18bc0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bc10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bc14: 0x3e00008  jr          $ra
    ctx->pc = 0x18BC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BC14u;
        // 0x18bc18: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BC1Cu;
    // 0x18bc1c: 0x0  nop
    ctx->pc = 0x18bc1cu;
    // NOP
    ctx->pc = 0x18bc20u;
}
