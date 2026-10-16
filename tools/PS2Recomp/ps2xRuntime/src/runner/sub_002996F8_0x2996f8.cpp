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

// Function: sub_002996F8
// Address: 0x2996f8 - 0x2997b0
void sub_002996F8_0x2996f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002996F8_0x2996f8");
#endif

    switch (ctx->pc) {
        case 0x29974cu: goto label_29974c;
        case 0x299764u: goto label_299764;
        case 0x299798u: goto label_299798;
        default: break;
    }

    ctx->pc = 0x2996f8u;

    // 0x2996f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2996f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2996fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2996fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x299700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x299700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x299704: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299708: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29970c: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x29970cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x299710: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x299710u;
    {
        const bool branch_taken_0x299710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x299714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299710u;
        // 0x299714: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x299710) {
            ctx->pc = 0x299724u;
            goto label_299724;
        }
    }
    ctx->pc = 0x299718u;
    // 0x299718: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x299718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29971c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29971Cu;
    {
        const bool branch_taken_0x29971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29971Cu;
        // 0x299720: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29971c) {
            ctx->pc = 0x299750u;
            goto label_299750;
        }
    }
    ctx->pc = 0x299724u;
label_299724:
    // 0x299724: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x299724u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x299728: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x299728u;
    {
        const bool branch_taken_0x299728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x29972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299728u;
        // 0x29972c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299728) {
            ctx->pc = 0x299750u;
            goto label_299750;
        }
    }
    ctx->pc = 0x299730u;
    // 0x299730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x299730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x299734: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x299734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x299738: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x299738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29973c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29973Cu;
    {
        const bool branch_taken_0x29973c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x299740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29973Cu;
        // 0x299740: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29973c) {
            ctx->pc = 0x299750u;
            goto label_299750;
        }
    }
    ctx->pc = 0x299744u;
    // 0x299744: 0xc0a65a0  jal         func_299680
    ctx->pc = 0x299744u;
    SET_GPR_U32(ctx, 31, 0x29974Cu);
    ctx->pc = 0x299748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299744u;
    // 0x299748: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299680u, 0x299744u, 0x29974Cu)) {
        return;
    }
    ctx->pc = 0x29974Cu;
label_29974c:
    // 0x29974c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_299750:
    // 0x299750: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x299750u;
    {
        const bool branch_taken_0x299750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x299754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299750u;
        // 0x299754: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299750) {
            ctx->pc = 0x29979Cu;
            goto label_29979c;
        }
    }
    ctx->pc = 0x299758u;
    // 0x299758: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x299758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29975c: 0xc0a5e70  jal         func_2979C0
    ctx->pc = 0x29975Cu;
    SET_GPR_U32(ctx, 31, 0x299764u);
    ctx->pc = 0x299760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29975Cu;
    // 0x299760: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2979C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2979C0u, 0x29975Cu, 0x299764u)) {
        return;
    }
    ctx->pc = 0x299764u;
label_299764:
    // 0x299764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x299764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299768: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x299768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29976c: 0x54a20006  bnel        $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29976Cu;
    {
        const bool branch_taken_0x29976c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x29976c) {
            ctx->pc = 0x299770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29976Cu;
            // 0x299770: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x299788u;
            goto label_299788;
        }
    }
    ctx->pc = 0x299774u;
    // 0x299774: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x299774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299778: 0x9062001a  lbu         $v0, 0x1A($v1)
    ctx->pc = 0x299778u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 26)));
    // 0x29977c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x299780: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x299780u;
    {
        const bool branch_taken_0x299780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299780u;
        // 0x299784: 0xa062001a  sb          $v0, 0x1A($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299780) {
            ctx->pc = 0x299798u;
            goto label_299798;
        }
    }
    ctx->pc = 0x299788u;
label_299788:
    // 0x299788: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x299788u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29978c: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x29978cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x299790: 0xc0a6e1e  jal         func_29B878
    ctx->pc = 0x299790u;
    SET_GPR_U32(ctx, 31, 0x299798u);
    ctx->pc = 0x299794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299790u;
    // 0x299794: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29B878u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29B878u, 0x299790u, 0x299798u)) {
        return;
    }
    ctx->pc = 0x299798u;
label_299798:
    // 0x299798: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x299798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29979c:
    // 0x29979c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29979cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2997a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2997a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2997a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2997A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2997A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2997A4u;
        // 0x2997a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2997A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2997ACu;
    // 0x2997ac: 0x0  nop
    ctx->pc = 0x2997acu;
    // NOP
    ctx->pc = 0x2997b0u;
}
