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

// Function: sub_0025EDD0
// Address: 0x25edd0 - 0x25ee28
void sub_0025EDD0_0x25edd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EDD0_0x25edd0");
#endif

    switch (ctx->pc) {
        case 0x25ee14u: goto label_25ee14;
        default: break;
    }

    ctx->pc = 0x25edd0u;

    // 0x25edd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25edd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25edd4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x25edd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25edd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25edd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25eddc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x25eddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x25ede0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x25ede0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x25ede4: 0x8cc4006c  lw          $a0, 0x6C($a2)
    ctx->pc = 0x25ede4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
    // 0x25ede8: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25EDE8u;
    {
        const bool branch_taken_0x25ede8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x25EDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EDE8u;
        // 0x25edec: 0xaf858618  sw          $a1, -0x79E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ede8) {
            ctx->pc = 0x25EE08u;
            goto label_25ee08;
        }
    }
    ctx->pc = 0x25EDF0u;
    // 0x25edf0: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x25edf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x25edf4: 0x8c634190  lw          $v1, 0x4190($v1)
    ctx->pc = 0x25edf4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B4190u));
    // 0x25edf8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25edf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x25edfc: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x25edfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x25ee00: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25ee00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x25ee04: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x25ee04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_25ee08:
    // 0x25ee08: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x25ee08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ee0c: 0xc09240e  jal         func_249038
    ctx->pc = 0x25EE0Cu;
    SET_GPR_U32(ctx, 31, 0x25EE14u);
    ctx->pc = 0x25EE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25EE0Cu;
    // 0x25ee10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249038u, 0x25EE0Cu, 0x25EE14u)) {
        return;
    }
    ctx->pc = 0x25EE14u;
label_25ee14:
    // 0x25ee14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25ee14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ee18: 0xaf808618  sw          $zero, -0x79E8($gp)
    ctx->pc = 0x25ee18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936088), GPR_U32(ctx, 0));
    // 0x25ee1c: 0x3e00008  jr          $ra
    ctx->pc = 0x25EE1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EE1Cu;
        // 0x25ee20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EE1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EE24u;
    // 0x25ee24: 0x0  nop
    ctx->pc = 0x25ee24u;
    // NOP
    ctx->pc = 0x25ee28u;
}
