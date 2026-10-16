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

// Function: sub_002DF138
// Address: 0x2df138 - 0x2df1f8
void sub_002DF138_0x2df138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF138_0x2df138");
#endif

    switch (ctx->pc) {
        case 0x2df138u: goto label_2df138;
        case 0x2df13cu: goto label_2df13c;
        case 0x2df140u: goto label_2df140;
        case 0x2df144u: goto label_2df144;
        case 0x2df148u: goto label_2df148;
        case 0x2df14cu: goto label_2df14c;
        case 0x2df150u: goto label_2df150;
        case 0x2df154u: goto label_2df154;
        case 0x2df158u: goto label_2df158;
        case 0x2df15cu: goto label_2df15c;
        case 0x2df160u: goto label_2df160;
        case 0x2df164u: goto label_2df164;
        case 0x2df168u: goto label_2df168;
        case 0x2df16cu: goto label_2df16c;
        case 0x2df170u: goto label_2df170;
        case 0x2df174u: goto label_2df174;
        case 0x2df178u: goto label_2df178;
        case 0x2df17cu: goto label_2df17c;
        case 0x2df180u: goto label_2df180;
        case 0x2df184u: goto label_2df184;
        case 0x2df188u: goto label_2df188;
        case 0x2df18cu: goto label_2df18c;
        case 0x2df190u: goto label_2df190;
        case 0x2df194u: goto label_2df194;
        case 0x2df198u: goto label_2df198;
        case 0x2df19cu: goto label_2df19c;
        case 0x2df1a0u: goto label_2df1a0;
        case 0x2df1a4u: goto label_2df1a4;
        case 0x2df1a8u: goto label_2df1a8;
        case 0x2df1acu: goto label_2df1ac;
        case 0x2df1b0u: goto label_2df1b0;
        case 0x2df1b4u: goto label_2df1b4;
        case 0x2df1b8u: goto label_2df1b8;
        case 0x2df1bcu: goto label_2df1bc;
        case 0x2df1c0u: goto label_2df1c0;
        case 0x2df1c4u: goto label_2df1c4;
        case 0x2df1c8u: goto label_2df1c8;
        case 0x2df1ccu: goto label_2df1cc;
        case 0x2df1d0u: goto label_2df1d0;
        case 0x2df1d4u: goto label_2df1d4;
        case 0x2df1d8u: goto label_2df1d8;
        case 0x2df1dcu: goto label_2df1dc;
        case 0x2df1e0u: goto label_2df1e0;
        case 0x2df1e4u: goto label_2df1e4;
        case 0x2df1e8u: goto label_2df1e8;
        case 0x2df1ecu: goto label_2df1ec;
        case 0x2df1f0u: goto label_2df1f0;
        case 0x2df1f4u: goto label_2df1f4;
        default: break;
    }

    ctx->pc = 0x2df138u;

label_2df138:
    // 0x2df138: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2df138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2df13c:
    // 0x2df13c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2df13cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2df140:
    // 0x2df140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2df140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2df144:
    // 0x2df144: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2df144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2df148:
    // 0x2df148: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2df148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2df14c:
    // 0x2df14c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x2df14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2df150:
    // 0x2df150: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2df154:
    if (ctx->pc == 0x2DF154u) {
        ctx->pc = 0x2DF158u;
        goto label_2df158;
    }
    ctx->pc = 0x2DF150u;
    {
        const bool branch_taken_0x2df150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df150) {
            ctx->pc = 0x2DF160u;
            goto label_2df160;
        }
    }
    ctx->pc = 0x2DF158u;
label_2df158:
    // 0x2df158: 0x40f809  jalr        $v0
label_2df15c:
    if (ctx->pc == 0x2DF15Cu) {
        ctx->pc = 0x2DF160u;
        goto label_2df160;
    }
    ctx->pc = 0x2DF158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DF160u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF158u, 0x2DF160u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DF160u;
label_2df160:
    // 0x2df160: 0xc0b7768  jal         func_2DDDA0
label_2df164:
    if (ctx->pc == 0x2DF164u) {
        ctx->pc = 0x2DF164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF160u;
        // 0x2df164: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF168u;
        goto label_2df168;
    }
    ctx->pc = 0x2DF160u;
    SET_GPR_U32(ctx, 31, 0x2DF168u);
    ctx->pc = 0x2DF164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF160u;
    // 0x2df164: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDDA0u, 0x2DF160u, 0x2DF168u)) {
        return;
    }
    ctx->pc = 0x2DF168u;
label_2df168:
    // 0x2df168: 0xc0b7768  jal         func_2DDDA0
label_2df16c:
    if (ctx->pc == 0x2DF16Cu) {
        ctx->pc = 0x2DF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF168u;
        // 0x2df16c: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF170u;
        goto label_2df170;
    }
    ctx->pc = 0x2DF168u;
    SET_GPR_U32(ctx, 31, 0x2DF170u);
    ctx->pc = 0x2DF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF168u;
    // 0x2df16c: 0x2604002c  addiu       $a0, $s0, 0x2C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDDA0u, 0x2DF168u, 0x2DF170u)) {
        return;
    }
    ctx->pc = 0x2DF170u;
label_2df170:
    // 0x2df170: 0xc0b74c0  jal         func_2DD300
label_2df174:
    if (ctx->pc == 0x2DF174u) {
        ctx->pc = 0x2DF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF170u;
        // 0x2df174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF178u;
        goto label_2df178;
    }
    ctx->pc = 0x2DF170u;
    SET_GPR_U32(ctx, 31, 0x2DF178u);
    ctx->pc = 0x2DF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF170u;
    // 0x2df174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD300u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD300u, 0x2DF170u, 0x2DF178u)) {
        return;
    }
    ctx->pc = 0x2DF178u;
label_2df178:
    // 0x2df178: 0xc0b7d76  jal         func_2DF5D8
label_2df17c:
    if (ctx->pc == 0x2DF17Cu) {
        ctx->pc = 0x2DF17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF178u;
        // 0x2df17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF180u;
        goto label_2df180;
    }
    ctx->pc = 0x2DF178u;
    SET_GPR_U32(ctx, 31, 0x2DF180u);
    ctx->pc = 0x2DF17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF178u;
    // 0x2df17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF5D8u, 0x2DF178u, 0x2DF180u)) {
        return;
    }
    ctx->pc = 0x2DF180u;
label_2df180:
    // 0x2df180: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x2df180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_2df184:
    // 0x2df184: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2df184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2df188:
    // 0x2df188: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2df18c:
    if (ctx->pc == 0x2DF18Cu) {
        ctx->pc = 0x2DF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF188u;
        // 0x2df18c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF190u;
        goto label_2df190;
    }
    ctx->pc = 0x2DF188u;
    {
        const bool branch_taken_0x2df188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF188u;
        // 0x2df18c: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df188) {
            ctx->pc = 0x2DF1C4u;
            goto label_2df1c4;
        }
    }
    ctx->pc = 0x2DF190u;
label_2df190:
    // 0x2df190: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2df190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2df194:
    // 0x2df194: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x2df194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2df198:
    // 0x2df198: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_2df19c:
    if (ctx->pc == 0x2DF19Cu) {
        ctx->pc = 0x2DF19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF198u;
        // 0x2df19c: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1A0u;
        goto label_2df1a0;
    }
    ctx->pc = 0x2DF198u;
    {
        const bool branch_taken_0x2df198 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2df198) {
            ctx->pc = 0x2DF19Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF198u;
            // 0x2df19c: 0x3c040071  lui         $a0, 0x71 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF1B0u;
            goto label_2df1b0;
        }
    }
    ctx->pc = 0x2DF1A0u;
label_2df1a0:
    // 0x2df1a0: 0xc0b81ea  jal         func_2E07A8
label_2df1a4:
    if (ctx->pc == 0x2DF1A4u) {
        ctx->pc = 0x2DF1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1A0u;
        // 0x2df1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1A8u;
        goto label_2df1a8;
    }
    ctx->pc = 0x2DF1A0u;
    SET_GPR_U32(ctx, 31, 0x2DF1A8u);
    ctx->pc = 0x2DF1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1A0u;
    // 0x2df1a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DF1A0u, 0x2DF1A8u)) {
        return;
    }
    ctx->pc = 0x2DF1A8u;
label_2df1a8:
    // 0x2df1a8: 0x1000000b  b           . + 4 + (0xB << 2)
label_2df1ac:
    if (ctx->pc == 0x2DF1ACu) {
        ctx->pc = 0x2DF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1A8u;
        // 0x2df1ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1B0u;
        goto label_2df1b0;
    }
    ctx->pc = 0x2DF1A8u;
    {
        const bool branch_taken_0x2df1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1A8u;
        // 0x2df1ac: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1a8) {
            ctx->pc = 0x2DF1D8u;
            goto label_2df1d8;
        }
    }
    ctx->pc = 0x2DF1B0u;
label_2df1b0:
    // 0x2df1b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2df1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2df1b4:
    // 0x2df1b4: 0xc0b81ea  jal         func_2E07A8
label_2df1b8:
    if (ctx->pc == 0x2DF1B8u) {
        ctx->pc = 0x2DF1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1B4u;
        // 0x2df1b8: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1BCu;
        goto label_2df1bc;
    }
    ctx->pc = 0x2DF1B4u;
    SET_GPR_U32(ctx, 31, 0x2DF1BCu);
    ctx->pc = 0x2DF1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1B4u;
    // 0x2df1b8: 0x24848068  addiu       $a0, $a0, -0x7F98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2DF1B4u, 0x2DF1BCu)) {
        return;
    }
    ctx->pc = 0x2DF1BCu;
label_2df1bc:
    // 0x2df1bc: 0x10000006  b           . + 4 + (0x6 << 2)
label_2df1c0:
    if (ctx->pc == 0x2DF1C0u) {
        ctx->pc = 0x2DF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1BCu;
        // 0x2df1c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1C4u;
        goto label_2df1c4;
    }
    ctx->pc = 0x2DF1BCu;
    {
        const bool branch_taken_0x2df1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1BCu;
        // 0x2df1c0: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df1bc) {
            ctx->pc = 0x2DF1D8u;
            goto label_2df1d8;
        }
    }
    ctx->pc = 0x2DF1C4u;
label_2df1c4:
    // 0x2df1c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2df1c8:
    if (ctx->pc == 0x2DF1C8u) {
        ctx->pc = 0x2DF1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1C4u;
        // 0x2df1c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1CCu;
        goto label_2df1cc;
    }
    ctx->pc = 0x2DF1C4u;
    {
        const bool branch_taken_0x2df1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2df1c4) {
            ctx->pc = 0x2DF1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DF1C4u;
            // 0x2df1c8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DF1D8u;
            goto label_2df1d8;
        }
    }
    ctx->pc = 0x2DF1CCu;
label_2df1cc:
    // 0x2df1cc: 0xc0b7080  jal         func_2DC200
label_2df1d0:
    if (ctx->pc == 0x2DF1D0u) {
        ctx->pc = 0x2DF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1CCu;
        // 0x2df1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1D4u;
        goto label_2df1d4;
    }
    ctx->pc = 0x2DF1CCu;
    SET_GPR_U32(ctx, 31, 0x2DF1D4u);
    ctx->pc = 0x2DF1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF1CCu;
    // 0x2df1d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2DF1CCu, 0x2DF1D4u)) {
        return;
    }
    ctx->pc = 0x2DF1D4u;
label_2df1d4:
    // 0x2df1d4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2df1d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2df1d8:
    // 0x2df1d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df1dc:
    // 0x2df1dc: 0x3e00008  jr          $ra
label_2df1e0:
    if (ctx->pc == 0x2DF1E0u) {
        ctx->pc = 0x2DF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1DCu;
        // 0x2df1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DF1E4u;
        goto label_2df1e4;
    }
    ctx->pc = 0x2DF1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF1DCu;
        // 0x2df1e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF1E4u;
label_2df1e4:
    // 0x2df1e4: 0x0  nop
    ctx->pc = 0x2df1e4u;
    // NOP
label_2df1e8:
    // 0x2df1e8: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x2df1e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2df1ec:
    // 0x2df1ec: 0x0  nop
    ctx->pc = 0x2df1ecu;
    // NOP
label_2df1f0:
    // 0x2df1f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2df1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2df1f4:
    // 0x2df1f4: 0x0  nop
    ctx->pc = 0x2df1f4u;
    // NOP
    ctx->pc = 0x2df1f8u;
}
