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

// Function: sub_002175F8
// Address: 0x2175f8 - 0x217650
void sub_002175F8_0x2175f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002175F8_0x2175f8");
#endif

    switch (ctx->pc) {
        case 0x217630u: goto label_217630;
        default: break;
    }

    ctx->pc = 0x2175f8u;

    // 0x2175f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2175f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175fc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2175fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217600: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x217600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x217604: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x217604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x217608: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x217608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21760c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x21760cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217610: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x217610u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x217614: 0xa044025c  sb          $a0, 0x25C($v0)
    ctx->pc = 0x217614u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 604), (uint8_t)GPR_U32(ctx, 4));
    // 0x217618: 0xac430260  sw          $v1, 0x260($v0)
    ctx->pc = 0x217618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 608), GPR_U32(ctx, 3));
    // 0x21761c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21761cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217620: 0xac480264  sw          $t0, 0x264($v0)
    ctx->pc = 0x217620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 612), GPR_U32(ctx, 8));
    // 0x217624: 0xac490268  sw          $t1, 0x268($v0)
    ctx->pc = 0x217624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 616), GPR_U32(ctx, 9));
    // 0x217628: 0xc085842  jal         func_216108
    ctx->pc = 0x217628u;
    SET_GPR_U32(ctx, 31, 0x217630u);
    ctx->pc = 0x21762Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217628u;
    // 0x21762c: 0xac40026c  sw          $zero, 0x26C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x216108u, 0x217628u, 0x217630u)) {
        return;
    }
    ctx->pc = 0x217630u;
label_217630:
    // 0x217630: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217634: 0x3e00008  jr          $ra
    ctx->pc = 0x217634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217634u;
        // 0x217638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21763Cu;
    // 0x21763c: 0x0  nop
    ctx->pc = 0x21763cu;
    // NOP
    // 0x217640: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x217640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x217644: 0x0  nop
    ctx->pc = 0x217644u;
    // NOP
    // 0x217648: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x217648u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x21764c: 0x0  nop
    ctx->pc = 0x21764cu;
    // NOP
    ctx->pc = 0x217650u;
}
