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

// Function: sub_002F7560
// Address: 0x2f7560 - 0x2f7638
void sub_002F7560_0x2f7560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7560_0x2f7560");
#endif

    switch (ctx->pc) {
        case 0x2f759cu: goto label_2f759c;
        case 0x2f75d8u: goto label_2f75d8;
        case 0x2f75f0u: goto label_2f75f0;
        case 0x2f7604u: goto label_2f7604;
        case 0x2f7614u: goto label_2f7614;
        default: break;
    }

    ctx->pc = 0x2f7560u;

    // 0x2f7560: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2f7560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7564: 0x3c020072  lui         $v0, 0x72
    ctx->pc = 0x2f7564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)114 << 16));
    // 0x2f7568: 0x832018  mult        $a0, $a0, $v1
    ctx->pc = 0x2f7568u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2f756c: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f756cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f7570: 0x244214c8  addiu       $v0, $v0, 0x14C8
    ctx->pc = 0x2f7570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5320));
    // 0x2f7574: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7578: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f7578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f757c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2f757cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f7580: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f7584: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f7584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7588: 0x828821  addu        $s1, $a0, $v0
    ctx->pc = 0x2f7588u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f758c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f758cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7590: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7594: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F7594u;
    SET_GPR_U32(ctx, 31, 0x2F759Cu);
    ctx->pc = 0x2F7598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7594u;
    // 0x2f7598: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F7594u, 0x2F759Cu)) {
        return;
    }
    ctx->pc = 0x2F759Cu;
label_2f759c:
    // 0x2f759c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f759cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f75a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F75A0u;
    {
        const bool branch_taken_0x2f75a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75A0u;
        // 0x2f75a4: 0x3c130072  lui         $s3, 0x72 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75a0) {
            ctx->pc = 0x2F75B0u;
            goto label_2f75b0;
        }
    }
    ctx->pc = 0x2F75A8u;
    // 0x2f75a8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2F75A8u;
    {
        const bool branch_taken_0x2f75a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F75A8u;
        // 0x2f75ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f75a8) {
            ctx->pc = 0x2F7618u;
            goto label_2f7618;
        }
    }
    ctx->pc = 0x2F75B0u;
label_2f75b0:
    // 0x2f75b0: 0x24032080  addiu       $v1, $zero, 0x2080
    ctx->pc = 0x2f75b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f75b4: 0x26621540  addiu       $v0, $s3, 0x1540
    ctx->pc = 0x2f75b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f75b8: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f75b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f75bc: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x2f75bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x2f75c0: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x2f75c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x2f75c4: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2f75c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2f75c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f75c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f75cc: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x2f75ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x2f75d0: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F75D0u;
    SET_GPR_U32(ctx, 31, 0x2F75D8u);
    ctx->pc = 0x2F75D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75D0u;
    // 0x2f75d4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F75D0u, 0x2F75D8u)) {
        return;
    }
    ctx->pc = 0x2F75D8u;
label_2f75d8:
    // 0x2f75d8: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x2f75d8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x2f75dc: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2f75dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2f75e0: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x2f75e0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x2f75e4: 0xae02664c  sw          $v0, 0x664C($s0)
    ctx->pc = 0x2f75e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x68664Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x68664Cu, _value); } while (0);
    // 0x2f75e8: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f75e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f75ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f75ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f75f0:
    // 0x2f75f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f75f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f75f4: 0x8e05664c  lw          $a1, 0x664C($s0)
    ctx->pc = 0x2f75f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26188)));
    // 0x2f75f8: 0x26671540  addiu       $a3, $s3, 0x1540
    ctx->pc = 0x2f75f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f75fc: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F75FCu;
    SET_GPR_U32(ctx, 31, 0x2F7604u);
    ctx->pc = 0x2F7600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F75FCu;
    // 0x2f7600: 0x268870e8  addiu       $t0, $s4, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F75FCu, 0x2F7604u)) {
        return;
    }
    ctx->pc = 0x2F7604u;
label_2f7604:
    // 0x2f7604: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F7604u;
    {
        const bool branch_taken_0x2f7604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f7604) {
            ctx->pc = 0x2F7608u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F7604u;
            // 0x2f7608: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F75F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f75f0;
        }
    }
    ctx->pc = 0x2F760Cu;
    // 0x2f760c: 0xc0bdbf0  jal         func_2F6FC0
    ctx->pc = 0x2F760Cu;
    SET_GPR_U32(ctx, 31, 0x2F7614u);
    ctx->pc = 0x2F6FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6FC0u, 0x2F760Cu, 0x2F7614u)) {
        return;
    }
    ctx->pc = 0x2F7614u;
label_2f7614:
    // 0x2f7614: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f7614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f7618:
    // 0x2f7618: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f7618u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f761c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f761cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7620: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7620u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f7624: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f7624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7628: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7628u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f762c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f762cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7630: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F7634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7630u;
        // 0x2f7634: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7638u;
}
