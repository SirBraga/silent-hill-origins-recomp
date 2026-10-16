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

// Function: sub_002DE140
// Address: 0x2de140 - 0x2de248
void sub_002DE140_0x2de140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE140_0x2de140");
#endif

    switch (ctx->pc) {
        case 0x2de190u: goto label_2de190;
        case 0x2de1d4u: goto label_2de1d4;
        default: break;
    }

    ctx->pc = 0x2de140u;

    // 0x2de140: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2de140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2de144: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2de144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2de148: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2de148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2de14c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2de14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de150: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2de150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2de154: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2de154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2de158: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2de158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2de15c: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2de15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2de160: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2de160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2de164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2de164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2de168: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2de168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2de16c: 0x8c940024  lw          $s4, 0x24($a0)
    ctx->pc = 0x2de16cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2de170: 0x12800028  beqz        $s4, . + 4 + (0x28 << 2)
    ctx->pc = 0x2DE170u;
    {
        const bool branch_taken_0x2de170 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE170u;
        // 0x2de174: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de170) {
            ctx->pc = 0x2DE214u;
            goto label_2de214;
        }
    }
    ctx->pc = 0x2DE178u;
    // 0x2de178: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x2de178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2de17c: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
    ctx->pc = 0x2DE17Cu;
    {
        const bool branch_taken_0x2de17c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE17Cu;
        // 0x2de180: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de17c) {
            ctx->pc = 0x2DE218u;
            goto label_2de218;
        }
    }
    ctx->pc = 0x2DE184u;
    // 0x2de184: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2de184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de188: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2de188u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2de18c: 0x0  nop
    ctx->pc = 0x2de18cu;
    // NOP
label_2de190:
    // 0x2de190: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2de190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2de194: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x2de194u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2de198: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2de198u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2de19c: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2DE19Cu;
    {
        const bool branch_taken_0x2de19c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2DE1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE19Cu;
        // 0x2de1a0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de19c) {
            ctx->pc = 0x2DE1F8u;
            goto label_2de1f8;
        }
    }
    ctx->pc = 0x2DE1A4u;
    // 0x2de1a4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2de1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2de1a8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2de1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2de1ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2de1acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2de1b0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2DE1B0u;
    {
        const bool branch_taken_0x2de1b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de1b0) {
            ctx->pc = 0x2DE1F8u;
            goto label_2de1f8;
        }
    }
    ctx->pc = 0x2DE1B8u;
    // 0x2de1b8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2de1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2de1bc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2de1bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2de1c0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2DE1C0u;
    {
        const bool branch_taken_0x2de1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de1c0) {
            ctx->pc = 0x2DE1F8u;
            goto label_2de1f8;
        }
    }
    ctx->pc = 0x2DE1C8u;
    // 0x2de1c8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2de1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2de1cc: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DE1CCu;
    SET_GPR_U32(ctx, 31, 0x2DE1D4u);
    ctx->pc = 0x2DE1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1CCu;
    // 0x2de1d0: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DE1CCu, 0x2DE1D4u)) {
        return;
    }
    ctx->pc = 0x2DE1D4u;
label_2de1d4:
    // 0x2de1d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2DE1D4u;
    {
        const bool branch_taken_0x2de1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de1d4) {
            ctx->pc = 0x2DE1F8u;
            goto label_2de1f8;
        }
    }
    ctx->pc = 0x2DE1DCu;
    // 0x2de1dc: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x2de1dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2de1e0: 0x2e0902d  daddu       $s2, $s7, $zero
    ctx->pc = 0x2de1e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1e4: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x2de1e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2de1e8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x2de1e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2de1ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2de1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2de1f0: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2de1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2de1f4: 0x2900b  movn        $s2, $zero, $v0
    ctx->pc = 0x2de1f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_2de1f8:
    // 0x2de1f8: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DE1F8u;
    {
        const bool branch_taken_0x2de1f8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1F8u;
        // 0x2de1fc: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de1f8) {
            ctx->pc = 0x2DE214u;
            goto label_2de214;
        }
    }
    ctx->pc = 0x2DE200u;
    // 0x2de200: 0x2b4102b  sltu        $v0, $s5, $s4
    ctx->pc = 0x2de200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x2de204: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x2DE204u;
    {
        const bool branch_taken_0x2de204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE204u;
        // 0x2de208: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de204) {
            ctx->pc = 0x2DE190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2de190;
        }
    }
    ctx->pc = 0x2DE20Cu;
    // 0x2de20c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DE20Cu;
    {
        const bool branch_taken_0x2de20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE20Cu;
        // 0x2de210: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de20c) {
            ctx->pc = 0x2DE21Cu;
            goto label_2de21c;
        }
    }
    ctx->pc = 0x2DE214u;
label_2de214:
    // 0x2de214: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x2de214u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2de218:
    // 0x2de218: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x2de218u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2de21c:
    // 0x2de21c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2de21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2de220: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2de220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de224: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2de224u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de228: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2de228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de22c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2de22cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de230: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2de230u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de234: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2de234u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de238: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2de238u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de23c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2de23cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2de240: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE240u;
        // 0x2de244: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE248u;
}
