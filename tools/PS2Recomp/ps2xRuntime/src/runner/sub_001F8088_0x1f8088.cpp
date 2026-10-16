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

// Function: sub_001F8088
// Address: 0x1f8088 - 0x1f8120
void sub_001F8088_0x1f8088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8088_0x1f8088");
#endif

    switch (ctx->pc) {
        case 0x1f80a0u: goto label_1f80a0;
        case 0x1f80b8u: goto label_1f80b8;
        default: break;
    }

    ctx->pc = 0x1f8088u;

    // 0x1f8088: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f8088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f808c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f808cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f8090: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f8090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f8094: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x1f8094u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1f8098: 0xc07dff2  jal         func_1F7FC8
    ctx->pc = 0x1F8098u;
    SET_GPR_U32(ctx, 31, 0x1F80A0u);
    ctx->pc = 0x1F809Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8098u;
    // 0x1f809c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7FC8u, 0x1F8098u, 0x1F80A0u)) {
        return;
    }
    ctx->pc = 0x1F80A0u;
label_1f80a0:
    // 0x1f80a0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f80a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f80a4: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1f80a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1f80a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F80A8u;
    {
        const bool branch_taken_0x1f80a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80A8u;
        // 0x1f80ac: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80a8) {
            ctx->pc = 0x1F80B8u;
            goto label_1f80b8;
        }
    }
    ctx->pc = 0x1F80B0u;
    // 0x1f80b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F80B0u;
    {
        const bool branch_taken_0x1f80b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80B0u;
        // 0x1f80b4: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80b0) {
            ctx->pc = 0x1F80C0u;
            goto label_1f80c0;
        }
    }
    ctx->pc = 0x1F80B8u;
label_1f80b8:
    // 0x1f80b8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F80B8u;
    {
        const bool branch_taken_0x1f80b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80B8u;
        // 0x1f80bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80b8) {
            ctx->pc = 0x1F8114u;
            goto label_1f8114;
        }
    }
    ctx->pc = 0x1F80C0u;
label_1f80c0:
    // 0x1f80c0: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1F80C0u;
    {
        const bool branch_taken_0x1f80c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F80C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80C0u;
        // 0x1f80c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80c0) {
            ctx->pc = 0x1F8114u;
            goto label_1f8114;
        }
    }
    ctx->pc = 0x1F80C8u;
    // 0x1f80c8: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x1f80c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x1f80cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F80CCu;
    {
        const bool branch_taken_0x1f80cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80CCu;
        // 0x1f80d0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80cc) {
            ctx->pc = 0x1F80E4u;
            goto label_1f80e4;
        }
    }
    ctx->pc = 0x1F80D4u;
    // 0x1f80d4: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F80D4u;
    {
        const bool branch_taken_0x1f80d4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1F80D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80D4u;
        // 0x1f80d8: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80d4) {
            ctx->pc = 0x1F80B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f80b8;
        }
    }
    ctx->pc = 0x1F80DCu;
    // 0x1f80dc: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F80DCu;
    {
        const bool branch_taken_0x1f80dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f80dc) {
            ctx->pc = 0x1F80E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F80DCu;
            // 0x1f80e0: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F80F0u;
            goto label_1f80f0;
        }
    }
    ctx->pc = 0x1F80E4u;
label_1f80e4:
    // 0x1f80e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f80e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f80e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1F80E8u;
    {
        const bool branch_taken_0x1f80e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F80ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F80E8u;
        // 0x1f80ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f80e8) {
            ctx->pc = 0x1F8114u;
            goto label_1f8114;
        }
    }
    ctx->pc = 0x1F80F0u;
label_1f80f0:
    // 0x1f80f0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F80F0u;
    {
        const bool branch_taken_0x1f80f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f80f0) {
            ctx->pc = 0x1F80F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F80F0u;
            // 0x1f80f4: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8108u;
            goto label_1f8108;
        }
    }
    ctx->pc = 0x1F80F8u;
    // 0x1f80f8: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1f80f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1f80fc: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x1f80fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x1f8100: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8100u;
    {
        const bool branch_taken_0x1f8100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8100u;
        // 0x1f8104: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8100) {
            ctx->pc = 0x1F8114u;
            goto label_1f8114;
        }
    }
    ctx->pc = 0x1F8108u;
label_1f8108:
    // 0x1f8108: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1f8108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1f810c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x1f810cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f8110: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x1f8110u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_1f8114:
    // 0x1f8114: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f8114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f8118: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8118u;
        // 0x1f811c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8120u;
}
