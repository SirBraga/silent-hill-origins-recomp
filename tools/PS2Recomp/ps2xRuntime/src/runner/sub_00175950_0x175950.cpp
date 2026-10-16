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

// Function: sub_00175950
// Address: 0x175950 - 0x1759a0
void sub_00175950_0x175950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175950_0x175950");
#endif

    switch (ctx->pc) {
        case 0x175980u: goto label_175980;
        case 0x175990u: goto label_175990;
        default: break;
    }

    ctx->pc = 0x175950u;

    // 0x175950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x175954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175958: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x175958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x17595c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x17595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x175960: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x175960u;
    {
        const bool branch_taken_0x175960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x175964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175960u;
        // 0x175964: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175960) {
            ctx->pc = 0x175988u;
            goto label_175988;
        }
    }
    ctx->pc = 0x175968u;
    // 0x175968: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x175968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17596c: 0x8c449168  lw          $a0, -0x6E98($v0)
    ctx->pc = 0x17596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
    // 0x175970: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x175970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x175974: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x175974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175978: 0xc06c24c  jal         func_1B0930
    ctx->pc = 0x175978u;
    SET_GPR_U32(ctx, 31, 0x175980u);
    ctx->pc = 0x17597Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175978u;
    // 0x17597c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0930u, 0x175978u, 0x175980u)) {
        return;
    }
    ctx->pc = 0x175980u;
label_175980:
    // 0x175980: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x175980u;
    {
        const bool branch_taken_0x175980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175980u;
        // 0x175984: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175980) {
            ctx->pc = 0x175994u;
            goto label_175994;
        }
    }
    ctx->pc = 0x175988u;
label_175988:
    // 0x175988: 0xc05d852  jal         func_176148
    ctx->pc = 0x175988u;
    SET_GPR_U32(ctx, 31, 0x175990u);
    ctx->pc = 0x176148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x176148u, 0x175988u, 0x175990u)) {
        return;
    }
    ctx->pc = 0x175990u;
label_175990:
    // 0x175990: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175990u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175994:
    // 0x175994: 0x3e00008  jr          $ra
    ctx->pc = 0x175994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175994u;
        // 0x175998: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17599Cu;
    // 0x17599c: 0x0  nop
    ctx->pc = 0x17599cu;
    // NOP
    ctx->pc = 0x1759a0u;
}
