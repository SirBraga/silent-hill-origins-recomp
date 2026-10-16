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

// Function: sub_002F6830
// Address: 0x2f6830 - 0x2f68a0
void sub_002F6830_0x2f6830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F6830_0x2f6830");
#endif

    switch (ctx->pc) {
        case 0x2f6880u: goto label_2f6880;
        default: break;
    }

    ctx->pc = 0x2f6830u;

    // 0x2f6830: 0x24022010  addiu       $v0, $zero, 0x2010
    ctx->pc = 0x2f6830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8208));
    // 0x2f6834: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f6834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f6838: 0x823818  mult        $a3, $a0, $v0
    ctx->pc = 0x2f6838u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2f683c: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f683cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f6840: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f6840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f6844: 0x2463cc80  addiu       $v1, $v1, -0x3380
    ctx->pc = 0x2f6844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954112));
    // 0x2f6848: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f6848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f684c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f684cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f6850: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x2f6850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f6854: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f6854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f6858: 0xe38821  addu        $s1, $a3, $v1
    ctx->pc = 0x2f6858u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2f685c: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2f685cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f6860: 0x10d20009  beq         $a2, $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F6860u;
    {
        const bool branch_taken_0x2f6860 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 18));
        ctx->pc = 0x2F6864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6860u;
        // 0x2f6864: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f6860) {
            ctx->pc = 0x2F6888u;
            goto label_2f6888;
        }
    }
    ctx->pc = 0x2F6868u;
    // 0x2f6868: 0x2470000c  addiu       $s0, $v1, 0xC
    ctx->pc = 0x2f6868u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2f686c: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x2f686cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2f6870: 0xf08021  addu        $s0, $a3, $s0
    ctx->pc = 0x2f6870u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x2f6874: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2f6874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f6878: 0xc0bd9fc  jal         func_2F67F0
    ctx->pc = 0x2F6878u;
    SET_GPR_U32(ctx, 31, 0x2F6880u);
    ctx->pc = 0x2F687Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F6878u;
    // 0x2f687c: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F67F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F67F0u, 0x2F6878u, 0x2F6880u)) {
        return;
    }
    ctx->pc = 0x2F6880u;
label_2f6880:
    // 0x2f6880: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x2f6880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
    // 0x2f6884: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2f6884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2f6888:
    // 0x2f6888: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f6888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f688c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f688cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f6890: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f6890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f6894: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f6894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f6898: 0x3e00008  jr          $ra
    ctx->pc = 0x2F6898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F689Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F6898u;
        // 0x2f689c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F6898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F68A0u;
}
