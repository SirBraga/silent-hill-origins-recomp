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

// Function: sub_0022B0D8
// Address: 0x22b0d8 - 0x22b1e8
void sub_0022B0D8_0x22b0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B0D8_0x22b0d8");
#endif

    switch (ctx->pc) {
        case 0x22b0d8u: goto label_22b0d8;
        case 0x22b0dcu: goto label_22b0dc;
        case 0x22b0e0u: goto label_22b0e0;
        case 0x22b0e4u: goto label_22b0e4;
        case 0x22b0e8u: goto label_22b0e8;
        case 0x22b0ecu: goto label_22b0ec;
        case 0x22b0f0u: goto label_22b0f0;
        case 0x22b0f4u: goto label_22b0f4;
        case 0x22b0f8u: goto label_22b0f8;
        case 0x22b0fcu: goto label_22b0fc;
        case 0x22b100u: goto label_22b100;
        case 0x22b104u: goto label_22b104;
        case 0x22b108u: goto label_22b108;
        case 0x22b10cu: goto label_22b10c;
        case 0x22b110u: goto label_22b110;
        case 0x22b114u: goto label_22b114;
        case 0x22b118u: goto label_22b118;
        case 0x22b11cu: goto label_22b11c;
        case 0x22b120u: goto label_22b120;
        case 0x22b124u: goto label_22b124;
        case 0x22b128u: goto label_22b128;
        case 0x22b12cu: goto label_22b12c;
        case 0x22b130u: goto label_22b130;
        case 0x22b134u: goto label_22b134;
        case 0x22b138u: goto label_22b138;
        case 0x22b13cu: goto label_22b13c;
        case 0x22b140u: goto label_22b140;
        case 0x22b144u: goto label_22b144;
        case 0x22b148u: goto label_22b148;
        case 0x22b14cu: goto label_22b14c;
        case 0x22b150u: goto label_22b150;
        case 0x22b154u: goto label_22b154;
        case 0x22b158u: goto label_22b158;
        case 0x22b15cu: goto label_22b15c;
        case 0x22b160u: goto label_22b160;
        case 0x22b164u: goto label_22b164;
        case 0x22b168u: goto label_22b168;
        case 0x22b16cu: goto label_22b16c;
        case 0x22b170u: goto label_22b170;
        case 0x22b174u: goto label_22b174;
        case 0x22b178u: goto label_22b178;
        case 0x22b17cu: goto label_22b17c;
        case 0x22b180u: goto label_22b180;
        case 0x22b184u: goto label_22b184;
        case 0x22b188u: goto label_22b188;
        case 0x22b18cu: goto label_22b18c;
        case 0x22b190u: goto label_22b190;
        case 0x22b194u: goto label_22b194;
        case 0x22b198u: goto label_22b198;
        case 0x22b19cu: goto label_22b19c;
        case 0x22b1a0u: goto label_22b1a0;
        case 0x22b1a4u: goto label_22b1a4;
        case 0x22b1a8u: goto label_22b1a8;
        case 0x22b1acu: goto label_22b1ac;
        case 0x22b1b0u: goto label_22b1b0;
        case 0x22b1b4u: goto label_22b1b4;
        case 0x22b1b8u: goto label_22b1b8;
        case 0x22b1bcu: goto label_22b1bc;
        case 0x22b1c0u: goto label_22b1c0;
        case 0x22b1c4u: goto label_22b1c4;
        case 0x22b1c8u: goto label_22b1c8;
        case 0x22b1ccu: goto label_22b1cc;
        case 0x22b1d0u: goto label_22b1d0;
        case 0x22b1d4u: goto label_22b1d4;
        case 0x22b1d8u: goto label_22b1d8;
        case 0x22b1dcu: goto label_22b1dc;
        case 0x22b1e0u: goto label_22b1e0;
        case 0x22b1e4u: goto label_22b1e4;
        default: break;
    }

    ctx->pc = 0x22b0d8u;

label_22b0d8:
    // 0x22b0d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22b0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22b0dc:
    // 0x22b0dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22b0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22b0e0:
    // 0x22b0e0: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22b0e4:
    // 0x22b0e4: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22b0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_22b0e8:
    // 0x22b0e8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x22b0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_22b0ec:
    // 0x22b0ec: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22b0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_22b0f0:
    // 0x22b0f0: 0x24530fc8  addiu       $s3, $v0, 0xFC8
    ctx->pc = 0x22b0f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_22b0f4:
    // 0x22b0f4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22b0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_22b0f8:
    // 0x22b0f8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x22b0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_22b0fc:
    // 0x22b0fc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22b0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22b100:
    // 0x22b100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22b100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22b104:
    // 0x22b104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22b104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22b108:
    // 0x22b108: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x22b108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_22b10c:
    // 0x22b10c: 0x40f809  jalr        $v0
label_22b110:
    if (ctx->pc == 0x22B110u) {
        ctx->pc = 0x22B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B10Cu;
        // 0x22b110: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B114u;
        goto label_22b114;
    }
    ctx->pc = 0x22B10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B114u);
        ctx->pc = 0x22B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B10Cu;
        // 0x22b110: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B10Cu, 0x22B114u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B114u;
label_22b114:
    // 0x22b114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b118:
    // 0x22b118: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_22b11c:
    if (ctx->pc == 0x22B11Cu) {
        ctx->pc = 0x22B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B118u;
        // 0x22b11c: 0x8f838e30  lw          $v1, -0x71D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B120u;
        goto label_22b120;
    }
    ctx->pc = 0x22B118u;
    {
        const bool branch_taken_0x22b118 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B118u;
        // 0x22b11c: 0x8f838e30  lw          $v1, -0x71D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b118) {
            ctx->pc = 0x22B130u;
            goto label_22b130;
        }
    }
    ctx->pc = 0x22B120u;
label_22b120:
    // 0x22b120: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x22b120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_22b124:
    // 0x22b124: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_22b128:
    // 0x22b128: 0x10000028  b           . + 4 + (0x28 << 2)
label_22b12c:
    if (ctx->pc == 0x22B12Cu) {
        ctx->pc = 0x22B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B128u;
        // 0x22b12c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B130u;
        goto label_22b130;
    }
    ctx->pc = 0x22B128u;
    {
        const bool branch_taken_0x22b128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B128u;
        // 0x22b12c: 0xae030054  sw          $v1, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b128) {
            ctx->pc = 0x22B1CCu;
            goto label_22b1cc;
        }
    }
    ctx->pc = 0x22B130u;
label_22b130:
    // 0x22b130: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22b130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22b134:
    // 0x22b134: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x22b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_22b138:
    // 0x22b138: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x22b138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_22b13c:
    // 0x22b13c: 0x40f809  jalr        $v0
label_22b140:
    if (ctx->pc == 0x22B140u) {
        ctx->pc = 0x22B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B13Cu;
        // 0x22b140: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B144u;
        goto label_22b144;
    }
    ctx->pc = 0x22B13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22B144u);
        ctx->pc = 0x22B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B13Cu;
        // 0x22b140: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B13Cu, 0x22B144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22B144u;
label_22b144:
    // 0x22b144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22b144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22b148:
    // 0x22b148: 0x56000019  bnel        $s0, $zero, . + 4 + (0x19 << 2)
label_22b14c:
    if (ctx->pc == 0x22B14Cu) {
        ctx->pc = 0x22B14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B148u;
        // 0x22b14c: 0x8f828e30  lw          $v0, -0x71D0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B150u;
        goto label_22b150;
    }
    ctx->pc = 0x22B148u;
    {
        const bool branch_taken_0x22b148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x22b148) {
            ctx->pc = 0x22B14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22B148u;
            // 0x22b14c: 0x8f828e30  lw          $v0, -0x71D0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22B1B0u;
            goto label_22b1b0;
        }
    }
    ctx->pc = 0x22B150u;
label_22b150:
    // 0x22b150: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_22b154:
    if (ctx->pc == 0x22B154u) {
        ctx->pc = 0x22B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B150u;
        // 0x22b154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B158u;
        goto label_22b158;
    }
    ctx->pc = 0x22B150u;
    {
        const bool branch_taken_0x22b150 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B150u;
        // 0x22b154: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b150) {
            ctx->pc = 0x22B180u;
            goto label_22b180;
        }
    }
    ctx->pc = 0x22B158u;
label_22b158:
    // 0x22b158: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b15c:
    // 0x22b15c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22b15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22b160:
    // 0x22b160: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22b160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22b164:
    // 0x22b164: 0xc092848  jal         func_24A120
label_22b168:
    if (ctx->pc == 0x22B168u) {
        ctx->pc = 0x22B168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B164u;
        // 0x22b168: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B16Cu;
        goto label_22b16c;
    }
    ctx->pc = 0x22B164u;
    SET_GPR_U32(ctx, 31, 0x22B16Cu);
    ctx->pc = 0x22B168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B164u;
    // 0x22b168: 0x24040016  addiu       $a0, $zero, 0x16 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x22B164u, 0x22B16Cu)) {
        return;
    }
    ctx->pc = 0x22B16Cu;
label_22b16c:
    // 0x22b16c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b170:
    // 0x22b170: 0xc09281a  jal         func_24A068
label_22b174:
    if (ctx->pc == 0x22B174u) {
        ctx->pc = 0x22B174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B170u;
        // 0x22b174: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B178u;
        goto label_22b178;
    }
    ctx->pc = 0x22B170u;
    SET_GPR_U32(ctx, 31, 0x22B178u);
    ctx->pc = 0x22B174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B170u;
    // 0x22b174: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22B170u, 0x22B178u)) {
        return;
    }
    ctx->pc = 0x22B178u;
label_22b178:
    // 0x22b178: 0x10000014  b           . + 4 + (0x14 << 2)
label_22b17c:
    if (ctx->pc == 0x22B17Cu) {
        ctx->pc = 0x22B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B178u;
        // 0x22b17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B180u;
        goto label_22b180;
    }
    ctx->pc = 0x22B178u;
    {
        const bool branch_taken_0x22b178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B178u;
        // 0x22b17c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b178) {
            ctx->pc = 0x22B1CCu;
            goto label_22b1cc;
        }
    }
    ctx->pc = 0x22B180u;
label_22b180:
    // 0x22b180: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22b180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22b184:
    // 0x22b184: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x22b184u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_22b188:
    // 0x22b188: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x22b188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_22b18c:
    // 0x22b18c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x22b18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_22b190:
    // 0x22b190: 0xc092848  jal         func_24A120
label_22b194:
    if (ctx->pc == 0x22B194u) {
        ctx->pc = 0x22B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B190u;
        // 0x22b194: 0x24c63450  addiu       $a2, $a2, 0x3450 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B198u;
        goto label_22b198;
    }
    ctx->pc = 0x22B190u;
    SET_GPR_U32(ctx, 31, 0x22B198u);
    ctx->pc = 0x22B194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B190u;
    // 0x22b194: 0x24c63450  addiu       $a2, $a2, 0x3450 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x22B190u, 0x22B198u)) {
        return;
    }
    ctx->pc = 0x22B198u;
label_22b198:
    // 0x22b198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22b198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22b19c:
    // 0x22b19c: 0xc09281a  jal         func_24A068
label_22b1a0:
    if (ctx->pc == 0x22B1A0u) {
        ctx->pc = 0x22B1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B19Cu;
        // 0x22b1a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1A4u;
        goto label_22b1a4;
    }
    ctx->pc = 0x22B19Cu;
    SET_GPR_U32(ctx, 31, 0x22B1A4u);
    ctx->pc = 0x22B1A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B19Cu;
    // 0x22b1a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22B19Cu, 0x22B1A4u)) {
        return;
    }
    ctx->pc = 0x22B1A4u;
label_22b1a4:
    // 0x22b1a4: 0x10000009  b           . + 4 + (0x9 << 2)
label_22b1a8:
    if (ctx->pc == 0x22B1A8u) {
        ctx->pc = 0x22B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1A4u;
        // 0x22b1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1ACu;
        goto label_22b1ac;
    }
    ctx->pc = 0x22B1A4u;
    {
        const bool branch_taken_0x22b1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1A4u;
        // 0x22b1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1a4) {
            ctx->pc = 0x22B1CCu;
            goto label_22b1cc;
        }
    }
    ctx->pc = 0x22B1ACu;
label_22b1ac:
    // 0x22b1ac: 0x0  nop
    ctx->pc = 0x22b1acu;
    // NOP
label_22b1b0:
    // 0x22b1b0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x22b1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_22b1b4:
    // 0x22b1b4: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x22b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_22b1b8:
    // 0x22b1b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_22b1bc:
    if (ctx->pc == 0x22B1BCu) {
        ctx->pc = 0x22B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1B8u;
        // 0x22b1bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1C0u;
        goto label_22b1c0;
    }
    ctx->pc = 0x22B1B8u;
    {
        const bool branch_taken_0x22b1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1B8u;
        // 0x22b1bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b1b8) {
            ctx->pc = 0x22B1CCu;
            goto label_22b1cc;
        }
    }
    ctx->pc = 0x22B1C0u;
label_22b1c0:
    // 0x22b1c0: 0xc08abd2  jal         func_22AF48
label_22b1c4:
    if (ctx->pc == 0x22B1C4u) {
        ctx->pc = 0x22B1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1C0u;
        // 0x22b1c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1C8u;
        goto label_22b1c8;
    }
    ctx->pc = 0x22B1C0u;
    SET_GPR_U32(ctx, 31, 0x22B1C8u);
    ctx->pc = 0x22B1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B1C0u;
    // 0x22b1c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AF48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AF48u, 0x22B1C0u, 0x22B1C8u)) {
        return;
    }
    ctx->pc = 0x22B1C8u;
label_22b1c8:
    // 0x22b1c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22b1c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22b1cc:
    // 0x22b1cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22b1ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22b1d0:
    // 0x22b1d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22b1d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22b1d4:
    // 0x22b1d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22b1d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22b1d8:
    // 0x22b1d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22b1d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22b1dc:
    // 0x22b1dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22b1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22b1e0:
    // 0x22b1e0: 0x3e00008  jr          $ra
label_22b1e4:
    if (ctx->pc == 0x22B1E4u) {
        ctx->pc = 0x22B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1E0u;
        // 0x22b1e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22B1E8u;
        goto label_fallthrough_0x22b1e0;
    }
    ctx->pc = 0x22B1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B1E0u;
        // 0x22b1e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22b1e0:
    ctx->pc = 0x22B1E8u;
}
