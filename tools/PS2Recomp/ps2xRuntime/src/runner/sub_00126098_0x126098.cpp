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

// Function: sub_00126098
// Address: 0x126098 - 0x126100
void sub_00126098_0x126098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126098_0x126098");
#endif

    switch (ctx->pc) {
        case 0x1260c0u: goto label_1260c0;
        case 0x1260d4u: goto label_1260d4;
        case 0x1260e4u: goto label_1260e4;
        default: break;
    }

    ctx->pc = 0x126098u;

    // 0x126098: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x126098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12609c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12609cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1260a0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1260a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1260a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1260a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260a8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1260a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1260ac: 0x8e020eac  lw          $v0, 0xEAC($s0)
    ctx->pc = 0x1260acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
    // 0x1260b0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1260B0u;
    {
        const bool branch_taken_0x1260b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1260B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260B0u;
        // 0x1260b4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1260b0) {
            ctx->pc = 0x1260ECu;
            goto label_1260ec;
        }
    }
    ctx->pc = 0x1260B8u;
    // 0x1260b8: 0xc040698  jal         func_101A60
    ctx->pc = 0x1260B8u;
    SET_GPR_U32(ctx, 31, 0x1260C0u);
    ctx->pc = 0x1260BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1260B8u;
    // 0x1260bc: 0x8e050210  lw          $a1, 0x210($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101A60u, 0x1260B8u, 0x1260C0u)) {
        return;
    }
    ctx->pc = 0x1260C0u;
label_1260c0:
    // 0x1260c0: 0x8e060040  lw          $a2, 0x40($s0)
    ctx->pc = 0x1260c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1260c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1260c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1260c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1260cc: 0xc092d9c  jal         func_24B670
    ctx->pc = 0x1260CCu;
    SET_GPR_U32(ctx, 31, 0x1260D4u);
    ctx->pc = 0x1260D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1260CCu;
    // 0x1260d0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B670u, 0x1260CCu, 0x1260D4u)) {
        return;
    }
    ctx->pc = 0x1260D4u;
label_1260d4:
    // 0x1260d4: 0x8e040eac  lw          $a0, 0xEAC($s0)
    ctx->pc = 0x1260d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3756)));
    // 0x1260d8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1260d8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1260dc: 0xc059a0a  jal         func_166828
    ctx->pc = 0x1260DCu;
    SET_GPR_U32(ctx, 31, 0x1260E4u);
    ctx->pc = 0x1260E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1260DCu;
    // 0x1260e0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166828u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x166828u, 0x1260DCu, 0x1260E4u)) {
        return;
    }
    ctx->pc = 0x1260E4u;
label_1260e4:
    // 0x1260e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1260e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1260e8: 0xae020eb0  sw          $v0, 0xEB0($s0)
    ctx->pc = 0x1260e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3760), GPR_U32(ctx, 2));
label_1260ec:
    // 0x1260ec: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1260ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1260f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1260f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1260f4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1260f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1260f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1260F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1260FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1260F8u;
        // 0x1260fc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1260F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126100u;
}
