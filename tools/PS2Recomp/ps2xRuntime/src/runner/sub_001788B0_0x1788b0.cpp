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

// Function: sub_001788B0
// Address: 0x1788b0 - 0x178960
void sub_001788B0_0x1788b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001788B0_0x1788b0");
#endif

    switch (ctx->pc) {
        case 0x1788e0u: goto label_1788e0;
        case 0x178920u: goto label_178920;
        case 0x17894cu: goto label_17894c;
        default: break;
    }

    ctx->pc = 0x1788b0u;

    // 0x1788b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1788b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1788b4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x1788b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x1788b8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1788b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1788bc: 0x24426a30  addiu       $v0, $v0, 0x6A30
    ctx->pc = 0x1788bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27184));
    // 0x1788c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1788c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1788c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1788c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1788c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1788c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1788cc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1788ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1788d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1788d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1788d4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1788D4u;
    {
        const bool branch_taken_0x1788d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788D4u;
        // 0x1788d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788d4) {
            ctx->pc = 0x178938u;
            goto label_178938;
        }
    }
    ctx->pc = 0x1788DCu;
    // 0x1788dc: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1788dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1788e0:
    // 0x1788e0: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1788E0u;
    {
        const bool branch_taken_0x1788e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1788e0) {
            ctx->pc = 0x1788E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1788E0u;
            // 0x1788e4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178930u;
            goto label_178930;
        }
    }
    ctx->pc = 0x1788E8u;
    // 0x1788e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1788e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1788ec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1788ECu;
    {
        const bool branch_taken_0x1788ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1788F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788ECu;
        // 0x1788f0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788ec) {
            ctx->pc = 0x1788FCu;
            goto label_1788fc;
        }
    }
    ctx->pc = 0x1788F4u;
    // 0x1788f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1788F4u;
    {
        const bool branch_taken_0x1788f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1788F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1788F4u;
        // 0x1788f8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1788f4) {
            ctx->pc = 0x178900u;
            goto label_178900;
        }
    }
    ctx->pc = 0x1788FCu;
label_1788fc:
    // 0x1788fc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1788fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_178900:
    // 0x178900: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x178900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178904: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178904u;
    {
        const bool branch_taken_0x178904 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178904u;
        // 0x178908: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178904) {
            ctx->pc = 0x178914u;
            goto label_178914;
        }
    }
    ctx->pc = 0x17890Cu;
    // 0x17890c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17890Cu;
    {
        const bool branch_taken_0x17890c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17890Cu;
        // 0x178910: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17890c) {
            ctx->pc = 0x178918u;
            goto label_178918;
        }
    }
    ctx->pc = 0x178914u;
label_178914:
    // 0x178914: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x178914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_178918:
    // 0x178918: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x178918u;
    SET_GPR_U32(ctx, 31, 0x178920u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x178918u, 0x178920u)) {
        return;
    }
    ctx->pc = 0x178920u;
label_178920:
    // 0x178920: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178924: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178928: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x178928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17892c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_178930:
    // 0x178930: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x178930u;
    {
        const bool branch_taken_0x178930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x178930) {
            ctx->pc = 0x178934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178930u;
            // 0x178934: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1788E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1788e0;
        }
    }
    ctx->pc = 0x178938u;
label_178938:
    // 0x178938: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x178938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x17893c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17893Cu;
    {
        const bool branch_taken_0x17893c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17893c) {
            ctx->pc = 0x178940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17893Cu;
            // 0x178940: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178950u;
            goto label_178950;
        }
    }
    ctx->pc = 0x178944u;
    // 0x178944: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x178944u;
    SET_GPR_U32(ctx, 31, 0x17894Cu);
    ctx->pc = 0x178948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x178944u;
    // 0x178948: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x178944u, 0x17894Cu)) {
        return;
    }
    ctx->pc = 0x17894Cu;
label_17894c:
    // 0x17894c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17894cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178950:
    // 0x178950: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x178950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178954: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x178958: 0x3e00008  jr          $ra
    ctx->pc = 0x178958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17895Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178958u;
        // 0x17895c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178960u;
}
