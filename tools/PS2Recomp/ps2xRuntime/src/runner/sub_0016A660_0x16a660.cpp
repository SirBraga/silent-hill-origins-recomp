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

// Function: sub_0016A660
// Address: 0x16a660 - 0x16a6c8
void sub_0016A660_0x16a660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A660_0x16a660");
#endif

    switch (ctx->pc) {
        case 0x16a674u: goto label_16a674;
        case 0x16a694u: goto label_16a694;
        default: break;
    }

    ctx->pc = 0x16a660u;

    // 0x16a660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a664: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x16a664u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16a668: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a66c: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x16A66Cu;
    SET_GPR_U32(ctx, 31, 0x16A674u);
    ctx->pc = 0x16A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A66Cu;
    // 0x16a670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x16A66Cu, 0x16A674u)) {
        return;
    }
    ctx->pc = 0x16A674u;
label_16a674:
    // 0x16a674: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16a674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16a678: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16a67c: 0x246345f8  addiu       $v1, $v1, 0x45F8
    ctx->pc = 0x16a67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17912));
    // 0x16a680: 0x244245b0  addiu       $v0, $v0, 0x45B0
    ctx->pc = 0x16a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17840));
    // 0x16a684: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x16a684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x16a688: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x16a688u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x16a68c: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x16A68Cu;
    SET_GPR_U32(ctx, 31, 0x16A694u);
    ctx->pc = 0x16A690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A68Cu;
    // 0x16a690: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x16A68Cu, 0x16A694u)) {
        return;
    }
    ctx->pc = 0x16A694u;
label_16a694:
    // 0x16a694: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x16a694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x16a698: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x16a698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16a69c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a69cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6a0: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x16a6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x16a6a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16a6a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16a6a8: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x16a6a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x16a6ac: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x16a6acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x16a6b0: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x16a6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x16a6b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x16a6b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a6b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a6b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a6bc: 0x3e00008  jr          $ra
    ctx->pc = 0x16A6BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A6BCu;
        // 0x16a6c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A6BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A6C4u;
    // 0x16a6c4: 0x0  nop
    ctx->pc = 0x16a6c4u;
    // NOP
    ctx->pc = 0x16a6c8u;
}
