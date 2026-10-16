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

// Function: sub_001A0208
// Address: 0x1a0208 - 0x1a0278
void sub_001A0208_0x1a0208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0208_0x1a0208");
#endif

    switch (ctx->pc) {
        case 0x1a0230u: goto label_1a0230;
        default: break;
    }

    ctx->pc = 0x1a0208u;

    // 0x1a0208: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a0208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a020c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a020cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a0210: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a0210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a0214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a0214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a0218: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a0218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a021c: 0xae05080c  sw          $a1, 0x80C($s0)
    ctx->pc = 0x1a021cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2060), GPR_U32(ctx, 5));
    // 0x1a0220: 0x26040850  addiu       $a0, $s0, 0x850
    ctx->pc = 0x1a0220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2128));
    // 0x1a0224: 0xae000810  sw          $zero, 0x810($s0)
    ctx->pc = 0x1a0224u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2064), GPR_U32(ctx, 0));
    // 0x1a0228: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A0228u;
    SET_GPR_U32(ctx, 31, 0x1A0230u);
    ctx->pc = 0x1A022Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A0228u;
    // 0x1a022c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A0228u, 0x1A0230u)) {
        return;
    }
    ctx->pc = 0x1A0230u;
label_1a0230:
    // 0x1a0230: 0x8e04080c  lw          $a0, 0x80C($s0)
    ctx->pc = 0x1a0230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2060)));
    // 0x1a0234: 0x24030098  addiu       $v1, $zero, 0x98
    ctx->pc = 0x1a0234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0238: 0x8e050804  lw          $a1, 0x804($s0)
    ctx->pc = 0x1a0238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2052)));
    // 0x1a023c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1a023cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a0240: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x1a0240u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a0244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a0244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a0248: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a0248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a024c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a024cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0250: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1a0250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x1a0254: 0xae030838  sw          $v1, 0x838($s0)
    ctx->pc = 0x1a0254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2104), GPR_U32(ctx, 3));
    // 0x1a0258: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a0258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a025c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1a025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a0260: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1a0260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1a0264: 0xae060894  sw          $a2, 0x894($s0)
    ctx->pc = 0x1a0264u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2196), GPR_U32(ctx, 6));
    // 0x1a0268: 0xae03083c  sw          $v1, 0x83C($s0)
    ctx->pc = 0x1a0268u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2108), GPR_U32(ctx, 3));
    // 0x1a026c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a026cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a0270: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0270u;
        // 0x1a0274: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0278u;
}
