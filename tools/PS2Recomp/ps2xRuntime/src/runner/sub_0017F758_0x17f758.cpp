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

// Function: sub_0017F758
// Address: 0x17f758 - 0x17f790
void sub_0017F758_0x17f758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F758_0x17f758");
#endif

    switch (ctx->pc) {
        case 0x17f784u: goto label_17f784;
        default: break;
    }

    ctx->pc = 0x17f758u;

    // 0x17f758: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f75c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f760: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x17f760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x17f764: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f768: 0xac448980  sw          $a0, -0x7680($v0)
    ctx->pc = 0x17f768u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x338980u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338980u, _value); } while (0);
    // 0x17f76c: 0x8ca3870c  lw          $v1, -0x78F4($a1)
    ctx->pc = 0x17f76cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33870Cu));
    // 0x17f770: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x17f770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x17f774: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F774u;
    {
        const bool branch_taken_0x17f774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F774u;
        // 0x17f778: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f774) {
            ctx->pc = 0x17F788u;
            goto label_17f788;
        }
    }
    ctx->pc = 0x17F77Cu;
    // 0x17f77c: 0xc05e280  jal         func_178A00
    ctx->pc = 0x17F77Cu;
    SET_GPR_U32(ctx, 31, 0x17F784u);
    ctx->pc = 0x178A00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178A00u, 0x17F77Cu, 0x17F784u)) {
        return;
    }
    ctx->pc = 0x17F784u;
label_17f784:
    // 0x17f784: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f788:
    // 0x17f788: 0x3e00008  jr          $ra
    ctx->pc = 0x17F788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F788u;
        // 0x17f78c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F790u;
}
