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

// Function: sub_002F2880
// Address: 0x2f2880 - 0x2f2958
void sub_002F2880_0x2f2880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2880_0x2f2880");
#endif

    switch (ctx->pc) {
        case 0x2f28f0u: goto label_2f28f0;
        case 0x2f2900u: goto label_2f2900;
        default: break;
    }

    ctx->pc = 0x2f2880u;

    // 0x2f2880: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f2880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f2884: 0x24060898  addiu       $a2, $zero, 0x898
    ctx->pc = 0x2f2884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x2f2888: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2f2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2f288c: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2f288cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x2f2890: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2f2890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2894: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f2894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f2898: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x2f2898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x2f289c: 0x72863018  mult1       $a2, $s4, $a2
    ctx->pc = 0x2f289cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 6); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2f28a0: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x2f28a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f28a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2f28a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2f28a8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f28a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f28ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2f28acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28b0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f28b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f28b4: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f28b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f28b8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2f28b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2f28bc: 0x24426340  addiu       $v0, $v0, 0x6340
    ctx->pc = 0x2f28bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25408));
    // 0x2f28c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f28c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f28c4: 0x2463b748  addiu       $v1, $v1, -0x48B8
    ctx->pc = 0x2f28c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948680));
    // 0x2f28c8: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2f28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x2f28cc: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x2f28ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f28d0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2f28d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2f28d4: 0x8c700890  lw          $s0, 0x890($v1)
    ctx->pc = 0x2f28d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2192)));
    // 0x2f28d8: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x2f28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x2f28dc: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2f28dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f28e0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2F28E0u;
    {
        const bool branch_taken_0x2f28e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F28E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28E0u;
        // 0x2f28e4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28e0) {
            ctx->pc = 0x2F292Cu;
            goto label_2f292c;
        }
    }
    ctx->pc = 0x2F28E8u;
    // 0x2f28e8: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x2f28e8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
    // 0x2f28ec: 0x0  nop
    ctx->pc = 0x2f28ecu;
    // NOP
label_2f28f0:
    // 0x2f28f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f28f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f28f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f28f8: 0xc0bc916  jal         func_2F2458
    ctx->pc = 0x2F28F8u;
    SET_GPR_U32(ctx, 31, 0x2F2900u);
    ctx->pc = 0x2F28FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28F8u;
    // 0x2f28fc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2458u, 0x2F28F8u, 0x2F2900u)) {
        return;
    }
    ctx->pc = 0x2F2900u;
label_2f2900:
    // 0x2f2900: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2904: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2f2904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f2908: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2908u;
    {
        const bool branch_taken_0x2f2908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2908u;
        // 0x2f290c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2908) {
            ctx->pc = 0x2F2930u;
            goto label_2f2930;
        }
    }
    ctx->pc = 0x2F2910u;
    // 0x2f2910: 0x8e620170  lw          $v0, 0x170($s3)
    ctx->pc = 0x2f2910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
    // 0x2f2914: 0x952024  and         $a0, $a0, $s5
    ctx->pc = 0x2f2914u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 21));
    // 0x2f2918: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x2f2918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f291c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f291cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f2920: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x2f2920u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f2924: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2F2924u;
    {
        const bool branch_taken_0x2f2924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F2928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2924u;
        // 0x2f2928: 0x64880a  movz        $s1, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2924) {
            ctx->pc = 0x2F28F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f28f0;
        }
    }
    ctx->pc = 0x2F292Cu;
label_2f292c:
    // 0x2f292c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2f292cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f2930:
    // 0x2f2930: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f2930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f2934: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2f2934u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f2938: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2f2938u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f293c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2f293cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2940: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f2940u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2944: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f2944u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2948: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f2948u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f294c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F294Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F294Cu;
        // 0x2f2950: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F294Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2954u;
    // 0x2f2954: 0x0  nop
    ctx->pc = 0x2f2954u;
    // NOP
    ctx->pc = 0x2f2958u;
}
