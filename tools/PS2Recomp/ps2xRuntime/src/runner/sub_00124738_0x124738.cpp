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

// Function: sub_00124738
// Address: 0x124738 - 0x124850
void sub_00124738_0x124738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00124738_0x124738");
#endif

    switch (ctx->pc) {
        case 0x124738u: goto label_124738;
        case 0x12473cu: goto label_12473c;
        case 0x124740u: goto label_124740;
        case 0x124744u: goto label_124744;
        case 0x124748u: goto label_124748;
        case 0x12474cu: goto label_12474c;
        case 0x124750u: goto label_124750;
        case 0x124754u: goto label_124754;
        case 0x124758u: goto label_124758;
        case 0x12475cu: goto label_12475c;
        case 0x124760u: goto label_124760;
        case 0x124764u: goto label_124764;
        case 0x124768u: goto label_124768;
        case 0x12476cu: goto label_12476c;
        case 0x124770u: goto label_124770;
        case 0x124774u: goto label_124774;
        case 0x124778u: goto label_124778;
        case 0x12477cu: goto label_12477c;
        case 0x124780u: goto label_124780;
        case 0x124784u: goto label_124784;
        case 0x124788u: goto label_124788;
        case 0x12478cu: goto label_12478c;
        case 0x124790u: goto label_124790;
        case 0x124794u: goto label_124794;
        case 0x124798u: goto label_124798;
        case 0x12479cu: goto label_12479c;
        case 0x1247a0u: goto label_1247a0;
        case 0x1247a4u: goto label_1247a4;
        case 0x1247a8u: goto label_1247a8;
        case 0x1247acu: goto label_1247ac;
        case 0x1247b0u: goto label_1247b0;
        case 0x1247b4u: goto label_1247b4;
        case 0x1247b8u: goto label_1247b8;
        case 0x1247bcu: goto label_1247bc;
        case 0x1247c0u: goto label_1247c0;
        case 0x1247c4u: goto label_1247c4;
        case 0x1247c8u: goto label_1247c8;
        case 0x1247ccu: goto label_1247cc;
        case 0x1247d0u: goto label_1247d0;
        case 0x1247d4u: goto label_1247d4;
        case 0x1247d8u: goto label_1247d8;
        case 0x1247dcu: goto label_1247dc;
        case 0x1247e0u: goto label_1247e0;
        case 0x1247e4u: goto label_1247e4;
        case 0x1247e8u: goto label_1247e8;
        case 0x1247ecu: goto label_1247ec;
        case 0x1247f0u: goto label_1247f0;
        case 0x1247f4u: goto label_1247f4;
        case 0x1247f8u: goto label_1247f8;
        case 0x1247fcu: goto label_1247fc;
        case 0x124800u: goto label_124800;
        case 0x124804u: goto label_124804;
        case 0x124808u: goto label_124808;
        case 0x12480cu: goto label_12480c;
        case 0x124810u: goto label_124810;
        case 0x124814u: goto label_124814;
        case 0x124818u: goto label_124818;
        case 0x12481cu: goto label_12481c;
        case 0x124820u: goto label_124820;
        case 0x124824u: goto label_124824;
        case 0x124828u: goto label_124828;
        case 0x12482cu: goto label_12482c;
        case 0x124830u: goto label_124830;
        case 0x124834u: goto label_124834;
        case 0x124838u: goto label_124838;
        case 0x12483cu: goto label_12483c;
        case 0x124840u: goto label_124840;
        case 0x124844u: goto label_124844;
        case 0x124848u: goto label_124848;
        case 0x12484cu: goto label_12484c;
        default: break;
    }

    ctx->pc = 0x124738u;

label_124738:
    // 0x124738: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x124738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_12473c:
    // 0x12473c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12473cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_124740:
    // 0x124740: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x124740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_124744:
    // 0x124744: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x124744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_124748:
    // 0x124748: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x124748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_12474c:
    // 0x12474c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_124750:
    if (ctx->pc == 0x124750u) {
        ctx->pc = 0x124754u;
        goto label_124754;
    }
    ctx->pc = 0x12474Cu;
    {
        const bool branch_taken_0x12474c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x12474c) {
            ctx->pc = 0x12476Cu;
            goto label_12476c;
        }
    }
    ctx->pc = 0x124754u;
label_124754:
    // 0x124754: 0xc041628  jal         func_1058A0
label_124758:
    if (ctx->pc == 0x124758u) {
        ctx->pc = 0x124758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124754u;
        // 0x124758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12475Cu;
        goto label_12475c;
    }
    ctx->pc = 0x124754u;
    SET_GPR_U32(ctx, 31, 0x12475Cu);
    ctx->pc = 0x124758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124754u;
    // 0x124758: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1058A0u, 0x124754u, 0x12475Cu)) {
        return;
    }
    ctx->pc = 0x12475Cu;
label_12475c:
    // 0x12475c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x12475cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_124760:
    // 0x124760: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x124760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_124764:
    // 0x124764: 0xc07fb0c  jal         func_1FEC30
label_124768:
    if (ctx->pc == 0x124768u) {
        ctx->pc = 0x124768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124764u;
        // 0x124768: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12476Cu;
        goto label_12476c;
    }
    ctx->pc = 0x124764u;
    SET_GPR_U32(ctx, 31, 0x12476Cu);
    ctx->pc = 0x124768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124764u;
    // 0x124768: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x124764u, 0x12476Cu)) {
        return;
    }
    ctx->pc = 0x12476Cu;
label_12476c:
    // 0x12476c: 0xc04067c  jal         func_1019F0
label_124770:
    if (ctx->pc == 0x124770u) {
        ctx->pc = 0x124770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12476Cu;
        // 0x124770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124774u;
        goto label_124774;
    }
    ctx->pc = 0x12476Cu;
    SET_GPR_U32(ctx, 31, 0x124774u);
    ctx->pc = 0x124770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12476Cu;
    // 0x124770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019F0u, 0x12476Cu, 0x124774u)) {
        return;
    }
    ctx->pc = 0x124774u;
label_124774:
    // 0x124774: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x124774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_124778:
    // 0x124778: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x124778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12477c:
    // 0x12477c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_124780:
    if (ctx->pc == 0x124780u) {
        ctx->pc = 0x124780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12477Cu;
        // 0x124780: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124784u;
        goto label_124784;
    }
    ctx->pc = 0x12477Cu;
    {
        const bool branch_taken_0x12477c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12477c) {
            ctx->pc = 0x124780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12477Cu;
            // 0x124780: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1247F0u;
            goto label_1247f0;
        }
    }
    ctx->pc = 0x124784u;
label_124784:
    // 0x124784: 0x8e060c00  lw          $a2, 0xC00($s0)
    ctx->pc = 0x124784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_124788:
    // 0x124788: 0x50c00019  beql        $a2, $zero, . + 4 + (0x19 << 2)
label_12478c:
    if (ctx->pc == 0x12478Cu) {
        ctx->pc = 0x12478Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124788u;
        // 0x12478c: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124790u;
        goto label_124790;
    }
    ctx->pc = 0x124788u;
    {
        const bool branch_taken_0x124788 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x124788) {
            ctx->pc = 0x12478Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124788u;
            // 0x12478c: 0x8e040c70  lw          $a0, 0xC70($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1247F0u;
            goto label_1247f0;
        }
    }
    ctx->pc = 0x124790u;
label_124790:
    // 0x124790: 0x8cc20034  lw          $v0, 0x34($a2)
    ctx->pc = 0x124790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_124794:
    // 0x124794: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x124794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_124798:
    // 0x124798: 0x84430040  lh          $v1, 0x40($v0)
    ctx->pc = 0x124798u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_12479c:
    // 0x12479c: 0x24470040  addiu       $a3, $v0, 0x40
    ctx->pc = 0x12479cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1247a0:
    // 0x1247a0: 0x8c85007c  lw          $a1, 0x7C($a0)
    ctx->pc = 0x1247a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_1247a4:
    // 0x1247a4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1247a8:
    if (ctx->pc == 0x1247A8u) {
        ctx->pc = 0x1247A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247A4u;
        // 0x1247a8: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1247ACu;
        goto label_1247ac;
    }
    ctx->pc = 0x1247A4u;
    {
        const bool branch_taken_0x1247a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247A4u;
        // 0x1247a8: 0xc32021  addu        $a0, $a2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247a4) {
            ctx->pc = 0x1247B4u;
            goto label_1247b4;
        }
    }
    ctx->pc = 0x1247ACu;
label_1247ac:
    // 0x1247ac: 0x10000002  b           . + 4 + (0x2 << 2)
label_1247b0:
    if (ctx->pc == 0x1247B0u) {
        ctx->pc = 0x1247B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247ACu;
        // 0x1247b0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1247B4u;
        goto label_1247b4;
    }
    ctx->pc = 0x1247ACu;
    {
        const bool branch_taken_0x1247ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247ACu;
        // 0x1247b0: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247ac) {
            ctx->pc = 0x1247B8u;
            goto label_1247b8;
        }
    }
    ctx->pc = 0x1247B4u;
label_1247b4:
    // 0x1247b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1247b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1247b8:
    // 0x1247b8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1247b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1247bc:
    // 0x1247bc: 0x40f809  jalr        $v0
label_1247c0:
    if (ctx->pc == 0x1247C0u) {
        ctx->pc = 0x1247C4u;
        goto label_1247c4;
    }
    ctx->pc = 0x1247BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1247C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1247BCu, 0x1247C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1247C4u;
label_1247c4:
    // 0x1247c4: 0x8e060c00  lw          $a2, 0xC00($s0)
    ctx->pc = 0x1247c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
label_1247c8:
    // 0x1247c8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1247cc:
    if (ctx->pc == 0x1247CCu) {
        ctx->pc = 0x1247CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247C8u;
        // 0x1247cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1247D0u;
        goto label_1247d0;
    }
    ctx->pc = 0x1247C8u;
    {
        const bool branch_taken_0x1247c8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1247CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247C8u;
        // 0x1247cc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1247c8) {
            ctx->pc = 0x1247E8u;
            goto label_1247e8;
        }
    }
    ctx->pc = 0x1247D0u;
label_1247d0:
    // 0x1247d0: 0x8cc30034  lw          $v1, 0x34($a2)
    ctx->pc = 0x1247d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_1247d4:
    // 0x1247d4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1247d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1247d8:
    // 0x1247d8: 0x84640008  lh          $a0, 0x8($v1)
    ctx->pc = 0x1247d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1247dc:
    // 0x1247dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1247dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1247e0:
    // 0x1247e0: 0x40f809  jalr        $v0
label_1247e4:
    if (ctx->pc == 0x1247E4u) {
        ctx->pc = 0x1247E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247E0u;
        // 0x1247e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1247E8u;
        goto label_1247e8;
    }
    ctx->pc = 0x1247E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1247E8u);
        ctx->pc = 0x1247E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247E0u;
        // 0x1247e4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1247E0u, 0x1247E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1247E8u;
label_1247e8:
    // 0x1247e8: 0xae000c00  sw          $zero, 0xC00($s0)
    ctx->pc = 0x1247e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 0));
label_1247ec:
    // 0x1247ec: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x1247ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_1247f0:
    // 0x1247f0: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1247f4:
    if (ctx->pc == 0x1247F4u) {
        ctx->pc = 0x1247F8u;
        goto label_1247f8;
    }
    ctx->pc = 0x1247F0u;
    {
        const bool branch_taken_0x1247f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1247f0) {
            ctx->pc = 0x124834u;
            goto label_124834;
        }
    }
    ctx->pc = 0x1247F8u;
label_1247f8:
    // 0x1247f8: 0xc041628  jal         func_1058A0
label_1247fc:
    if (ctx->pc == 0x1247FCu) {
        ctx->pc = 0x1247FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1247F8u;
        // 0x1247fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124800u;
        goto label_124800;
    }
    ctx->pc = 0x1247F8u;
    SET_GPR_U32(ctx, 31, 0x124800u);
    ctx->pc = 0x1247FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1247F8u;
    // 0x1247fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1058A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1058A0u, 0x1247F8u, 0x124800u)) {
        return;
    }
    ctx->pc = 0x124800u;
label_124800:
    // 0x124800: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x124800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_124804:
    // 0x124804: 0x26040038  addiu       $a0, $s0, 0x38
    ctx->pc = 0x124804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
label_124808:
    // 0x124808: 0xc07fb0c  jal         func_1FEC30
label_12480c:
    if (ctx->pc == 0x12480Cu) {
        ctx->pc = 0x12480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124808u;
        // 0x12480c: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124810u;
        goto label_124810;
    }
    ctx->pc = 0x124808u;
    SET_GPR_U32(ctx, 31, 0x124810u);
    ctx->pc = 0x12480Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124808u;
    // 0x12480c: 0x24a58888  addiu       $a1, $a1, -0x7778 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x124808u, 0x124810u)) {
        return;
    }
    ctx->pc = 0x124810u;
label_124810:
    // 0x124810: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x124810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_124814:
    // 0x124814: 0xc041612  jal         func_105848
label_124818:
    if (ctx->pc == 0x124818u) {
        ctx->pc = 0x124818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124814u;
        // 0x124818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12481Cu;
        goto label_12481c;
    }
    ctx->pc = 0x124814u;
    SET_GPR_U32(ctx, 31, 0x12481Cu);
    ctx->pc = 0x124818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124814u;
    // 0x124818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105848u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105848u, 0x124814u, 0x12481Cu)) {
        return;
    }
    ctx->pc = 0x12481Cu;
label_12481c:
    // 0x12481c: 0x8e040c70  lw          $a0, 0xC70($s0)
    ctx->pc = 0x12481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3184)));
label_124820:
    // 0x124820: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_124824:
    if (ctx->pc == 0x124824u) {
        ctx->pc = 0x124824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124820u;
        // 0x124824: 0xae000c70  sw          $zero, 0xC70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124828u;
        goto label_124828;
    }
    ctx->pc = 0x124820u;
    {
        const bool branch_taken_0x124820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x124820) {
            ctx->pc = 0x124824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x124820u;
            // 0x124824: 0xae000c70  sw          $zero, 0xC70($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x124834u;
            goto label_124834;
        }
    }
    ctx->pc = 0x124828u;
label_124828:
    // 0x124828: 0xc0410c8  jal         func_104320
label_12482c:
    if (ctx->pc == 0x12482Cu) {
        ctx->pc = 0x12482Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124828u;
        // 0x12482c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x124830u;
        goto label_124830;
    }
    ctx->pc = 0x124828u;
    SET_GPR_U32(ctx, 31, 0x124830u);
    ctx->pc = 0x12482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124828u;
    // 0x12482c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x104320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104320u, 0x124828u, 0x124830u)) {
        return;
    }
    ctx->pc = 0x124830u;
label_124830:
    // 0x124830: 0xae000c70  sw          $zero, 0xC70($s0)
    ctx->pc = 0x124830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3184), GPR_U32(ctx, 0));
label_124834:
    // 0x124834: 0xc040a72  jal         func_1029C8
label_124838:
    if (ctx->pc == 0x124838u) {
        ctx->pc = 0x124838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124834u;
        // 0x124838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12483Cu;
        goto label_12483c;
    }
    ctx->pc = 0x124834u;
    SET_GPR_U32(ctx, 31, 0x12483Cu);
    ctx->pc = 0x124838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x124834u;
    // 0x124838: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1029C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1029C8u, 0x124834u, 0x12483Cu)) {
        return;
    }
    ctx->pc = 0x12483Cu;
label_12483c:
    // 0x12483c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12483cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_124840:
    // 0x124840: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x124840u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_124844:
    // 0x124844: 0x3e00008  jr          $ra
label_124848:
    if (ctx->pc == 0x124848u) {
        ctx->pc = 0x124848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124844u;
        // 0x124848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12484Cu;
        goto label_12484c;
    }
    ctx->pc = 0x124844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124844u;
        // 0x124848: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x124844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12484Cu;
label_12484c:
    // 0x12484c: 0x0  nop
    ctx->pc = 0x12484cu;
    // NOP
    ctx->pc = 0x124850u;
}
