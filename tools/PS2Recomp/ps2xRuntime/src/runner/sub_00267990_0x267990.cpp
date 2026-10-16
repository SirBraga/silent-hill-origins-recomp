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

// Function: sub_00267990
// Address: 0x267990 - 0x267a30
void sub_00267990_0x267990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267990_0x267990");
#endif

    switch (ctx->pc) {
        case 0x2679b8u: goto label_2679b8;
        case 0x2679c8u: goto label_2679c8;
        case 0x2679e8u: goto label_2679e8;
        case 0x2679fcu: goto label_2679fc;
        default: break;
    }

    ctx->pc = 0x267990u;

    // 0x267990: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x267990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x267994: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x267994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x267998: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x267998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26799c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x26799cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2679a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2679a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2679a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2679a8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2679a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2679ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2679ACu;
    {
        const bool branch_taken_0x2679ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679ACu;
        // 0x2679b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679ac) {
            ctx->pc = 0x2679DCu;
            goto label_2679dc;
        }
    }
    ctx->pc = 0x2679B4u;
    // 0x2679b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2679b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2679b8:
    // 0x2679b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2679b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2679bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2679bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2679c0: 0xc099d7a  jal         func_2675E8
    ctx->pc = 0x2679C0u;
    SET_GPR_U32(ctx, 31, 0x2679C8u);
    ctx->pc = 0x2679C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679C0u;
    // 0x2679c4: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2675E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2675E8u, 0x2679C0u, 0x2679C8u)) {
        return;
    }
    ctx->pc = 0x2679C8u;
label_2679c8:
    // 0x2679c8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2679c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2679cc: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2679ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2679d0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2679D0u;
    {
        const bool branch_taken_0x2679d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2679D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679D0u;
        // 0x2679d4: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679d0) {
            ctx->pc = 0x2679B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2679b8;
        }
    }
    ctx->pc = 0x2679D8u;
    // 0x2679d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2679d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2679dc:
    // 0x2679dc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2679DCu;
    {
        const bool branch_taken_0x2679dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2679E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2679DCu;
        // 0x2679e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2679dc) {
            ctx->pc = 0x267A0Cu;
            goto label_267a0c;
        }
    }
    ctx->pc = 0x2679E4u;
    // 0x2679e4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2679e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2679e8:
    // 0x2679e8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2679e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2679ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2679ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2679f0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2679f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2679f4: 0xc099d8c  jal         func_267630
    ctx->pc = 0x2679F4u;
    SET_GPR_U32(ctx, 31, 0x2679FCu);
    ctx->pc = 0x2679F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2679F4u;
    // 0x2679f8: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x267630u, 0x2679F4u, 0x2679FCu)) {
        return;
    }
    ctx->pc = 0x2679FCu;
label_2679fc:
    // 0x2679fc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2679fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x267a00: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x267a00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x267a04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x267A04u;
    {
        const bool branch_taken_0x267a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x267A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A04u;
        // 0x267a08: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267a04) {
            ctx->pc = 0x2679E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2679e8;
        }
    }
    ctx->pc = 0x267A0Cu;
label_267a0c:
    // 0x267a0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x267a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x267a10: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x267a10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267a14: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x267a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x267a18: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x267a18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267a1c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x267a1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267a20: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x267a20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x267a24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x267a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x267a28: 0x3e00008  jr          $ra
    ctx->pc = 0x267A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267A28u;
        // 0x267a2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267A30u;
}
