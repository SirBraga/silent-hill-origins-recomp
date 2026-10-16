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

// Function: sub_00108850
// Address: 0x108850 - 0x1088f8
void sub_00108850_0x108850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108850_0x108850");
#endif

    switch (ctx->pc) {
        case 0x108878u: goto label_108878;
        case 0x108880u: goto label_108880;
        case 0x1088d0u: goto label_1088d0;
        case 0x1088dcu: goto label_1088dc;
        default: break;
    }

    ctx->pc = 0x108850u;

    // 0x108850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x108850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x108854: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x108854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x108858: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x108858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10885c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10885cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108860: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x108860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x108864: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x108864u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x108868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10886c: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x10886cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x108870: 0xe60c0000  swc1        $f12, 0x0($s0)
    ctx->pc = 0x108870u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x108874: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x108874u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_108878:
    // 0x108878: 0xc0c580c  jal         func_316030
    ctx->pc = 0x108878u;
    SET_GPR_U32(ctx, 31, 0x108880u);
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x108878u, 0x108880u)) {
        return;
    }
    ctx->pc = 0x108880u;
label_108880:
    // 0x108880: 0x222202a  slt         $a0, $s1, $v0
    ctx->pc = 0x108880u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x108884: 0x24430003  addiu       $v1, $v0, 0x3
    ctx->pc = 0x108884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
    // 0x108888: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x108888u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
    // 0x10888c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x10888cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x108890: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x108890u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x108894: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x108894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x108898: 0x442023  subu        $a0, $v0, $a0
    ctx->pc = 0x108898u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x10889c: 0x1085fff6  beq         $a0, $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x10889Cu;
    {
        const bool branch_taken_0x10889c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x1088A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10889Cu;
        // 0x1088a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10889c) {
            ctx->pc = 0x108878u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_108878;
        }
    }
    ctx->pc = 0x1088A4u;
    // 0x1088a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1088a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1088a8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1088a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x1088ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1088acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1088b0: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1088b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
    // 0x1088b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1088b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1088b8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x1088b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x1088bc: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1088bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x1088c0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1088c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1088c4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1088c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1088c8: 0xc06ca72  jal         func_1B29C8
    ctx->pc = 0x1088C8u;
    SET_GPR_U32(ctx, 31, 0x1088D0u);
    ctx->pc = 0x1088CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1088C8u;
    // 0x1088cc: 0x8e449168  lw          $a0, -0x6E98($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B29C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B29C8u, 0x1088C8u, 0x1088D0u)) {
        return;
    }
    ctx->pc = 0x1088D0u;
label_1088d0:
    // 0x1088d0: 0x8e449168  lw          $a0, -0x6E98($s2)
    ctx->pc = 0x1088d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938984)));
    // 0x1088d4: 0xc06caae  jal         func_1B2AB8
    ctx->pc = 0x1088D4u;
    SET_GPR_U32(ctx, 31, 0x1088DCu);
    ctx->pc = 0x1088D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1088D4u;
    // 0x1088d8: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2AB8u, 0x1088D4u, 0x1088DCu)) {
        return;
    }
    ctx->pc = 0x1088DCu;
label_1088dc:
    // 0x1088dc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1088dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1088e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1088e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1088e4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1088e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1088e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1088e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1088ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1088ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1088F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1088ECu;
        // 0x1088f0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1088ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1088F4u;
    // 0x1088f4: 0x0  nop
    ctx->pc = 0x1088f4u;
    // NOP
    ctx->pc = 0x1088f8u;
}
