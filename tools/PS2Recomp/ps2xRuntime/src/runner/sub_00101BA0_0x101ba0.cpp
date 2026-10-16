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

// Function: sub_00101BA0
// Address: 0x101ba0 - 0x101c50
void sub_00101BA0_0x101ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101BA0_0x101ba0");
#endif

    switch (ctx->pc) {
        case 0x101bd4u: goto label_101bd4;
        case 0x101be8u: goto label_101be8;
        case 0x101c08u: goto label_101c08;
        default: break;
    }

    ctx->pc = 0x101ba0u;

    // 0x101ba0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x101ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x101ba4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x101ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x101ba8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x101ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x101bac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101bacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bb0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x101bb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bb4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x101bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x101bb8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x101bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x101bbc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x101bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bc0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x101bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x101bc4: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x101bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x101bc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x101bcc: 0xc065c40  jal         func_197100
    ctx->pc = 0x101BCCu;
    SET_GPR_U32(ctx, 31, 0x101BD4u);
    ctx->pc = 0x101BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101BCCu;
    // 0x101bd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x101BCCu, 0x101BD4u)) {
        return;
    }
    ctx->pc = 0x101BD4u;
label_101bd4:
    // 0x101bd4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x101bd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101bd8: 0x8e2200e4  lw          $v0, 0xE4($s1)
    ctx->pc = 0x101bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
    // 0x101bdc: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x101BDCu;
    {
        const bool branch_taken_0x101bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101BDCu;
        // 0x101be0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101bdc) {
            ctx->pc = 0x101C28u;
            goto label_101c28;
        }
    }
    ctx->pc = 0x101BE4u;
    // 0x101be4: 0x0  nop
    ctx->pc = 0x101be4u;
    // NOP
label_101be8:
    // 0x101be8: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x101be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x101bec: 0x2422021  addu        $a0, $s2, $v0
    ctx->pc = 0x101becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x101bf0: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x101bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x101bf4: 0x56830008  bnel        $s4, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x101BF4u;
    {
        const bool branch_taken_0x101bf4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 3));
        if (branch_taken_0x101bf4) {
            ctx->pc = 0x101BF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101BF4u;
            // 0x101bf8: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101C18u;
            goto label_101c18;
        }
    }
    ctx->pc = 0x101BFCu;
    // 0x101bfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x101bfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c00: 0xc0c5cd6  jal         func_317358
    ctx->pc = 0x101C00u;
    SET_GPR_U32(ctx, 31, 0x101C08u);
    ctx->pc = 0x101C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101C00u;
    // 0x101c04: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317358u, 0x101C00u, 0x101C08u)) {
        return;
    }
    ctx->pc = 0x101C08u;
label_101c08:
    // 0x101c08: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x101C08u;
    {
        const bool branch_taken_0x101c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x101c08) {
            ctx->pc = 0x101C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101C08u;
            // 0x101c0c: 0x8e2200e4  lw          $v0, 0xE4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x101C18u;
            goto label_101c18;
        }
    }
    ctx->pc = 0x101C10u;
    // 0x101c10: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x101C10u;
    {
        const bool branch_taken_0x101c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C10u;
        // 0x101c14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c10) {
            ctx->pc = 0x101C30u;
            goto label_101c30;
        }
    }
    ctx->pc = 0x101C18u;
label_101c18:
    // 0x101c18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x101c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x101c1c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x101c1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x101c20: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x101C20u;
    {
        const bool branch_taken_0x101c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x101C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C20u;
        // 0x101c24: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101c20) {
            ctx->pc = 0x101BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_101be8;
        }
    }
    ctx->pc = 0x101C28u;
label_101c28:
    // 0x101c28: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x101c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x101c2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x101c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_101c30:
    // 0x101c30: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x101c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x101c34: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x101c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x101c38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x101c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101c3c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x101c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101c40: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x101c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101c48: 0x3e00008  jr          $ra
    ctx->pc = 0x101C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101C48u;
        // 0x101c4c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101C50u;
}
