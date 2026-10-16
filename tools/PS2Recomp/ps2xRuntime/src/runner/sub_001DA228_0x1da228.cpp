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

// Function: sub_001DA228
// Address: 0x1da228 - 0x1da278
void sub_001DA228_0x1da228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA228_0x1da228");
#endif

    switch (ctx->pc) {
        case 0x1da264u: goto label_1da264;
        default: break;
    }

    ctx->pc = 0x1da228u;

    // 0x1da228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da22c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1da22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1da230: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da234: 0x24421b38  addiu       $v0, $v0, 0x1B38
    ctx->pc = 0x1da234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6968));
    // 0x1da238: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x1da238u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
    // 0x1da23c: 0x3c08005c  lui         $t0, 0x5C
    ctx->pc = 0x1da23cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)92 << 16));
    // 0x1da240: 0x8c870038  lw          $a3, 0x38($a0)
    ctx->pc = 0x1da240u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1da244: 0x8c860024  lw          $a2, 0x24($a0)
    ctx->pc = 0x1da244u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1da248: 0x8ce3000c  lw          $v1, 0xC($a3)
    ctx->pc = 0x1da248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x1da24c: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1da24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1da250: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1da250u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
    // 0x1da254: 0x8d020160  lw          $v0, 0x160($t0)
    ctx->pc = 0x1da254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 352)));
    // 0x1da258: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x1da258u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1da25c: 0xc080596  jal         func_201658
    ctx->pc = 0x1DA25Cu;
    SET_GPR_U32(ctx, 31, 0x1DA264u);
    ctx->pc = 0x1DA260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA25Cu;
    // 0x1da260: 0xad020160  sw          $v0, 0x160($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 352), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x201658u, 0x1DA25Cu, 0x1DA264u)) {
        return;
    }
    ctx->pc = 0x1DA264u;
label_1da264:
    // 0x1da264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da268: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA268u;
        // 0x1da26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA270u;
    // 0x1da270: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x1da270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1da274: 0x0  nop
    ctx->pc = 0x1da274u;
    // NOP
    ctx->pc = 0x1da278u;
}
