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

// Function: sub_002671A8
// Address: 0x2671a8 - 0x267228
void sub_002671A8_0x2671a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002671A8_0x2671a8");
#endif

    switch (ctx->pc) {
        case 0x2671c0u: goto label_2671c0;
        default: break;
    }

    ctx->pc = 0x2671a8u;

    // 0x2671a8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2671a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2671ac: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x2671acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2671b0: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2671B0u;
    {
        const bool branch_taken_0x2671b0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2671B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671B0u;
        // 0x2671b4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2671b0) {
            ctx->pc = 0x267220u;
            goto label_267220;
        }
    }
    ctx->pc = 0x2671B8u;
    // 0x2671b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2671b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2671bc: 0x0  nop
    ctx->pc = 0x2671bcu;
    // NOP
label_2671c0:
    // 0x2671c0: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2671c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2671c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2671c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2671c8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2671c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2671cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2671ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2671d0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2671d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671d4: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2671d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2671d8: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2671d8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2671dc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2671dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2671e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2671e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2671e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2671e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671e8: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2671e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2671ec: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x2671ecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2671f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2671f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2671f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2671f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2671f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2671f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2671fc: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2671fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x267200: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x267200u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x267204: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x267204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x267208: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x267208u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26720c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26720cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x267210: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x267210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267214: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x267214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x267218: 0x14a0ffe9  bnez        $a1, . + 4 + (-0x17 << 2)
    ctx->pc = 0x267218u;
    {
        const bool branch_taken_0x267218 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267218u;
        // 0x26721c: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267218) {
            ctx->pc = 0x2671C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2671c0;
        }
    }
    ctx->pc = 0x267220u;
label_267220:
    // 0x267220: 0x3e00008  jr          $ra
    ctx->pc = 0x267220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267228u;
}
