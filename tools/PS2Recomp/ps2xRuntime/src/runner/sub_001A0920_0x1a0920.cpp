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

// Function: sub_001A0920
// Address: 0x1a0920 - 0x1a09b8
void sub_001A0920_0x1a0920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0920_0x1a0920");
#endif

    switch (ctx->pc) {
        case 0x1a0958u: goto label_1a0958;
        case 0x1a0970u: goto label_1a0970;
        default: break;
    }

    ctx->pc = 0x1a0920u;

    // 0x1a0920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a0920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a0924: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a0924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a0928: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a0928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a092c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a092cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0930: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a0930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a0934: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a0934u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0938: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a0938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a093c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a0940: 0x8e430804  lw          $v1, 0x804($s2)
    ctx->pc = 0x1a0940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2052)));
    // 0x1a0944: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0948: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A0948u;
    {
        const bool branch_taken_0x1a0948 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1A094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0948u;
        // 0x1a094c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0948) {
            ctx->pc = 0x1A0994u;
            goto label_1a0994;
        }
    }
    ctx->pc = 0x1A0950u;
    // 0x1a0950: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a0950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0954: 0x0  nop
    ctx->pc = 0x1a0954u;
    // NOP
label_1a0958:
    // 0x1a0958: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1a0958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a095c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a095cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0960: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a0960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a0964: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1a0964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1a0968: 0xc0c5cd6  jal         func_317358
    ctx->pc = 0x1A0968u;
    SET_GPR_U32(ctx, 31, 0x1A0970u);
    ctx->pc = 0x1A096Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0968u;
    // 0x1a096c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317358u, 0x1A0968u, 0x1A0970u)) {
        return;
    }
    ctx->pc = 0x1A0970u;
label_1a0970:
    // 0x1a0970: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0970u;
    {
        const bool branch_taken_0x1a0970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0970) {
            ctx->pc = 0x1A0974u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0970u;
            // 0x1a0974: 0x8e430804  lw          $v1, 0x804($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2052)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0980u;
            goto label_1a0980;
        }
    }
    ctx->pc = 0x1A0978u;
    // 0x1a0978: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A0978u;
    {
        const bool branch_taken_0x1a0978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0978u;
        // 0x1a097c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a0978) {
            ctx->pc = 0x1A0998u;
            goto label_1a0998;
        }
    }
    ctx->pc = 0x1A0980u;
label_1a0980:
    // 0x1a0980: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a0980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1a0984: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a0984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a0988: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x1a0988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1a098c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x1A098Cu;
    {
        const bool branch_taken_0x1a098c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A0990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A098Cu;
        // 0x1a0990: 0x26310098  addiu       $s1, $s1, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a098c) {
            ctx->pc = 0x1A0958u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a0958;
        }
    }
    ctx->pc = 0x1A0994u;
label_1a0994:
    // 0x1a0994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a0994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a0998:
    // 0x1a0998: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a0998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a099c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a099cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a09a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a09a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a09a4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a09a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a09a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a09a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a09ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A09ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A09ACu;
        // 0x1a09b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A09ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A09B4u;
    // 0x1a09b4: 0x0  nop
    ctx->pc = 0x1a09b4u;
    // NOP
    ctx->pc = 0x1a09b8u;
}
