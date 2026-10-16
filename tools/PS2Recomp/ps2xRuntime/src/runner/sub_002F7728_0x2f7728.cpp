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

// Function: sub_002F7728
// Address: 0x2f7728 - 0x2f7860
void sub_002F7728_0x2f7728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7728_0x2f7728");
#endif

    switch (ctx->pc) {
        case 0x2f7764u: goto label_2f7764;
        case 0x2f779cu: goto label_2f779c;
        case 0x2f780cu: goto label_2f780c;
        case 0x2f7818u: goto label_2f7818;
        case 0x2f782cu: goto label_2f782c;
        case 0x2f783cu: goto label_2f783c;
        default: break;
    }

    ctx->pc = 0x2f7728u;

    // 0x2f7728: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2f7728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2f772c: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x2f772cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2f7730: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7734: 0x3c030072  lui         $v1, 0x72
    ctx->pc = 0x2f7734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)114 << 16));
    // 0x2f7738: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2f7738u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2f773c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7740: 0x247114c8  addiu       $s1, $v1, 0x14C8
    ctx->pc = 0x2f7740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 5320));
    // 0x2f7744: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f7744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7748: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2f7748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2f774c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x2f774cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x2f7750: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f7750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f7754: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f7754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f7758: 0x2029021  addu        $s2, $s0, $v0
    ctx->pc = 0x2f7758u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2f775c: 0xc0be154  jal         func_2F8550
    ctx->pc = 0x2F775Cu;
    SET_GPR_U32(ctx, 31, 0x2F7764u);
    ctx->pc = 0x2F7760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F775Cu;
    // 0x2f7760: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8550u, 0x2F775Cu, 0x2F7764u)) {
        return;
    }
    ctx->pc = 0x2F7764u;
label_2f7764:
    // 0x2f7764: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2f7764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f7768: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F7768u;
    {
        const bool branch_taken_0x2f7768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7768u;
        // 0x2f776c: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7768) {
            ctx->pc = 0x2F7778u;
            goto label_2f7778;
        }
    }
    ctx->pc = 0x2F7770u;
    // 0x2f7770: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x2F7770u;
    {
        const bool branch_taken_0x2f7770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7770u;
        // 0x2f7774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7770) {
            ctx->pc = 0x2F7840u;
            goto label_2f7840;
        }
    }
    ctx->pc = 0x2F7778u;
label_2f7778:
    // 0x2f7778: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x2f7778u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2f777c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F777Cu;
    {
        const bool branch_taken_0x2f777c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F7780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F777Cu;
        // 0x2f7780: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f777c) {
            ctx->pc = 0x2F7794u;
            goto label_2f7794;
        }
    }
    ctx->pc = 0x2F7784u;
    // 0x2f7784: 0x8c4b000c  lw          $t3, 0xC($v0)
    ctx->pc = 0x2f7784u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2f7788: 0x15600006  bnez        $t3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F7788u;
    {
        const bool branch_taken_0x2f7788 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F778Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7788u;
        // 0x2f778c: 0x2302821  addu        $a1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f7788) {
            ctx->pc = 0x2F77A4u;
            goto label_2f77a4;
        }
    }
    ctx->pc = 0x2F7790u;
    // 0x2f7790: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2f7790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_2f7794:
    // 0x2f7794: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2F7794u;
    SET_GPR_U32(ctx, 31, 0x2F779Cu);
    ctx->pc = 0x2F7798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7794u;
    // 0x2f7798: 0x248401d0  addiu       $a0, $a0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2F7794u, 0x2F779Cu)) {
        return;
    }
    ctx->pc = 0x2F779Cu;
label_2f779c:
    // 0x2f779c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2F779Cu;
    {
        const bool branch_taken_0x2f779c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F77A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F779Cu;
        // 0x2f77a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f779c) {
            ctx->pc = 0x2F7840u;
            goto label_2f7840;
        }
    }
    ctx->pc = 0x2F77A4u;
label_2f77a4:
    // 0x2f77a4: 0x3c130072  lui         $s3, 0x72
    ctx->pc = 0x2f77a4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)114 << 16));
    // 0x2f77a8: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2f77a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77ac: 0x240a2080  addiu       $t2, $zero, 0x2080
    ctx->pc = 0x2f77acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 8320));
    // 0x2f77b0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f77b0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f77b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77b8: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x2f77b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2f77bc: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x2f77bcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
    // 0x2f77c0: 0x8c89001c  lw          $t1, 0x1C($a0)
    ctx->pc = 0x2f77c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2f77c4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2f77c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77c8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x2f77c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x2f77cc: 0x3c040072  lui         $a0, 0x72
    ctx->pc = 0x2f77ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)114 << 16));
    // 0x2f77d0: 0x8c470010  lw          $a3, 0x10($v0)
    ctx->pc = 0x2f77d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2f77d4: 0x248435c0  addiu       $a0, $a0, 0x35C0
    ctx->pc = 0x2f77d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13760));
    // 0x2f77d8: 0x26621540  addiu       $v0, $s3, 0x1540
    ctx->pc = 0x2f77d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f77dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f77dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f77e0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2f77e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x721548u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721548u, _value); } while (0);
    // 0x2f77e4: 0x3c14002f  lui         $s4, 0x2F
    ctx->pc = 0x2f77e4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)47 << 16));
    // 0x2f77e8: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x2f77e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x721564u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721564u, _value); } while (0);
    // 0x2f77ec: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2f77ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2f77f0: 0xac4b000c  sw          $t3, 0xC($v0)
    ctx->pc = 0x2f77f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 11)); ps2TraceGuestWrite(rdram, 0x72154Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x72154Cu, _value); } while (0);
    // 0x2f77f4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2f77f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f77f8: 0xac470010  sw          $a3, 0x10($v0)
    ctx->pc = 0x2f77f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x721550u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721550u, _value); } while (0);
    // 0x2f77fc: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x2f77fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x721554u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721554u, _value); } while (0);
    // 0x2f7800: 0xac490018  sw          $t1, 0x18($v0)
    ctx->pc = 0x2f7800u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 9)); ps2TraceGuestWrite(rdram, 0x721558u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x721558u, _value); } while (0);
    // 0x2f7804: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x2F7804u;
    SET_GPR_U32(ctx, 31, 0x2F780Cu);
    ctx->pc = 0x2F7808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7804u;
    // 0x2f7808: 0xafaa0000  sw          $t2, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x2F7804u, 0x2F780Cu)) {
        return;
    }
    ctx->pc = 0x2F780Cu;
label_2f780c:
    // 0x2f780c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2f780cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2f7810: 0xae03664c  sw          $v1, 0x664C($s0)
    ctx->pc = 0x2f7810u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26188), GPR_U32(ctx, 3));
    // 0x2f7814: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2f7814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f7818:
    // 0x2f7818: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2f7818u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f781c: 0x8e05664c  lw          $a1, 0x664C($s0)
    ctx->pc = 0x2f781cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26188)));
    // 0x2f7820: 0x26671540  addiu       $a3, $s3, 0x1540
    ctx->pc = 0x2f7820u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 5440));
    // 0x2f7824: 0xc0be19a  jal         func_2F8668
    ctx->pc = 0x2F7824u;
    SET_GPR_U32(ctx, 31, 0x2F782Cu);
    ctx->pc = 0x2F7828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7824u;
    // 0x2f7828: 0x268870e8  addiu       $t0, $s4, 0x70E8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 20), 28904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F8668u, 0x2F7824u, 0x2F782Cu)) {
        return;
    }
    ctx->pc = 0x2F782Cu;
label_2f782c:
    // 0x2f782c: 0x5452fffa  bnel        $v0, $s2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2F782Cu;
    {
        const bool branch_taken_0x2f782c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f782c) {
            ctx->pc = 0x2F7830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F782Cu;
            // 0x2f7830: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F7818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f7818;
        }
    }
    ctx->pc = 0x2F7834u;
    // 0x2f7834: 0xc0bdbf0  jal         func_2F6FC0
    ctx->pc = 0x2F7834u;
    SET_GPR_U32(ctx, 31, 0x2F783Cu);
    ctx->pc = 0x2F6FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F6FC0u, 0x2F7834u, 0x2F783Cu)) {
        return;
    }
    ctx->pc = 0x2F783Cu;
label_2f783c:
    // 0x2f783c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2f783cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2f7840:
    // 0x2f7840: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2f7840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f7844: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f7844u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f7848: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f7848u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f784c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f784cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f7850: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f7850u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f7854: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f7854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f7858: 0x3e00008  jr          $ra
    ctx->pc = 0x2F7858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F785Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F7858u;
        // 0x2f785c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F7858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F7860u;
}
