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

// Function: sub_003006D8
// Address: 0x3006d8 - 0x300948
void sub_003006D8_0x3006d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003006D8_0x3006d8");
#endif

    switch (ctx->pc) {
        case 0x30076cu: goto label_30076c;
        case 0x300798u: goto label_300798;
        case 0x3007a8u: goto label_3007a8;
        case 0x300888u: goto label_300888;
        case 0x300898u: goto label_300898;
        default: break;
    }

    ctx->pc = 0x3006d8u;

    // 0x3006d8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3006d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3006dc: 0x24030140  addiu       $v1, $zero, 0x140
    ctx->pc = 0x3006dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x3006e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3006e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3006e4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x3006e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3006e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3006e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3006ec: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3006ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3006f0: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x3006f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3006f4: 0x8c820820  lw          $v0, 0x820($a0)
    ctx->pc = 0x3006f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2080)));
    // 0x3006f8: 0x435018  mult        $t2, $v0, $v1
    ctx->pc = 0x3006f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3006fc: 0x1441021  addu        $v0, $t2, $a0
    ctx->pc = 0x3006fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
    // 0x300700: 0xac4906dc  sw          $t1, 0x6DC($v0)
    ctx->pc = 0x300700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1756), GPR_U32(ctx, 9));
    // 0x300704: 0xac8901c0  sw          $t1, 0x1C0($a0)
    ctx->pc = 0x300704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 448), GPR_U32(ctx, 9));
    // 0x300708: 0x8c820160  lw          $v0, 0x160($a0)
    ctx->pc = 0x300708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x30070c: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x30070Cu;
    {
        const bool branch_taken_0x30070c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x30070c) {
            ctx->pc = 0x300710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30070Cu;
            // 0x300710: 0x8c830184  lw          $v1, 0x184($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300728u;
            goto label_300728;
        }
    }
    ctx->pc = 0x300714u;
    // 0x300714: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x300714u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x300718: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x300718u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x30071c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x30071cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x300720: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x300720u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x300724: 0x8c830184  lw          $v1, 0x184($a0)
    ctx->pc = 0x300724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
label_300728:
    // 0x300728: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x300728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30072c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30072Cu;
    {
        const bool branch_taken_0x30072c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x30072c) {
            ctx->pc = 0x300730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30072Cu;
            // 0x300730: 0xacc90000  sw          $t1, 0x0($a2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30073Cu;
            goto label_30073c;
        }
    }
    ctx->pc = 0x300734u;
    // 0x300734: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x300734u;
    {
        const bool branch_taken_0x300734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300734u;
        // 0x300738: 0xacc80000  sw          $t0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300734) {
            ctx->pc = 0x300750u;
            goto label_300750;
        }
    }
    ctx->pc = 0x30073Cu;
label_30073c:
    // 0x30073c: 0x8c820184  lw          $v0, 0x184($a0)
    ctx->pc = 0x30073cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
    // 0x300740: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x300740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x300744: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x300744u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x300748: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x300748u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x30074c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x30074cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_300750:
    // 0x300750: 0x8c830160  lw          $v1, 0x160($a0)
    ctx->pc = 0x300750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 352)));
    // 0x300754: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300758: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300758u;
    {
        const bool branch_taken_0x300758 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x300758) {
            ctx->pc = 0x30075Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300758u;
            // 0x30075c: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300774u;
            goto label_300774;
        }
    }
    ctx->pc = 0x300760u;
    // 0x300760: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x300760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x300764: 0xc0bf75c  jal         func_2FDD70
    ctx->pc = 0x300764u;
    SET_GPR_U32(ctx, 31, 0x30076Cu);
    ctx->pc = 0x300768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300764u;
    // 0x300768: 0x24a50890  addiu       $a1, $a1, 0x890 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDD70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2FDD70u, 0x300764u, 0x30076Cu)) {
        return;
    }
    ctx->pc = 0x30076Cu;
label_30076c:
    // 0x30076c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x30076cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300770: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x300770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_300774:
    // 0x300774: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x300774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x300778: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x300778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30077c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x30077cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300780: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x300780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x300784: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x300784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x300788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x300788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30078c: 0x3e00008  jr          $ra
    ctx->pc = 0x30078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30078Cu;
        // 0x300790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30078Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300794u;
    // 0x300794: 0x0  nop
    ctx->pc = 0x300794u;
    // NOP
label_300798:
    // 0x300798: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x300798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30079c: 0x3c0a0030  lui         $t2, 0x30
    ctx->pc = 0x30079cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)48 << 16));
    // 0x3007a0: 0x254a0930  addiu       $t2, $t2, 0x930
    ctx->pc = 0x3007a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2352));
    // 0x3007a4: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x3007a4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x300930u));
label_3007a8:
    // 0x3007a8: 0x78c80000  lq          $t0, 0x0($a2)
    ctx->pc = 0x3007a8u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3007ac: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x3007acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x3007b0: 0x78c90010  lq          $t1, 0x10($a2)
    ctx->pc = 0x3007b0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3007b4: 0x78ca0020  lq          $t2, 0x20($a2)
    ctx->pc = 0x3007b4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x3007b8: 0x78cb0030  lq          $t3, 0x30($a2)
    ctx->pc = 0x3007b8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x3007bc: 0x78cc0040  lq          $t4, 0x40($a2)
    ctx->pc = 0x3007bcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x3007c0: 0x78cd0050  lq          $t5, 0x50($a2)
    ctx->pc = 0x3007c0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x3007c4: 0x78ce0060  lq          $t6, 0x60($a2)
    ctx->pc = 0x3007c4u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x3007c8: 0x78cf0070  lq          $t7, 0x70($a2)
    ctx->pc = 0x3007c8u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x3007cc: 0x78b90000  lq          $t9, 0x0($a1)
    ctx->pc = 0x3007ccu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3007d0: 0x71194108  paddh       $t0, $t0, $t9
    ctx->pc = 0x3007d0u;
    SET_GPR_VEC(ctx, 8, PS2_PADDH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 25)));
    // 0x3007d4: 0x78b90010  lq          $t9, 0x10($a1)
    ctx->pc = 0x3007d4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3007d8: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x3007d8u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x3007dc: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x3007dcu;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x3007e0: 0x71394908  paddh       $t1, $t1, $t9
    ctx->pc = 0x3007e0u;
    SET_GPR_VEC(ctx, 9, PS2_PADDH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 25)));
    // 0x3007e4: 0x78b90020  lq          $t9, 0x20($a1)
    ctx->pc = 0x3007e4u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3007e8: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x3007e8u;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x3007ec: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x3007ecu;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x3007f0: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x3007f0u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x3007f4: 0x71595108  paddh       $t2, $t2, $t9
    ctx->pc = 0x3007f4u;
    SET_GPR_VEC(ctx, 10, PS2_PADDH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 25)));
    // 0x3007f8: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x3007f8u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x3007fc: 0x78b90030  lq          $t9, 0x30($a1)
    ctx->pc = 0x3007fcu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x300800: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x300800u;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x300804: 0x71795908  paddh       $t3, $t3, $t9
    ctx->pc = 0x300804u;
    SET_GPR_VEC(ctx, 11, PS2_PADDH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 25)));
    // 0x300808: 0x78b90040  lq          $t9, 0x40($a1)
    ctx->pc = 0x300808u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x30080c: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x30080cu;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x300810: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x300810u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x300814: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x300814u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x300818: 0x71996108  paddh       $t4, $t4, $t9
    ctx->pc = 0x300818u;
    SET_GPR_VEC(ctx, 12, PS2_PADDH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 25)));
    // 0x30081c: 0x78b90050  lq          $t9, 0x50($a1)
    ctx->pc = 0x30081cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x300820: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x300820u;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x300824: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x300824u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x300828: 0x71b96908  paddh       $t5, $t5, $t9
    ctx->pc = 0x300828u;
    SET_GPR_VEC(ctx, 13, PS2_PADDH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 25)));
    // 0x30082c: 0x78b90060  lq          $t9, 0x60($a1)
    ctx->pc = 0x30082cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x300830: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x300830u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x300834: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x300834u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x300838: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x300838u;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x30083c: 0x71d97108  paddh       $t6, $t6, $t9
    ctx->pc = 0x30083cu;
    SET_GPR_VEC(ctx, 14, PS2_PADDH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 25)));
    // 0x300840: 0x78b90070  lq          $t9, 0x70($a1)
    ctx->pc = 0x300840u;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 5), 112)));
    // 0x300844: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x300844u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x300848: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x300848u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x30084c: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x30084cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x300850: 0x71f97908  paddh       $t7, $t7, $t9
    ctx->pc = 0x300850u;
    SET_GPR_VEC(ctx, 15, PS2_PADDH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 25)));
    // 0x300854: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x300854u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x300858: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x300858u;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x30085c: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x30085cu;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x300860: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x300860u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x300864: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x300864u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x300868: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x300868u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x30086c: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x30086cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x300870: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x300870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x300874: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x300874u;
    {
        const bool branch_taken_0x300874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300874u;
        // 0x300878: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300874) {
            ctx->pc = 0x3007A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3007a8;
        }
    }
    ctx->pc = 0x30087Cu;
    // 0x30087c: 0x3e00008  jr          $ra
    ctx->pc = 0x30087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300884u;
    // 0x300884: 0x0  nop
    ctx->pc = 0x300884u;
    // NOP
label_300888:
    // 0x300888: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x300888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x30088c: 0x3c0a0030  lui         $t2, 0x30
    ctx->pc = 0x30088cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)48 << 16));
    // 0x300890: 0x254a0930  addiu       $t2, $t2, 0x930
    ctx->pc = 0x300890u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2352));
    // 0x300894: 0x79430000  lq          $v1, 0x0($t2)
    ctx->pc = 0x300894u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x300930u));
label_300898:
    // 0x300898: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x300898u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30089c: 0x2042fffc  addi        $v0, $v0, -0x4
    ctx->pc = 0x30089cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)4294967292, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 2, (int32_t)tmp); }
    // 0x3008a0: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x3008a0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3008a4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x3008a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x3008a8: 0x7b290010  lq          $t1, 0x10($t9)
    ctx->pc = 0x3008a8u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 25), 16)));
    // 0x3008ac: 0x7b2a0020  lq          $t2, 0x20($t9)
    ctx->pc = 0x3008acu;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 25), 32)));
    // 0x3008b0: 0x7b2b0030  lq          $t3, 0x30($t9)
    ctx->pc = 0x3008b0u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x3008b4: 0x7b2c0040  lq          $t4, 0x40($t9)
    ctx->pc = 0x3008b4u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 25), 64)));
    // 0x3008b8: 0x7b2d0050  lq          $t5, 0x50($t9)
    ctx->pc = 0x3008b8u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 25), 80)));
    // 0x3008bc: 0x7b2e0060  lq          $t6, 0x60($t9)
    ctx->pc = 0x3008bcu;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 25), 96)));
    // 0x3008c0: 0x7b2f0070  lq          $t7, 0x70($t9)
    ctx->pc = 0x3008c0u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 25), 112)));
    // 0x3008c4: 0x710341e8  pminh       $t0, $t0, $v1
    ctx->pc = 0x3008c4u;
    SET_GPR_VEC(ctx, 8, PS2_PMINH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 3)));
    // 0x3008c8: 0x710041c8  pmaxh       $t0, $t0, $zero
    ctx->pc = 0x3008c8u;
    SET_GPR_VEC(ctx, 8, PS2_PMAXH(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x3008cc: 0x712349e8  pminh       $t1, $t1, $v1
    ctx->pc = 0x3008ccu;
    SET_GPR_VEC(ctx, 9, PS2_PMINH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 3)));
    // 0x3008d0: 0x712049c8  pmaxh       $t1, $t1, $zero
    ctx->pc = 0x3008d0u;
    SET_GPR_VEC(ctx, 9, PS2_PMAXH(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x3008d4: 0x71284ec8  ppacb       $t1, $t1, $t0
    ctx->pc = 0x3008d4u;
    SET_GPR_VEC(ctx, 9, PS2_PPACB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x3008d8: 0x714351e8  pminh       $t2, $t2, $v1
    ctx->pc = 0x3008d8u;
    SET_GPR_VEC(ctx, 10, PS2_PMINH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 3)));
    // 0x3008dc: 0x714051c8  pmaxh       $t2, $t2, $zero
    ctx->pc = 0x3008dcu;
    SET_GPR_VEC(ctx, 10, PS2_PMAXH(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x3008e0: 0x716359e8  pminh       $t3, $t3, $v1
    ctx->pc = 0x3008e0u;
    SET_GPR_VEC(ctx, 11, PS2_PMINH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 3)));
    // 0x3008e4: 0x716059c8  pmaxh       $t3, $t3, $zero
    ctx->pc = 0x3008e4u;
    SET_GPR_VEC(ctx, 11, PS2_PMAXH(GPR_VEC(ctx, 11), GPR_VEC(ctx, 0)));
    // 0x3008e8: 0x716a5ec8  ppacb       $t3, $t3, $t2
    ctx->pc = 0x3008e8u;
    SET_GPR_VEC(ctx, 11, PS2_PPACB(GPR_VEC(ctx, 11), GPR_VEC(ctx, 10)));
    // 0x3008ec: 0x718361e8  pminh       $t4, $t4, $v1
    ctx->pc = 0x3008ecu;
    SET_GPR_VEC(ctx, 12, PS2_PMINH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 3)));
    // 0x3008f0: 0x718061c8  pmaxh       $t4, $t4, $zero
    ctx->pc = 0x3008f0u;
    SET_GPR_VEC(ctx, 12, PS2_PMAXH(GPR_VEC(ctx, 12), GPR_VEC(ctx, 0)));
    // 0x3008f4: 0x71a369e8  pminh       $t5, $t5, $v1
    ctx->pc = 0x3008f4u;
    SET_GPR_VEC(ctx, 13, PS2_PMINH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 3)));
    // 0x3008f8: 0x71a069c8  pmaxh       $t5, $t5, $zero
    ctx->pc = 0x3008f8u;
    SET_GPR_VEC(ctx, 13, PS2_PMAXH(GPR_VEC(ctx, 13), GPR_VEC(ctx, 0)));
    // 0x3008fc: 0x71ac6ec8  ppacb       $t5, $t5, $t4
    ctx->pc = 0x3008fcu;
    SET_GPR_VEC(ctx, 13, PS2_PPACB(GPR_VEC(ctx, 13), GPR_VEC(ctx, 12)));
    // 0x300900: 0x71c371e8  pminh       $t6, $t6, $v1
    ctx->pc = 0x300900u;
    SET_GPR_VEC(ctx, 14, PS2_PMINH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 3)));
    // 0x300904: 0x71c071c8  pmaxh       $t6, $t6, $zero
    ctx->pc = 0x300904u;
    SET_GPR_VEC(ctx, 14, PS2_PMAXH(GPR_VEC(ctx, 14), GPR_VEC(ctx, 0)));
    // 0x300908: 0x71e379e8  pminh       $t7, $t7, $v1
    ctx->pc = 0x300908u;
    SET_GPR_VEC(ctx, 15, PS2_PMINH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 3)));
    // 0x30090c: 0x71e079c8  pmaxh       $t7, $t7, $zero
    ctx->pc = 0x30090cu;
    SET_GPR_VEC(ctx, 15, PS2_PMAXH(GPR_VEC(ctx, 15), GPR_VEC(ctx, 0)));
    // 0x300910: 0x71ee7ec8  ppacb       $t7, $t7, $t6
    ctx->pc = 0x300910u;
    SET_GPR_VEC(ctx, 15, PS2_PPACB(GPR_VEC(ctx, 15), GPR_VEC(ctx, 14)));
    // 0x300914: 0x7c890000  sq          $t1, 0x0($a0)
    ctx->pc = 0x300914u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 9));
    // 0x300918: 0x7c8b0010  sq          $t3, 0x10($a0)
    ctx->pc = 0x300918u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 11));
    // 0x30091c: 0x7c8d0020  sq          $t5, 0x20($a0)
    ctx->pc = 0x30091cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 13));
    // 0x300920: 0x7c8f0030  sq          $t7, 0x30($a0)
    ctx->pc = 0x300920u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 15));
    // 0x300924: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x300924u;
    {
        const bool branch_taken_0x300924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x300928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300924u;
        // 0x300928: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300924) {
            ctx->pc = 0x300898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_300898;
        }
    }
    ctx->pc = 0x30092Cu;
    // 0x30092c: 0x0  nop
    ctx->pc = 0x30092cu;
    // NOP
    // 0x300930: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x300930u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x300934: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x300934u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x300938: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x300938u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x30093c: 0xff00ff  .word       0x00FF00FF                   # dsra32      $zero, $ra, 3 # 00E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x30093cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 31) >> (32 + 3));
    // 0x300940: 0x3e00008  jr          $ra
    ctx->pc = 0x300940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300948u;
}
