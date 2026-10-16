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

// Function: sub_0016D218
// Address: 0x16d218 - 0x16d270
void sub_0016D218_0x16d218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D218_0x16d218");
#endif

    switch (ctx->pc) {
        case 0x16d248u: goto label_16d248;
        default: break;
    }

    ctx->pc = 0x16d218u;

    // 0x16d218: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16d218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16d21c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16d21cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16d220: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d224: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d228: 0x8e0500d0  lw          $a1, 0xD0($s0)
    ctx->pc = 0x16d228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x16d22c: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x16D22Cu;
    {
        const bool branch_taken_0x16d22c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D22Cu;
        // 0x16d230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d22c) {
            ctx->pc = 0x16D25Cu;
            goto label_16d25c;
        }
    }
    ctx->pc = 0x16D234u;
    // 0x16d234: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x16d234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d238: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16D238u;
    {
        const bool branch_taken_0x16d238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D238u;
        // 0x16d23c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d238) {
            ctx->pc = 0x16D258u;
            goto label_16d258;
        }
    }
    ctx->pc = 0x16D240u;
    // 0x16d240: 0xc0643a6  jal         func_190E98
    ctx->pc = 0x16D240u;
    SET_GPR_U32(ctx, 31, 0x16D248u);
    ctx->pc = 0x16D244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D240u;
    // 0x16d244: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190E98u, 0x16D240u, 0x16D248u)) {
        return;
    }
    ctx->pc = 0x16D248u;
label_16d248:
    // 0x16d248: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x16d248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x16d24c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x16d24cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x16d250: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D250u;
    {
        const bool branch_taken_0x16d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D250u;
        // 0x16d254: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d250) {
            ctx->pc = 0x16D25Cu;
            goto label_16d25c;
        }
    }
    ctx->pc = 0x16D258u;
label_16d258:
    // 0x16d258: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16d25c:
    // 0x16d25c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16d25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d264: 0x3e00008  jr          $ra
    ctx->pc = 0x16D264u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D264u;
        // 0x16d268: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D264u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D26Cu;
    // 0x16d26c: 0x0  nop
    ctx->pc = 0x16d26cu;
    // NOP
    ctx->pc = 0x16d270u;
}
