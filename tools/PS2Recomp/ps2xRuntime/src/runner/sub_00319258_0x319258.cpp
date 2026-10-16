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

// Function: sub_00319258
// Address: 0x319258 - 0x319360
void sub_00319258_0x319258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00319258_0x319258");
#endif

    switch (ctx->pc) {
        case 0x3192a8u: goto label_3192a8;
        case 0x3192b8u: goto label_3192b8;
        case 0x3192e0u: goto label_3192e0;
        case 0x319318u: goto label_319318;
        default: break;
    }

    ctx->pc = 0x319258u;

    // 0x319258: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x319258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x31925c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x31925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x319260: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x319260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x319264: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x319264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x319268: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x319268u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31926c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x31926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x319270: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x319270u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319274: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x319274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x319278: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x319278u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31927c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x31927cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x319280: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x319280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x319284: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x319284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x319288: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x319288u;
    {
        const bool branch_taken_0x319288 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x31928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319288u;
        // 0x31928c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319288) {
            ctx->pc = 0x3192C0u;
            goto label_3192c0;
        }
    }
    ctx->pc = 0x319290u;
    // 0x319290: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x319290u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x319294: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x319294u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
    // 0x319298: 0x26319068  addiu       $s1, $s1, -0x6F98
    ctx->pc = 0x319298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294938728));
    // 0x31929c: 0x8e067068  lw          $a2, 0x7068($s0)
    ctx->pc = 0x31929cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x687068u));
    // 0x3192a0: 0xc0c863a  jal         func_3218E8
    ctx->pc = 0x3192A0u;
    SET_GPR_U32(ctx, 31, 0x3192A8u);
    ctx->pc = 0x3192A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3192A0u;
    // 0x3192a4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3218E8u, 0x3192A0u, 0x3192A8u)) {
        return;
    }
    ctx->pc = 0x3192A8u;
label_3192a8:
    // 0x3192a8: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x3192a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x3192ac: 0xae007068  sw          $zero, 0x7068($s0)
    ctx->pc = 0x3192acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28776), GPR_U32(ctx, 0));
    // 0x3192b0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x3192B0u;
    {
        const bool branch_taken_0x3192b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3192B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192B0u;
        // 0x3192b4: 0xac71706c  sw          $s1, 0x706C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 28780), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192b0) {
            ctx->pc = 0x319338u;
            goto label_319338;
        }
    }
    ctx->pc = 0x3192B8u;
label_3192b8:
    // 0x3192b8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x3192B8u;
    {
        const bool branch_taken_0x3192b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3192BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192B8u;
        // 0x3192bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192b8) {
            ctx->pc = 0x319338u;
            goto label_319338;
        }
    }
    ctx->pc = 0x3192C0u;
label_3192c0:
    // 0x3192c0: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x3192C0u;
    {
        const bool branch_taken_0x3192c0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3192C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3192C0u;
        // 0x3192c4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3192c0) {
            ctx->pc = 0x319334u;
            goto label_319334;
        }
    }
    ctx->pc = 0x3192C8u;
    // 0x3192c8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x3192c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x3192cc: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x3192ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x3192d0: 0x24559068  addiu       $s5, $v0, -0x6F98
    ctx->pc = 0x3192d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938728));
    // 0x3192d4: 0x3c120068  lui         $s2, 0x68
    ctx->pc = 0x3192d4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)104 << 16));
    // 0x3192d8: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x3192d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x3192dc: 0x0  nop
    ctx->pc = 0x3192dcu;
    // NOP
label_3192e0:
    // 0x3192e0: 0x8e24706c  lw          $a0, 0x706C($s1)
    ctx->pc = 0x3192e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28780)));
    // 0x3192e4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3192e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3192e8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3192e8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3192ec: 0x8e427068  lw          $v0, 0x7068($s2)
    ctx->pc = 0x3192ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28776)));
    // 0x3192f0: 0x8e23706c  lw          $v1, 0x706C($s1)
    ctx->pc = 0x3192f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28780)));
    // 0x3192f4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x3192f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3192f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3192f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3192fc: 0xae467068  sw          $a2, 0x7068($s2)
    ctx->pc = 0x3192fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28776), GPR_U32(ctx, 6));
    // 0x319300: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x319300u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x319304: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x319304u;
    {
        const bool branch_taken_0x319304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319304u;
        // 0x319308: 0xae23706c  sw          $v1, 0x706C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28780), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x319304) {
            ctx->pc = 0x319324u;
            goto label_319324;
        }
    }
    ctx->pc = 0x31930Cu;
    // 0x31930c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31930cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x319310: 0xc0c863a  jal         func_3218E8
    ctx->pc = 0x319310u;
    SET_GPR_U32(ctx, 31, 0x319318u);
    ctx->pc = 0x319314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x319310u;
    // 0x319314: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3218E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3218E8u, 0x319310u, 0x319318u)) {
        return;
    }
    ctx->pc = 0x319318u;
label_319318:
    // 0x319318: 0xae35706c  sw          $s5, 0x706C($s1)
    ctx->pc = 0x319318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28780), GPR_U32(ctx, 21));
    // 0x31931c: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x31931Cu;
    {
        const bool branch_taken_0x31931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x319320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31931Cu;
        // 0x319320: 0xae407068  sw          $zero, 0x7068($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28776), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31931c) {
            ctx->pc = 0x3192B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3192b8;
        }
    }
    ctx->pc = 0x319324u;
label_319324:
    // 0x319324: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x319324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x319328: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x319328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x31932c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x31932Cu;
    {
        const bool branch_taken_0x31932c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x319330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31932Cu;
        // 0x319330: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31932c) {
            ctx->pc = 0x3192E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3192e0;
        }
    }
    ctx->pc = 0x319334u;
label_319334:
    // 0x319334: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x319334u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_319338:
    // 0x319338: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x319338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x31933c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x31933cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x319340: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x319340u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x319344: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x319344u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x319348: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x319348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x31934c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x31934cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x319350: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x319350u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x319354: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x319354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x319358: 0x3e00008  jr          $ra
    ctx->pc = 0x319358u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31935Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x319358u;
        // 0x31935c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x319358u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x319360u;
}
