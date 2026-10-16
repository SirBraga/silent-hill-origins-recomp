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

// Function: sub_00251E88
// Address: 0x251e88 - 0x251f68
void sub_00251E88_0x251e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00251E88_0x251e88");
#endif

    switch (ctx->pc) {
        case 0x251ed0u: goto label_251ed0;
        case 0x251ee0u: goto label_251ee0;
        case 0x251ef4u: goto label_251ef4;
        default: break;
    }

    ctx->pc = 0x251e88u;

    // 0x251e88: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x251e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x251e8c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x251e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x251e90: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x251e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x251e94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x251e94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251e98: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x251e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x251e9c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x251e9cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ea0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x251ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x251ea4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x251ea4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ea8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x251ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x251eac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x251eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x251eb0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x251eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x251eb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x251eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x251eb8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x251eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x251ebc: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x251EBCu;
    {
        const bool branch_taken_0x251ebc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x251EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EBCu;
        // 0x251ec0: 0x8e950010  lw          $s5, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ebc) {
            ctx->pc = 0x251F38u;
            goto label_251f38;
        }
    }
    ctx->pc = 0x251EC4u;
    // 0x251ec4: 0x24120024  addiu       $s2, $zero, 0x24
    ctx->pc = 0x251ec4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x251ec8: 0x26b10004  addiu       $s1, $s5, 0x4
    ctx->pc = 0x251ec8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x251ecc: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x251eccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_251ed0:
    // 0x251ed0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x251ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x251ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251ed8: 0xc0927aa  jal         func_249EA8
    ctx->pc = 0x251ED8u;
    SET_GPR_U32(ctx, 31, 0x251EE0u);
    ctx->pc = 0x251EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251ED8u;
    // 0x251edc: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EA8u, 0x251ED8u, 0x251EE0u)) {
        return;
    }
    ctx->pc = 0x251EE0u;
label_251ee0:
    // 0x251ee0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x251EE0u;
    {
        const bool branch_taken_0x251ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EE0u;
        // 0x251ee4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ee0) {
            ctx->pc = 0x251EFCu;
            goto label_251efc;
        }
    }
    ctx->pc = 0x251EE8u;
    // 0x251ee8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x251ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x251eec: 0xc0927be  jal         func_249EF8
    ctx->pc = 0x251EECu;
    SET_GPR_U32(ctx, 31, 0x251EF4u);
    ctx->pc = 0x251EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251EECu;
    // 0x251ef0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x251EECu, 0x251EF4u)) {
        return;
    }
    ctx->pc = 0x251EF4u;
label_251ef4:
    // 0x251ef4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x251EF4u;
    {
        const bool branch_taken_0x251ef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EF4u;
        // 0x251ef8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251ef4) {
            ctx->pc = 0x251F04u;
            goto label_251f04;
        }
    }
    ctx->pc = 0x251EFCu;
label_251efc:
    // 0x251efc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x251EFCu;
    {
        const bool branch_taken_0x251efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251EFCu;
        // 0x251f00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251efc) {
            ctx->pc = 0x251F3Cu;
            goto label_251f3c;
        }
    }
    ctx->pc = 0x251F04u;
label_251f04:
    // 0x251f04: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x251F04u;
    {
        const bool branch_taken_0x251f04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x251f04) {
            ctx->pc = 0x251F08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251F04u;
            // 0x251f08: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x251F0Cu;
            goto label_251f0c;
        }
    }
    ctx->pc = 0x251F0Cu;
label_251f0c:
    // 0x251f0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x251f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x251f10: 0x26310024  addiu       $s1, $s1, 0x24
    ctx->pc = 0x251f10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x251f14: 0x52001b  divu        $zero, $v0, $s2
    ctx->pc = 0x251f14u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x251f18: 0x1012  mflo        $v0
    ctx->pc = 0x251f18u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x251f1c: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x251f1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x251f20: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x251f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x251f24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x251f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x251f28: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x251f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x251f2c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x251f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x251f30: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x251F30u;
    {
        const bool branch_taken_0x251f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F30u;
        // 0x251f34: 0x26100024  addiu       $s0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251f30) {
            ctx->pc = 0x251ED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_251ed0;
        }
    }
    ctx->pc = 0x251F38u;
label_251f38:
    // 0x251f38: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x251f38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_251f3c:
    // 0x251f3c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x251f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x251f40: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x251f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x251f44: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x251f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x251f48: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x251f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x251f4c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x251f4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x251f50: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x251f50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x251f54: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x251f54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x251f58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x251f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x251f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x251F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251F5Cu;
        // 0x251f60: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x251F64u;
    // 0x251f64: 0x0  nop
    ctx->pc = 0x251f64u;
    // NOP
    ctx->pc = 0x251f68u;
}
