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

// Function: sub_001A9488
// Address: 0x1a9488 - 0x1a94e0
void sub_001A9488_0x1a9488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9488_0x1a9488");
#endif

    switch (ctx->pc) {
        case 0x1a94a8u: goto label_1a94a8;
        case 0x1a94d4u: goto label_1a94d4;
        default: break;
    }

    ctx->pc = 0x1a9488u;

    // 0x1a9488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a9488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a948c: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A948Cu;
    {
        const bool branch_taken_0x1a948c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A948Cu;
        // 0x1a9490: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a948c) {
            ctx->pc = 0x1A94C0u;
            goto label_1a94c0;
        }
    }
    ctx->pc = 0x1A9494u;
    // 0x1a9494: 0x24830194  addiu       $v1, $a0, 0x194
    ctx->pc = 0x1a9494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 404));
    // 0x1a9498: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9498u;
    {
        const bool branch_taken_0x1a9498 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A949Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9498u;
        // 0x1a949c: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9498) {
            ctx->pc = 0x1A94C4u;
            goto label_1a94c4;
        }
    }
    ctx->pc = 0x1A94A0u;
    // 0x1a94a0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x1a94a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1a94a4: 0x0  nop
    ctx->pc = 0x1a94a4u;
    // NOP
label_1a94a8:
    // 0x1a94a8: 0x0  nop
    ctx->pc = 0x1a94a8u;
    // NOP
    // 0x1a94ac: 0x0  nop
    ctx->pc = 0x1a94acu;
    // NOP
    // 0x1a94b0: 0x0  nop
    ctx->pc = 0x1a94b0u;
    // NOP
    // 0x1a94b4: 0x0  nop
    ctx->pc = 0x1a94b4u;
    // NOP
    // 0x1a94b8: 0x5483fffb  bnel        $a0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A94B8u;
    {
        const bool branch_taken_0x1a94b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a94b8) {
            ctx->pc = 0x1A94BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A94B8u;
            // 0x1a94bc: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A94A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a94a8;
        }
    }
    ctx->pc = 0x1A94C0u;
label_1a94c0:
    // 0x1a94c0: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1a94c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_1a94c4:
    // 0x1a94c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A94C4u;
    {
        const bool branch_taken_0x1a94c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A94C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94C4u;
        // 0x1a94c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94c4) {
            ctx->pc = 0x1A94D8u;
            goto label_1a94d8;
        }
    }
    ctx->pc = 0x1A94CCu;
    // 0x1a94cc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1A94CCu;
    SET_GPR_U32(ctx, 31, 0x1A94D4u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1A94CCu, 0x1A94D4u)) {
        return;
    }
    ctx->pc = 0x1A94D4u;
label_1a94d4:
    // 0x1a94d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a94d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a94d8:
    // 0x1a94d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A94D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A94DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A94D8u;
        // 0x1a94dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A94D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A94E0u;
}
