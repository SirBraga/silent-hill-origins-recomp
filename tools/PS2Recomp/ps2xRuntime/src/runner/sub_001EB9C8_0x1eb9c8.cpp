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

// Function: sub_001EB9C8
// Address: 0x1eb9c8 - 0x1ebb00
void sub_001EB9C8_0x1eb9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EB9C8_0x1eb9c8");
#endif

    switch (ctx->pc) {
        case 0x1eb9c8u: goto label_1eb9c8;
        case 0x1eb9ccu: goto label_1eb9cc;
        case 0x1eb9d0u: goto label_1eb9d0;
        case 0x1eb9d4u: goto label_1eb9d4;
        case 0x1eb9d8u: goto label_1eb9d8;
        case 0x1eb9dcu: goto label_1eb9dc;
        case 0x1eb9e0u: goto label_1eb9e0;
        case 0x1eb9e4u: goto label_1eb9e4;
        case 0x1eb9e8u: goto label_1eb9e8;
        case 0x1eb9ecu: goto label_1eb9ec;
        case 0x1eb9f0u: goto label_1eb9f0;
        case 0x1eb9f4u: goto label_1eb9f4;
        case 0x1eb9f8u: goto label_1eb9f8;
        case 0x1eb9fcu: goto label_1eb9fc;
        case 0x1eba00u: goto label_1eba00;
        case 0x1eba04u: goto label_1eba04;
        case 0x1eba08u: goto label_1eba08;
        case 0x1eba0cu: goto label_1eba0c;
        case 0x1eba10u: goto label_1eba10;
        case 0x1eba14u: goto label_1eba14;
        case 0x1eba18u: goto label_1eba18;
        case 0x1eba1cu: goto label_1eba1c;
        case 0x1eba20u: goto label_1eba20;
        case 0x1eba24u: goto label_1eba24;
        case 0x1eba28u: goto label_1eba28;
        case 0x1eba2cu: goto label_1eba2c;
        case 0x1eba30u: goto label_1eba30;
        case 0x1eba34u: goto label_1eba34;
        case 0x1eba38u: goto label_1eba38;
        case 0x1eba3cu: goto label_1eba3c;
        case 0x1eba40u: goto label_1eba40;
        case 0x1eba44u: goto label_1eba44;
        case 0x1eba48u: goto label_1eba48;
        case 0x1eba4cu: goto label_1eba4c;
        case 0x1eba50u: goto label_1eba50;
        case 0x1eba54u: goto label_1eba54;
        case 0x1eba58u: goto label_1eba58;
        case 0x1eba5cu: goto label_1eba5c;
        case 0x1eba60u: goto label_1eba60;
        case 0x1eba64u: goto label_1eba64;
        case 0x1eba68u: goto label_1eba68;
        case 0x1eba6cu: goto label_1eba6c;
        case 0x1eba70u: goto label_1eba70;
        case 0x1eba74u: goto label_1eba74;
        case 0x1eba78u: goto label_1eba78;
        case 0x1eba7cu: goto label_1eba7c;
        case 0x1eba80u: goto label_1eba80;
        case 0x1eba84u: goto label_1eba84;
        case 0x1eba88u: goto label_1eba88;
        case 0x1eba8cu: goto label_1eba8c;
        case 0x1eba90u: goto label_1eba90;
        case 0x1eba94u: goto label_1eba94;
        case 0x1eba98u: goto label_1eba98;
        case 0x1eba9cu: goto label_1eba9c;
        case 0x1ebaa0u: goto label_1ebaa0;
        case 0x1ebaa4u: goto label_1ebaa4;
        case 0x1ebaa8u: goto label_1ebaa8;
        case 0x1ebaacu: goto label_1ebaac;
        case 0x1ebab0u: goto label_1ebab0;
        case 0x1ebab4u: goto label_1ebab4;
        case 0x1ebab8u: goto label_1ebab8;
        case 0x1ebabcu: goto label_1ebabc;
        case 0x1ebac0u: goto label_1ebac0;
        case 0x1ebac4u: goto label_1ebac4;
        case 0x1ebac8u: goto label_1ebac8;
        case 0x1ebaccu: goto label_1ebacc;
        case 0x1ebad0u: goto label_1ebad0;
        case 0x1ebad4u: goto label_1ebad4;
        case 0x1ebad8u: goto label_1ebad8;
        case 0x1ebadcu: goto label_1ebadc;
        case 0x1ebae0u: goto label_1ebae0;
        case 0x1ebae4u: goto label_1ebae4;
        case 0x1ebae8u: goto label_1ebae8;
        case 0x1ebaecu: goto label_1ebaec;
        case 0x1ebaf0u: goto label_1ebaf0;
        case 0x1ebaf4u: goto label_1ebaf4;
        case 0x1ebaf8u: goto label_1ebaf8;
        case 0x1ebafcu: goto label_1ebafc;
        default: break;
    }

    ctx->pc = 0x1eb9c8u;

label_1eb9c8:
    // 0x1eb9c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eb9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eb9cc:
    // 0x1eb9cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1eb9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1eb9d0:
    // 0x1eb9d0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1eb9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1eb9d4:
    // 0x1eb9d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eb9d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eb9d8:
    // 0x1eb9d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eb9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1eb9dc:
    // 0x1eb9dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1eb9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1eb9e0:
    // 0x1eb9e0: 0xc07ab94  jal         func_1EAE50
label_1eb9e4:
    if (ctx->pc == 0x1EB9E4u) {
        ctx->pc = 0x1EB9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9E0u;
        // 0x1eb9e4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB9E8u;
        goto label_1eb9e8;
    }
    ctx->pc = 0x1EB9E0u;
    SET_GPR_U32(ctx, 31, 0x1EB9E8u);
    ctx->pc = 0x1EB9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB9E0u;
    // 0x1eb9e4: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAE50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAE50u, 0x1EB9E0u, 0x1EB9E8u)) {
        return;
    }
    ctx->pc = 0x1EB9E8u;
label_1eb9e8:
    // 0x1eb9e8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1eb9ec:
    // 0x1eb9ec: 0xc078ee0  jal         func_1E3B80
label_1eb9f0:
    if (ctx->pc == 0x1EB9F0u) {
        ctx->pc = 0x1EB9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9ECu;
        // 0x1eb9f0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EB9F4u;
        goto label_1eb9f4;
    }
    ctx->pc = 0x1EB9ECu;
    SET_GPR_U32(ctx, 31, 0x1EB9F4u);
    ctx->pc = 0x1EB9F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB9ECu;
    // 0x1eb9f0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B80u, 0x1EB9ECu, 0x1EB9F4u)) {
        return;
    }
    ctx->pc = 0x1EB9F4u;
label_1eb9f4:
    // 0x1eb9f4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eb9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1eb9f8:
    // 0x1eb9f8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1eb9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1eb9fc:
    // 0x1eb9fc: 0xc078ee0  jal         func_1E3B80
label_1eba00:
    if (ctx->pc == 0x1EBA00u) {
        ctx->pc = 0x1EBA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EB9FCu;
        // 0x1eba00: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA04u;
        goto label_1eba04;
    }
    ctx->pc = 0x1EB9FCu;
    SET_GPR_U32(ctx, 31, 0x1EBA04u);
    ctx->pc = 0x1EBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EB9FCu;
    // 0x1eba00: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B80u, 0x1EB9FCu, 0x1EBA04u)) {
        return;
    }
    ctx->pc = 0x1EBA04u;
label_1eba04:
    // 0x1eba04: 0xc0932d4  jal         func_24CB50
label_1eba08:
    if (ctx->pc == 0x1EBA08u) {
        ctx->pc = 0x1EBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA04u;
        // 0x1eba08: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA0Cu;
        goto label_1eba0c;
    }
    ctx->pc = 0x1EBA04u;
    SET_GPR_U32(ctx, 31, 0x1EBA0Cu);
    ctx->pc = 0x1EBA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA04u;
    // 0x1eba08: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB50u, 0x1EBA04u, 0x1EBA0Cu)) {
        return;
    }
    ctx->pc = 0x1EBA0Cu;
label_1eba0c:
    // 0x1eba0c: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x1eba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1eba10:
    // 0x1eba10: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x1eba10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1eba14:
    // 0x1eba14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1eba14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1eba18:
    // 0x1eba18: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x1eba18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_1eba1c:
    // 0x1eba1c: 0x2012  mflo        $a0
    ctx->pc = 0x1eba1cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1eba20:
    // 0x1eba20: 0x40f809  jalr        $v0
label_1eba24:
    if (ctx->pc == 0x1EBA24u) {
        ctx->pc = 0x1EBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA20u;
        // 0x1eba24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA28u;
        goto label_1eba28;
    }
    ctx->pc = 0x1EBA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EBA28u);
        ctx->pc = 0x1EBA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA20u;
        // 0x1eba24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBA20u, 0x1EBA28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EBA28u;
label_1eba28:
    // 0x1eba28: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eba28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1eba2c:
    // 0x1eba2c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x1eba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1eba30:
    // 0x1eba30: 0xc078eda  jal         func_1E3B68
label_1eba34:
    if (ctx->pc == 0x1EBA34u) {
        ctx->pc = 0x1EBA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA30u;
        // 0x1eba34: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA38u;
        goto label_1eba38;
    }
    ctx->pc = 0x1EBA30u;
    SET_GPR_U32(ctx, 31, 0x1EBA38u);
    ctx->pc = 0x1EBA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA30u;
    // 0x1eba34: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B68u, 0x1EBA30u, 0x1EBA38u)) {
        return;
    }
    ctx->pc = 0x1EBA38u;
label_1eba38:
    // 0x1eba38: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1eba38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1eba3c:
    // 0x1eba3c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1eba3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eba40:
    // 0x1eba40: 0xc078eda  jal         func_1E3B68
label_1eba44:
    if (ctx->pc == 0x1EBA44u) {
        ctx->pc = 0x1EBA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA40u;
        // 0x1eba44: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA48u;
        goto label_1eba48;
    }
    ctx->pc = 0x1EBA40u;
    SET_GPR_U32(ctx, 31, 0x1EBA48u);
    ctx->pc = 0x1EBA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBA40u;
    // 0x1eba44: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3B68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3B68u, 0x1EBA40u, 0x1EBA48u)) {
        return;
    }
    ctx->pc = 0x1EBA48u;
label_1eba48:
    // 0x1eba48: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1eba48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eba4c:
    // 0x1eba4c: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1eba4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1eba50:
    // 0x1eba50: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
label_1eba54:
    if (ctx->pc == 0x1EBA54u) {
        ctx->pc = 0x1EBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA50u;
        // 0x1eba54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBA58u;
        goto label_1eba58;
    }
    ctx->pc = 0x1EBA50u;
    {
        const bool branch_taken_0x1eba50 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EBA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBA50u;
        // 0x1eba54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eba50) {
            ctx->pc = 0x1EBAE4u;
            goto label_1ebae4;
        }
    }
    ctx->pc = 0x1EBA58u;
label_1eba58:
    // 0x1eba58: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x1eba58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1eba5c:
    // 0x1eba5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1eba5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eba60:
    // 0x1eba60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eba60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eba64:
    // 0x1eba64: 0x0  nop
    ctx->pc = 0x1eba64u;
    // NOP
label_1eba68:
    // 0x1eba68: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1eba68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1eba6c:
    // 0x1eba6c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1eba6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1eba70:
    // 0x1eba70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1eba70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eba74:
    // 0x1eba74: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eba74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1eba78:
    // 0x1eba78: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x1eba78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1eba7c:
    // 0x1eba7c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1eba7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1eba80:
    // 0x1eba80: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1eba80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eba84:
    // 0x1eba84: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eba84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1eba88:
    // 0x1eba88: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1eba88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1eba8c:
    // 0x1eba8c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1eba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1eba90:
    // 0x1eba90: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1eba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1eba94:
    // 0x1eba94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1eba98:
    // 0x1eba98: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x1eba98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1eba9c:
    // 0x1eba9c: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1eba9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ebaa0:
    // 0x1ebaa0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1ebaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1ebaa4:
    // 0x1ebaa4: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1ebaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebaa8:
    // 0x1ebaa8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ebaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ebaac:
    // 0x1ebaac: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1ebaacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1ebab0:
    // 0x1ebab0: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x1ebab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1ebab4:
    // 0x1ebab4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1ebab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebab8:
    // 0x1ebab8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1ebab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1ebabc:
    // 0x1ebabc: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1ebabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1ebac0:
    // 0x1ebac0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x1ebac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1ebac4:
    // 0x1ebac4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1ebac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ebac8:
    // 0x1ebac8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1ebac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1ebacc:
    // 0x1ebacc: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x1ebaccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_1ebad0:
    // 0x1ebad0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x1ebad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1ebad4:
    // 0x1ebad4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1ebad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1ebad8:
    // 0x1ebad8: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x1ebad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ebadc:
    // 0x1ebadc: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_1ebae0:
    if (ctx->pc == 0x1EBAE0u) {
        ctx->pc = 0x1EBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBADCu;
        // 0x1ebae0: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAE4u;
        goto label_1ebae4;
    }
    ctx->pc = 0x1EBADCu;
    {
        const bool branch_taken_0x1ebadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EBAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBADCu;
        // 0x1ebae0: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ebadc) {
            ctx->pc = 0x1EBA68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eba68;
        }
    }
    ctx->pc = 0x1EBAE4u;
label_1ebae4:
    // 0x1ebae4: 0xc07ab0a  jal         func_1EAC28
label_1ebae8:
    if (ctx->pc == 0x1EBAE8u) {
        ctx->pc = 0x1EBAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAE4u;
        // 0x1ebae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBAECu;
        goto label_1ebaec;
    }
    ctx->pc = 0x1EBAE4u;
    SET_GPR_U32(ctx, 31, 0x1EBAECu);
    ctx->pc = 0x1EBAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EBAE4u;
    // 0x1ebae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EAC28u, 0x1EBAE4u, 0x1EBAECu)) {
        return;
    }
    ctx->pc = 0x1EBAECu;
label_1ebaec:
    // 0x1ebaec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ebaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ebaf0:
    // 0x1ebaf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ebaf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ebaf4:
    // 0x1ebaf4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ebaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ebaf8:
    // 0x1ebaf8: 0x3e00008  jr          $ra
label_1ebafc:
    if (ctx->pc == 0x1EBAFCu) {
        ctx->pc = 0x1EBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAF8u;
        // 0x1ebafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EBB00u;
        goto label_fallthrough_0x1ebaf8;
    }
    ctx->pc = 0x1EBAF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EBAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EBAF8u;
        // 0x1ebafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EBAF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ebaf8:
    ctx->pc = 0x1EBB00u;
}
