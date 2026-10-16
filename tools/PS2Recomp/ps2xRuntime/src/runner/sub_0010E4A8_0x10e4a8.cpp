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

// Function: sub_0010E4A8
// Address: 0x10e4a8 - 0x10e528
void sub_0010E4A8_0x10e4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E4A8_0x10e4a8");
#endif

    switch (ctx->pc) {
        case 0x10e4c8u: goto label_10e4c8;
        case 0x10e4e8u: goto label_10e4e8;
        case 0x10e504u: goto label_10e504;
        case 0x10e510u: goto label_10e510;
        default: break;
    }

    ctx->pc = 0x10e4a8u;

    // 0x10e4a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10e4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10e4ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10e4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x10e4b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x10e4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x10e4b4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10e4b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e4b8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10e4b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e4bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e4bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e4c0: 0xc0439b0  jal         func_10E6C0
    ctx->pc = 0x10E4C0u;
    SET_GPR_U32(ctx, 31, 0x10E4C8u);
    ctx->pc = 0x10E4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4C0u;
    // 0x10e4c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E6C0u, 0x10E4C0u, 0x10E4C8u)) {
        return;
    }
    ctx->pc = 0x10E4C8u;
label_10e4c8:
    // 0x10e4c8: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10E4C8u;
    {
        const bool branch_taken_0x10e4c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4C8u;
        // 0x10e4cc: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4c8) {
            ctx->pc = 0x10E4DCu;
            goto label_10e4dc;
        }
    }
    ctx->pc = 0x10E4D0u;
    // 0x10e4d0: 0x8c6282ec  lw          $v0, -0x7D14($v1)
    ctx->pc = 0x10e4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935276)));
    // 0x10e4d4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x10E4D4u;
    {
        const bool branch_taken_0x10e4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4D4u;
        // 0x10e4d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4d4) {
            ctx->pc = 0x10E514u;
            goto label_10e514;
        }
    }
    ctx->pc = 0x10E4DCu;
label_10e4dc:
    // 0x10e4dc: 0xac6082ec  sw          $zero, -0x7D14($v1)
    ctx->pc = 0x10e4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935276), GPR_U32(ctx, 0));
    // 0x10e4e0: 0xc043a38  jal         func_10E8E0
    ctx->pc = 0x10E4E0u;
    SET_GPR_U32(ctx, 31, 0x10E4E8u);
    ctx->pc = 0x10E4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4E0u;
    // 0x10e4e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E8E0u, 0x10E4E0u, 0x10E4E8u)) {
        return;
    }
    ctx->pc = 0x10E4E8u;
label_10e4e8:
    // 0x10e4e8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10E4E8u;
    {
        const bool branch_taken_0x10e4e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4E8u;
        // 0x10e4ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4e8) {
            ctx->pc = 0x10E514u;
            goto label_10e514;
        }
    }
    ctx->pc = 0x10E4F0u;
    // 0x10e4f0: 0x8e301244  lw          $s0, 0x1244($s1)
    ctx->pc = 0x10e4f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4676)));
    // 0x10e4f4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10E4F4u;
    {
        const bool branch_taken_0x10e4f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4F4u;
        // 0x10e4f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4f4) {
            ctx->pc = 0x10E510u;
            goto label_10e510;
        }
    }
    ctx->pc = 0x10E4FCu;
    // 0x10e4fc: 0xc0ba760  jal         func_2E9D80
    ctx->pc = 0x10E4FCu;
    SET_GPR_U32(ctx, 31, 0x10E504u);
    ctx->pc = 0x10E500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4FCu;
    // 0x10e500: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9D80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9D80u, 0x10E4FCu, 0x10E504u)) {
        return;
    }
    ctx->pc = 0x10E504u;
label_10e504:
    // 0x10e504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10e504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e508: 0xc0ba718  jal         func_2E9C60
    ctx->pc = 0x10E508u;
    SET_GPR_U32(ctx, 31, 0x10E510u);
    ctx->pc = 0x10E50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E508u;
    // 0x10e50c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E9C60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E9C60u, 0x10E508u, 0x10E510u)) {
        return;
    }
    ctx->pc = 0x10E510u;
label_10e510:
    // 0x10e510: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x10e510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10e514:
    // 0x10e514: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10e514u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e51c: 0x3e00008  jr          $ra
    ctx->pc = 0x10E51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E51Cu;
        // 0x10e520: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E524u;
    // 0x10e524: 0x0  nop
    ctx->pc = 0x10e524u;
    // NOP
    ctx->pc = 0x10e528u;
}
