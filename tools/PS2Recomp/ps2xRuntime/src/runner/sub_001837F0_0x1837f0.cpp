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

// Function: sub_001837F0
// Address: 0x1837f0 - 0x183900
void sub_001837F0_0x1837f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001837F0_0x1837f0");
#endif

    switch (ctx->pc) {
        case 0x183810u: goto label_183810;
        case 0x183824u: goto label_183824;
        case 0x183838u: goto label_183838;
        case 0x183850u: goto label_183850;
        case 0x18386cu: goto label_18386c;
        case 0x183890u: goto label_183890;
        case 0x1838a8u: goto label_1838a8;
        case 0x1838d4u: goto label_1838d4;
        default: break;
    }

    ctx->pc = 0x1837f0u;

    // 0x1837f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1837f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1837f4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1837f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1837f8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1837f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1837fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1837fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183800: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x183800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x183804: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x183804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x183808: 0xc04459c  jal         func_111670
    ctx->pc = 0x183808u;
    SET_GPR_U32(ctx, 31, 0x183810u);
    ctx->pc = 0x18380Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183808u;
    // 0x18380c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111670u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111670u, 0x183808u, 0x183810u)) {
        return;
    }
    ctx->pc = 0x183810u;
label_183810:
    // 0x183810: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x183810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x183814: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x183814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183818: 0x8c461a68  lw          $a2, 0x1A68($v0)
    ctx->pc = 0x183818u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x701A68u));
    // 0x18381c: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x18381Cu;
    SET_GPR_U32(ctx, 31, 0x183824u);
    ctx->pc = 0x183820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18381Cu;
    // 0x183820: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x18381Cu, 0x183824u)) {
        return;
    }
    ctx->pc = 0x183824u;
label_183824:
    // 0x183824: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x183824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183828: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x183828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18382c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x18382Cu;
    {
        const bool branch_taken_0x18382c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x183830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18382Cu;
        // 0x183830: 0x27b20010  addiu       $s2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18382c) {
            ctx->pc = 0x18387Cu;
            goto label_18387c;
        }
    }
    ctx->pc = 0x183834u;
    // 0x183834: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x183834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_183838:
    // 0x183838: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x183838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x18383c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x18383Cu;
    {
        const bool branch_taken_0x18383c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x183840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18383Cu;
        // 0x183840: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18383c) {
            ctx->pc = 0x183854u;
            goto label_183854;
        }
    }
    ctx->pc = 0x183844u;
    // 0x183844: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x183844u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x183848: 0xc060f5a  jal         func_183D68
    ctx->pc = 0x183848u;
    SET_GPR_U32(ctx, 31, 0x183850u);
    ctx->pc = 0x18384Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183848u;
    // 0x18384c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x183D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x183D68u, 0x183848u, 0x183850u)) {
        return;
    }
    ctx->pc = 0x183850u;
label_183850:
    // 0x183850: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x183850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_183854:
    // 0x183854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x183854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18385c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x18385cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183860: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x183860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x183864: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x183864u;
    SET_GPR_U32(ctx, 31, 0x18386Cu);
    ctx->pc = 0x183868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183864u;
    // 0x183868: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x183864u, 0x18386Cu)) {
        return;
    }
    ctx->pc = 0x18386Cu;
label_18386c:
    // 0x18386c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x18386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183870: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x183870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x183874: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x183874u;
    {
        const bool branch_taken_0x183874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183874u;
        // 0x183878: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183874) {
            ctx->pc = 0x183838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_183838;
        }
    }
    ctx->pc = 0x18387Cu;
label_18387c:
    // 0x18387c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x18387cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x183880: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x183880u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183884: 0x8c463c08  lw          $a2, 0x3C08($v0)
    ctx->pc = 0x183884u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x6C3C08u));
    // 0x183888: 0xc07f1c0  jal         func_1FC700
    ctx->pc = 0x183888u;
    SET_GPR_U32(ctx, 31, 0x183890u);
    ctx->pc = 0x18388Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183888u;
    // 0x18388c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC700u, 0x183888u, 0x183890u)) {
        return;
    }
    ctx->pc = 0x183890u;
label_183890:
    // 0x183890: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x183890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183894: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x183894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x183898: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x183898u;
    {
        const bool branch_taken_0x183898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183898) {
            ctx->pc = 0x18389Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x183898u;
            // 0x18389c: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1838E8u;
            goto label_1838e8;
        }
    }
    ctx->pc = 0x1838A0u;
    // 0x1838a0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1838a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838a4: 0x0  nop
    ctx->pc = 0x1838a4u;
    // NOP
label_1838a8:
    // 0x1838a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1838a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1838ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1838ACu;
    {
        const bool branch_taken_0x1838ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1838B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838ACu;
        // 0x1838b0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838ac) {
            ctx->pc = 0x1838C0u;
            goto label_1838c0;
        }
    }
    ctx->pc = 0x1838B4u;
    // 0x1838b4: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x1838b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1838b8: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x1838b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
    // 0x1838bc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1838bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1838c0:
    // 0x1838c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1838c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1838c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1838c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1838c8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1838c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1838cc: 0xc07f0c8  jal         func_1FC320
    ctx->pc = 0x1838CCu;
    SET_GPR_U32(ctx, 31, 0x1838D4u);
    ctx->pc = 0x1838D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1838CCu;
    // 0x1838d0: 0xafa30010  sw          $v1, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC320u, 0x1838CCu, 0x1838D4u)) {
        return;
    }
    ctx->pc = 0x1838D4u;
label_1838d4:
    // 0x1838d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1838d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1838d8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1838d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1838dc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x1838DCu;
    {
        const bool branch_taken_0x1838dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1838E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838DCu;
        // 0x1838e0: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1838dc) {
            ctx->pc = 0x1838A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1838a8;
        }
    }
    ctx->pc = 0x1838E4u;
    // 0x1838e4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1838e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1838e8:
    // 0x1838e8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1838e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1838ec: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1838ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1838f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1838f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1838f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1838F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1838F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1838F4u;
        // 0x1838f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1838F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1838FCu;
    // 0x1838fc: 0x0  nop
    ctx->pc = 0x1838fcu;
    // NOP
    ctx->pc = 0x183900u;
}
