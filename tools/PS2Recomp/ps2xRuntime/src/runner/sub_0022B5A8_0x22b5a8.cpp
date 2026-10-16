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

// Function: sub_0022B5A8
// Address: 0x22b5a8 - 0x22b618
void sub_0022B5A8_0x22b5a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B5A8_0x22b5a8");
#endif

    switch (ctx->pc) {
        case 0x22b608u: goto label_22b608;
        default: break;
    }

    ctx->pc = 0x22b5a8u;

    // 0x22b5a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x22b5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x22b5ac: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x22b5acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22b5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22b5b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x22b5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x22b5b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x22B5B8u;
    {
        const bool branch_taken_0x22b5b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b5b8) {
            ctx->pc = 0x22B5D8u;
            goto label_22b5d8;
        }
    }
    ctx->pc = 0x22B5C0u;
    // 0x22b5c0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x22b5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x22b5c4: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x22b5c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22b5c8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22b5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x22b5cc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x22b5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x22b5d0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x22b5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x22b5d4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x22b5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_22b5d8:
    // 0x22b5d8: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x22B5D8u;
    {
        const bool branch_taken_0x22b5d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B5D8u;
        // 0x22b5dc: 0xacc50004  sw          $a1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b5d8) {
            ctx->pc = 0x22B608u;
            goto label_22b608;
        }
    }
    ctx->pc = 0x22B5E0u;
    // 0x22b5e0: 0x8ca40090  lw          $a0, 0x90($a1)
    ctx->pc = 0x22b5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x22b5e4: 0x24a20090  addiu       $v0, $a1, 0x90
    ctx->pc = 0x22b5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 144));
    // 0x22b5e8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x22b5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x22b5ec: 0x24c30008  addiu       $v1, $a2, 0x8
    ctx->pc = 0x22b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x22b5f0: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x22b5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x22b5f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x22b5f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b5f8: 0x8ca20090  lw          $v0, 0x90($a1)
    ctx->pc = 0x22b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 144)));
    // 0x22b5fc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x22b5fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x22b600: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x22B600u;
    SET_GPR_U32(ctx, 31, 0x22B608u);
    ctx->pc = 0x22B604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B600u;
    // 0x22b604: 0xaca30090  sw          $v1, 0x90($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 144), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x22B600u, 0x22B608u)) {
        return;
    }
    ctx->pc = 0x22B608u;
label_22b608:
    // 0x22b608: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22b608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b60c: 0x3e00008  jr          $ra
    ctx->pc = 0x22B60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B60Cu;
        // 0x22b610: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B614u;
    // 0x22b614: 0x0  nop
    ctx->pc = 0x22b614u;
    // NOP
    ctx->pc = 0x22b618u;
}
