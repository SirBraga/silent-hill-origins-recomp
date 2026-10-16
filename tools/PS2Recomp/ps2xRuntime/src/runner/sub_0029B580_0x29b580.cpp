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

// Function: sub_0029B580
// Address: 0x29b580 - 0x29b608
void sub_0029B580_0x29b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B580_0x29b580");
#endif

    switch (ctx->pc) {
        case 0x29b5b0u: goto label_29b5b0;
        case 0x29b5e0u: goto label_29b5e0;
        default: break;
    }

    ctx->pc = 0x29b580u;

    // 0x29b580: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29b584: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x29b588: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x29b58c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29b58cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b590: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29b594: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x29b594u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29b598: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b59c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29b59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5a0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29b5a4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x29b5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b5a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x29b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x29b5ac: 0x0  nop
    ctx->pc = 0x29b5acu;
    // NOP
label_29b5b0:
    // 0x29b5b0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x29b5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x29b5b4: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x29b5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29b5b8: 0x18800005  blez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B5B8u;
    {
        const bool branch_taken_0x29b5b8 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x29B5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5B8u;
        // 0x29b5bc: 0x204102a  slt         $v0, $s0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5b8) {
            ctx->pc = 0x29B5D0u;
            goto label_29b5d0;
        }
    }
    ctx->pc = 0x29B5C0u;
    // 0x29b5c0: 0x202200b  movn        $a0, $s0, $v0
    ctx->pc = 0x29b5c0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16));
    // 0x29b5c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x29b5c8: 0x2048023  subu        $s0, $s0, $a0
    ctx->pc = 0x29b5c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x29b5cc: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x29b5ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_29b5d0:
    // 0x29b5d0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B5D0u;
    {
        const bool branch_taken_0x29b5d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B5D0u;
        // 0x29b5d4: 0x2501023  subu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b5d0) {
            ctx->pc = 0x29B5ECu;
            goto label_29b5ec;
        }
    }
    ctx->pc = 0x29B5D8u;
    // 0x29b5d8: 0xc0a7274  jal         func_29C9D0
    ctx->pc = 0x29B5D8u;
    SET_GPR_U32(ctx, 31, 0x29B5E0u);
    ctx->pc = 0x29B5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B5D8u;
    // 0x29b5dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C9D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C9D0u, 0x29B5D8u, 0x29B5E0u)) {
        return;
    }
    ctx->pc = 0x29B5E0u;
label_29b5e0:
    // 0x29b5e0: 0x5453fff3  bnel        $v0, $s3, . + 4 + (-0xD << 2)
    ctx->pc = 0x29B5E0u;
    {
        const bool branch_taken_0x29b5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x29b5e0) {
            ctx->pc = 0x29B5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29B5E0u;
            // 0x29b5e4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29B5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29b5b0;
        }
    }
    ctx->pc = 0x29B5E8u;
    // 0x29b5e8: 0x2501023  subu        $v0, $s2, $s0
    ctx->pc = 0x29b5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_29b5ec:
    // 0x29b5ec: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29b5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29b5f0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29b5f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29b5f4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29b5f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29b5f8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29b5f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29b5fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b5fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b600: 0x3e00008  jr          $ra
    ctx->pc = 0x29B600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B600u;
        // 0x29b604: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B608u;
}
