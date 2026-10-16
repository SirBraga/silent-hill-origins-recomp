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

// Function: sub_0025D200
// Address: 0x25d200 - 0x25d260
void sub_0025D200_0x25d200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D200_0x25d200");
#endif

    ctx->pc = 0x25d200u;

    // 0x25d200: 0x8f8685f8  lw          $a2, -0x7A08($gp)
    ctx->pc = 0x25d200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x25d204: 0x3c080026  lui         $t0, 0x26
    ctx->pc = 0x25d204u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)38 << 16));
    // 0x25d208: 0x3c090026  lui         $t1, 0x26
    ctx->pc = 0x25d208u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)38 << 16));
    // 0x25d20c: 0x3c070026  lui         $a3, 0x26
    ctx->pc = 0x25d20cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)38 << 16));
    // 0x25d210: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x25d210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x25d214: 0x2508d178  addiu       $t0, $t0, -0x2E88
    ctx->pc = 0x25d214u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955384));
    // 0x25d218: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x25d218u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x25d21c: 0x2529d100  addiu       $t1, $t1, -0x2F00
    ctx->pc = 0x25d21cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294955264));
    // 0x25d220: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x25d220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x25d224: 0x24e7d148  addiu       $a3, $a3, -0x2EB8
    ctx->pc = 0x25d224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294955336));
    // 0x25d228: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x25d228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x25d22c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x25d22cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d230: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x25d230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x25d234: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x25d234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x25d238: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x25d238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x25d23c: 0xacc50014  sw          $a1, 0x14($a2)
    ctx->pc = 0x25d23cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
    // 0x25d240: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x25d240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25d244: 0xacc30018  sw          $v1, 0x18($a2)
    ctx->pc = 0x25d244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
    // 0x25d248: 0xac880010  sw          $t0, 0x10($a0)
    ctx->pc = 0x25d248u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 8));
    // 0x25d24c: 0xac890018  sw          $t1, 0x18($a0)
    ctx->pc = 0x25d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 9));
    // 0x25d250: 0xac87001c  sw          $a3, 0x1C($a0)
    ctx->pc = 0x25d250u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 7));
    // 0x25d254: 0x3e00008  jr          $ra
    ctx->pc = 0x25D254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D254u;
        // 0x25d258: 0xacc0000c  sw          $zero, 0xC($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D25Cu;
    // 0x25d25c: 0x0  nop
    ctx->pc = 0x25d25cu;
    // NOP
    ctx->pc = 0x25d260u;
}
