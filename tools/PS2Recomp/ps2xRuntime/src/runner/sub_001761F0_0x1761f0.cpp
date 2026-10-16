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

// Function: sub_001761F0
// Address: 0x1761f0 - 0x176238
void sub_001761F0_0x1761f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001761F0_0x1761f0");
#endif

    switch (ctx->pc) {
        case 0x176228u: goto label_176228;
        default: break;
    }

    ctx->pc = 0x1761f0u;

    // 0x1761f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1761f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1761f4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1761f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x1761f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1761f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1761fc: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1761fcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x701A70u));
    // 0x176200: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x176200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x176204: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x176204u;
    {
        const bool branch_taken_0x176204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x176208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176204u;
        // 0x176208: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176204) {
            ctx->pc = 0x17622Cu;
            goto label_17622c;
        }
    }
    ctx->pc = 0x17620Cu;
    // 0x17620c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x176210: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x176210u;
    {
        const bool branch_taken_0x176210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x176210) {
            ctx->pc = 0x17622Cu;
            goto label_17622c;
        }
    }
    ctx->pc = 0x176218u;
    // 0x176218: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x176218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x17621c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17621cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176220: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x176220u;
    SET_GPR_U32(ctx, 31, 0x176228u);
    ctx->pc = 0x176224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176220u;
    // 0x176224: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x176220u, 0x176228u)) {
        return;
    }
    ctx->pc = 0x176228u;
label_176228:
    // 0x176228: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x176228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_17622c:
    // 0x17622c: 0x3e00008  jr          $ra
    ctx->pc = 0x17622Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17622Cu;
        // 0x176230: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17622Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176234u;
    // 0x176234: 0x0  nop
    ctx->pc = 0x176234u;
    // NOP
    ctx->pc = 0x176238u;
}
