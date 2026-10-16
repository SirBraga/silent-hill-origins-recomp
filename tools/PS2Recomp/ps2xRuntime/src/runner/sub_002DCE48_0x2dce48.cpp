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

// Function: sub_002DCE48
// Address: 0x2dce48 - 0x2dcef8
void sub_002DCE48_0x2dce48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCE48_0x2dce48");
#endif

    switch (ctx->pc) {
        case 0x2dce90u: goto label_2dce90;
        case 0x2dcea4u: goto label_2dcea4;
        case 0x2dcec8u: goto label_2dcec8;
        case 0x2dced8u: goto label_2dced8;
        default: break;
    }

    ctx->pc = 0x2dce48u;

    // 0x2dce48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dce48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2dce4c: 0x27859020  addiu       $a1, $gp, -0x6FE0
    ctx->pc = 0x2dce4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938656));
    // 0x2dce50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dce50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dce54: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2dce54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2dce58: 0x24508018  addiu       $s0, $v0, -0x7FE8
    ctx->pc = 0x2dce58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934552));
    // 0x2dce5c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dce5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dce60: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x2dce60u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x2dce64: 0xaf859024  sw          $a1, -0x6FDC($gp)
    ctx->pc = 0x2dce64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938660), GPR_U32(ctx, 5));
    // 0x2dce68: 0xaf859020  sw          $a1, -0x6FE0($gp)
    ctx->pc = 0x2dce68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 5));
    // 0x2dce6c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x2dce6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2dce70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dce70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dce74: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2dce74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2dce78: 0xaf838bd8  sw          $v1, -0x7428($gp)
    ctx->pc = 0x2dce78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937560), GPR_U32(ctx, 3));
    // 0x2dce7c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x2dce7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2dce80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2dce80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce84: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2dce84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dce88: 0xc0b8270  jal         func_2E09C0
    ctx->pc = 0x2DCE88u;
    SET_GPR_U32(ctx, 31, 0x2DCE90u);
    ctx->pc = 0x2DCE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE88u;
    // 0x2dce8c: 0x35290808  ori         $t1, $t1, 0x808 (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2056);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E09C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E09C0u, 0x2DCE88u, 0x2DCE90u)) {
        return;
    }
    ctx->pc = 0x2DCE90u;
label_2dce90:
    // 0x2dce90: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2DCE90u;
    {
        const bool branch_taken_0x2dce90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dce90) {
            ctx->pc = 0x2DCE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DCE90u;
            // 0x2dce94: 0xaf808be0  sw          $zero, -0x7420($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DCEDCu;
            goto label_2dcedc;
        }
    }
    ctx->pc = 0x2DCE98u;
    // 0x2dce98: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2dce98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2dce9c: 0xc0b73dc  jal         func_2DCF70
    ctx->pc = 0x2DCE9Cu;
    SET_GPR_U32(ctx, 31, 0x2DCEA4u);
    ctx->pc = 0x2DCEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCE9Cu;
    // 0x2dcea0: 0x24847ff0  addiu       $a0, $a0, 0x7FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCF70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DCF70u, 0x2DCE9Cu, 0x2DCEA4u)) {
        return;
    }
    ctx->pc = 0x2DCEA4u;
label_2dcea4:
    // 0x2dcea4: 0xaf828be4  sw          $v0, -0x741C($gp)
    ctx->pc = 0x2dcea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 2));
    // 0x2dcea8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2DCEA8u;
    {
        const bool branch_taken_0x2dcea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEA8u;
        // 0x2dceac: 0xaf828be0  sw          $v0, -0x7420($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcea8) {
            ctx->pc = 0x2DCED0u;
            goto label_2dced0;
        }
    }
    ctx->pc = 0x2DCEB0u;
    // 0x2dceb0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2dceb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2dceb4: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x2dceb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
    // 0x2dceb8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dceb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcebc: 0x24a5f0e0  addiu       $a1, $a1, -0xF20
    ctx->pc = 0x2dcebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963424));
    // 0x2dcec0: 0xc0b7442  jal         func_2DD108
    ctx->pc = 0x2DCEC0u;
    SET_GPR_U32(ctx, 31, 0x2DCEC8u);
    ctx->pc = 0x2DCEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCEC0u;
    // 0x2dcec4: 0x24c63c58  addiu       $a2, $a2, 0x3C58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD108u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DD108u, 0x2DCEC0u, 0x2DCEC8u)) {
        return;
    }
    ctx->pc = 0x2DCEC8u;
label_2dcec8:
    // 0x2dcec8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2DCEC8u;
    {
        const bool branch_taken_0x2dcec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DCECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEC8u;
        // 0x2dcecc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dcec8) {
            ctx->pc = 0x2DCEE8u;
            goto label_2dcee8;
        }
    }
    ctx->pc = 0x2DCED0u;
label_2dced0:
    // 0x2dced0: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2DCED0u;
    SET_GPR_U32(ctx, 31, 0x2DCED8u);
    ctx->pc = 0x2DCED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DCED0u;
    // 0x2dced4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2DCED0u, 0x2DCED8u)) {
        return;
    }
    ctx->pc = 0x2DCED8u;
label_2dced8:
    // 0x2dced8: 0xaf808be0  sw          $zero, -0x7420($gp)
    ctx->pc = 0x2dced8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937568), GPR_U32(ctx, 0));
label_2dcedc:
    // 0x2dcedc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2dcedcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dcee0: 0xaf808be4  sw          $zero, -0x741C($gp)
    ctx->pc = 0x2dcee0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937572), GPR_U32(ctx, 0));
    // 0x2dcee4: 0xaf808bd8  sw          $zero, -0x7428($gp)
    ctx->pc = 0x2dcee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937560), GPR_U32(ctx, 0));
label_2dcee8:
    // 0x2dcee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2dcee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dceec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dceecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dcef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DCEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DCEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DCEF0u;
        // 0x2dcef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DCEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DCEF8u;
}
