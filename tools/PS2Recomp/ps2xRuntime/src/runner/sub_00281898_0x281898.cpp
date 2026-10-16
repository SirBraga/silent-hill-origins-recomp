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

// Function: sub_00281898
// Address: 0x281898 - 0x2818f0
void sub_00281898_0x281898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281898_0x281898");
#endif

    switch (ctx->pc) {
        case 0x2818acu: goto label_2818ac;
        case 0x2818c4u: goto label_2818c4;
        case 0x2818d4u: goto label_2818d4;
        default: break;
    }

    ctx->pc = 0x281898u;

    // 0x281898: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28189c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2818a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2818a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2818a4: 0xc097188  jal         func_25C620
    ctx->pc = 0x2818A4u;
    SET_GPR_U32(ctx, 31, 0x2818ACu);
    ctx->pc = 0x2818A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818A4u;
    // 0x2818a8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C620u, 0x2818A4u, 0x2818ACu)) {
        return;
    }
    ctx->pc = 0x2818ACu;
label_2818ac:
    // 0x2818ac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2818acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2818b0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2818b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x2818b4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2818B4u;
    {
        const bool branch_taken_0x2818b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2818B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818B4u;
        // 0x2818b8: 0x3c040001  lui         $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818b4) {
            ctx->pc = 0x2818CCu;
            goto label_2818cc;
        }
    }
    ctx->pc = 0x2818BCu;
    // 0x2818bc: 0xc09945a  jal         func_265168
    ctx->pc = 0x2818BCu;
    SET_GPR_U32(ctx, 31, 0x2818C4u);
    ctx->pc = 0x2818C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818BCu;
    // 0x2818c0: 0x34841010  ori         $a0, $a0, 0x1010 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4112);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x2818BCu, 0x2818C4u)) {
        return;
    }
    ctx->pc = 0x2818C4u;
label_2818c4:
    // 0x2818c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2818C4u;
    {
        const bool branch_taken_0x2818c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2818C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818C4u;
        // 0x2818c8: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2818c4) {
            ctx->pc = 0x2818D8u;
            goto label_2818d8;
        }
    }
    ctx->pc = 0x2818CCu;
label_2818cc:
    // 0x2818cc: 0xc09945a  jal         func_265168
    ctx->pc = 0x2818CCu;
    SET_GPR_U32(ctx, 31, 0x2818D4u);
    ctx->pc = 0x2818D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2818CCu;
    // 0x2818d0: 0x3484100f  ori         $a0, $a0, 0x100F (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4111);
    ctx->in_delay_slot = false;
    ctx->pc = 0x265168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x265168u, 0x2818CCu, 0x2818D4u)) {
        return;
    }
    ctx->pc = 0x2818D4u;
label_2818d4:
    // 0x2818d4: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x2818d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_2818d8:
    // 0x2818d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2818d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2818dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2818dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2818e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2818e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2818e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2818E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2818E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2818E4u;
        // 0x2818e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2818E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2818ECu;
    // 0x2818ec: 0x0  nop
    ctx->pc = 0x2818ecu;
    // NOP
    ctx->pc = 0x2818f0u;
}
