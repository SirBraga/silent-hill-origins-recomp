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

// Function: sub_002F7638
// Address: 0x2f7638 - 0x2f7728
void sub_002F7638_0x2f7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7638_0x2f7638");
#endif

    switch (ctx->pc) {
        case 0x2f7674u: goto label_2f7674;
        case 0x2f76b8u: goto label_2f76b8;
        case 0x2f76ccu: goto label_2f76cc;
        case 0x2f76d8u: goto label_2f76d8;
        case 0x2f76ecu: goto label_2f76ec;
        case 0x2f76fcu: goto label_2f76fc;
        default: break;
    }

    ctx->pc = 0x2f7638u;

    // 0x2f7638: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2f7638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f763c: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f763cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7640: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2f7640u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f7644: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f7644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f7648: 0x244214c8  addiu       $v0, $v0, 0x14C8
    ctx->pc = 0x2f7648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x2f764c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f764cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7650: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f7650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f7654: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2f7654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f7658: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f765c: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f765cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7660: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x2f7660u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f7664: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7668: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f766c: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F766Cu;
    SET_GPR_U32(ctx, 31, 0x2F7674u);
    ctx->pc = 0x2F7670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F766Cu;
    // 0x2f7670: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F766Cu, 0x2F7674u)) {
        return;
    }
    ctx->pc = 0x2F7674u;
label_2f7674:
    // 0x2f7674: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f7674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f7678: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7678u;
    {
        const bool branch_taken_0x2f7678 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F767Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7678u;
        // 0x2f767c: 0x3c130072  lui         $s3, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7678) {
            ctx->pc = 0x2F7688u;
            goto label_2f7688;
        }
    }
    ctx->pc = 0x2F7680u;
    // 0x2f7680: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2F7680u;
    {
        const bool branch_taken_0x2f7680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7680u;
        // 0x2f7684: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7680) {
            ctx->pc = 0x2F7704u;
            goto label_2f7704;
        }
    }
    ctx->pc = 0x2F7688u;
label_2f7688:
    // 0x2f7688: 0x24022080  addiu       $v0, $zero, 0x2080
    ctx->pc = 0x2f7688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f768c: 0x26631540  addiu       $v1, $s3, 0x1540
    ctx->pc = 0x2f768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f7690: 0x3c100072  lui         $s0, 0x72
    ctx->pc = 0x2f7690u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)114 << 16));
    // 0x2f7694: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x2f7694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x2f7698: 0x261035c0  addiu       $s0, $s0, 0x35C0
    ctx->pc = 0x2f7698u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 13760));
    // 0x2f769c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f769cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2f76a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f76a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76a4: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x2f76a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x2f76a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f76a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76ac: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f76acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f76b0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F76B0u;
    SET_GPR_U32(ctx, 31, 0x2F76B8u);
    ctx->pc = 0x2F76B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F76B0u;
    // 0x2f76b4: 0x3c110068  lui         $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F76B0u, 0x2F76B8u)) {
        return;
    }
    ctx->pc = 0x2F76B8u;
label_2f76b8:
    // 0x2f76b8: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x2f76b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x2f76bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f76bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76c0: 0x248500ff  addiu       $a1, $a0, 0xFF
    ctx->pc = 0x2f76c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 255));
    // 0x2f76c4: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x2F76C4u;
    SET_GPR_U32(ctx, 31, 0x2F76CCu);
    ctx->pc = 0x2F76C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F76C4u;
    // 0x2f76c8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2F76C4u, 0x2F76CCu)) {
        return;
    }
    ctx->pc = 0x2F76CCu;
label_2f76cc:
    // 0x2f76cc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2f76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2f76d0: 0xae22664c  sw          $v0, 0x664C($s1)
    ctx->pc = 0x2f76d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 26188), GPR_U32(ctx, 2));
    // 0x2f76d4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2f76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2f76d8:
    // 0x2f76d8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f76d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f76dc: 0x8e25664c  lw          $a1, 0x664C($s1)
    ctx->pc = 0x2f76dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26188)));
    // 0x2f76e0: 0x26671540  addiu       $a3, $s3, 0x1540
    ctx->pc = 0x2f76e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f76e4: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F76E4u;
    SET_GPR_U32(ctx, 31, 0x2F76ECu);
    ctx->pc = 0x2F76E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F76E4u;
    // 0x2f76e8: 0x268870e8  addiu       $t0, $s4, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F76E4u, 0x2F76ECu)) {
        return;
    }
    ctx->pc = 0x2F76ECu;
label_2f76ec:
    // 0x2f76ec: 0x5450fffa  bnel        $v0, $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F76ECu;
    {
        const bool branch_taken_0x2f76ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2f76ec) {
            ctx->pc = 0x2F76F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F76ECu;
            // 0x2f76f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F76D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f76d8;
        }
    }
    ctx->pc = 0x2F76F4u;
    // 0x2f76f4: 0xc0bdbf0  jal         func_2F6FC0
    ctx->pc = 0x2F76F4u;
    SET_GPR_U32(ctx, 31, 0x2F76FCu);
    ctx->pc = 0x2F6FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6FC0u, 0x2F76F4u, 0x2F76FCu)) {
        return;
    }
    ctx->pc = 0x2F76FCu;
label_2f76fc:
    // 0x2f76fc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f76fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f7700: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2f7700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f7704:
    // 0x2f7704: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f7704u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7708: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7708u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f770c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f770cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7710: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f7710u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7714: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7718: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f771c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F771Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F771Cu;
        // 0x2f7720: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F771Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7724u;
    // 0x2f7724: 0x0  nop
    ctx->pc = 0x2f7724u;
    // NOP
    ctx->pc = 0x2f7728u;
}
