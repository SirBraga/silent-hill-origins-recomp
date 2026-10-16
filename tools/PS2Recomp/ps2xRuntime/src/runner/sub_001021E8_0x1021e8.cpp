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

// Function: sub_001021E8
// Address: 0x1021e8 - 0x102258
void sub_001021E8_0x1021e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001021E8_0x1021e8");
#endif

    switch (ctx->pc) {
        case 0x10221cu: goto label_10221c;
        case 0x102230u: goto label_102230;
        default: break;
    }

    ctx->pc = 0x1021e8u;

    // 0x1021e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1021e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1021ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1021ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1021f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1021f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1021f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1021f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1021f8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1021f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1021fc: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x1021fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
    // 0x102200: 0x8e0500d8  lw          $a1, 0xD8($s0)
    ctx->pc = 0x102200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x102204: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x102204u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x102208: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x102208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x10220c: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x10220cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x102210: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x102210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x102214: 0xc09d55c  jal         func_275570
    ctx->pc = 0x102214u;
    SET_GPR_U32(ctx, 31, 0x10221Cu);
    ctx->pc = 0x102218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102214u;
    // 0x102218: 0x8c450024  lw          $a1, 0x24($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x275570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x275570u, 0x102214u, 0x10221Cu)) {
        return;
    }
    ctx->pc = 0x10221Cu;
label_10221c:
    // 0x10221c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x10221cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x102220: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x102220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    // 0x102224: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x102224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x102228: 0xc09d926  jal         func_276498
    ctx->pc = 0x102228u;
    SET_GPR_U32(ctx, 31, 0x102230u);
    ctx->pc = 0x10222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102228u;
    // 0x10222c: 0xc44c0004  lwc1        $f12, 0x4($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x102228u, 0x102230u)) {
        return;
    }
    ctx->pc = 0x102230u;
label_102230:
    // 0x102230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102234: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x102234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x102238: 0xae0301d4  sw          $v1, 0x1D4($s0)
    ctx->pc = 0x102238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 3));
    // 0x10223c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10223cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102240: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x102240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x102244: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x102244u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x102248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x102248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10224c: 0x3e00008  jr          $ra
    ctx->pc = 0x10224Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10224Cu;
        // 0x102250: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10224Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102254u;
    // 0x102254: 0x0  nop
    ctx->pc = 0x102254u;
    // NOP
    ctx->pc = 0x102258u;
}
