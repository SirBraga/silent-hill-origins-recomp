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

// Function: sub_00254650
// Address: 0x254650 - 0x254800
void sub_00254650_0x254650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254650_0x254650");
#endif

    switch (ctx->pc) {
        case 0x254650u: goto label_254650;
        case 0x254654u: goto label_254654;
        case 0x254658u: goto label_254658;
        case 0x25465cu: goto label_25465c;
        case 0x254660u: goto label_254660;
        case 0x254664u: goto label_254664;
        case 0x254668u: goto label_254668;
        case 0x25466cu: goto label_25466c;
        case 0x254670u: goto label_254670;
        case 0x254674u: goto label_254674;
        case 0x254678u: goto label_254678;
        case 0x25467cu: goto label_25467c;
        case 0x254680u: goto label_254680;
        case 0x254684u: goto label_254684;
        case 0x254688u: goto label_254688;
        case 0x25468cu: goto label_25468c;
        case 0x254690u: goto label_254690;
        case 0x254694u: goto label_254694;
        case 0x254698u: goto label_254698;
        case 0x25469cu: goto label_25469c;
        case 0x2546a0u: goto label_2546a0;
        case 0x2546a4u: goto label_2546a4;
        case 0x2546a8u: goto label_2546a8;
        case 0x2546acu: goto label_2546ac;
        case 0x2546b0u: goto label_2546b0;
        case 0x2546b4u: goto label_2546b4;
        case 0x2546b8u: goto label_2546b8;
        case 0x2546bcu: goto label_2546bc;
        case 0x2546c0u: goto label_2546c0;
        case 0x2546c4u: goto label_2546c4;
        case 0x2546c8u: goto label_2546c8;
        case 0x2546ccu: goto label_2546cc;
        case 0x2546d0u: goto label_2546d0;
        case 0x2546d4u: goto label_2546d4;
        case 0x2546d8u: goto label_2546d8;
        case 0x2546dcu: goto label_2546dc;
        case 0x2546e0u: goto label_2546e0;
        case 0x2546e4u: goto label_2546e4;
        case 0x2546e8u: goto label_2546e8;
        case 0x2546ecu: goto label_2546ec;
        case 0x2546f0u: goto label_2546f0;
        case 0x2546f4u: goto label_2546f4;
        case 0x2546f8u: goto label_2546f8;
        case 0x2546fcu: goto label_2546fc;
        case 0x254700u: goto label_254700;
        case 0x254704u: goto label_254704;
        case 0x254708u: goto label_254708;
        case 0x25470cu: goto label_25470c;
        case 0x254710u: goto label_254710;
        case 0x254714u: goto label_254714;
        case 0x254718u: goto label_254718;
        case 0x25471cu: goto label_25471c;
        case 0x254720u: goto label_254720;
        case 0x254724u: goto label_254724;
        case 0x254728u: goto label_254728;
        case 0x25472cu: goto label_25472c;
        case 0x254730u: goto label_254730;
        case 0x254734u: goto label_254734;
        case 0x254738u: goto label_254738;
        case 0x25473cu: goto label_25473c;
        case 0x254740u: goto label_254740;
        case 0x254744u: goto label_254744;
        case 0x254748u: goto label_254748;
        case 0x25474cu: goto label_25474c;
        case 0x254750u: goto label_254750;
        case 0x254754u: goto label_254754;
        case 0x254758u: goto label_254758;
        case 0x25475cu: goto label_25475c;
        case 0x254760u: goto label_254760;
        case 0x254764u: goto label_254764;
        case 0x254768u: goto label_254768;
        case 0x25476cu: goto label_25476c;
        case 0x254770u: goto label_254770;
        case 0x254774u: goto label_254774;
        case 0x254778u: goto label_254778;
        case 0x25477cu: goto label_25477c;
        case 0x254780u: goto label_254780;
        case 0x254784u: goto label_254784;
        case 0x254788u: goto label_254788;
        case 0x25478cu: goto label_25478c;
        case 0x254790u: goto label_254790;
        case 0x254794u: goto label_254794;
        case 0x254798u: goto label_254798;
        case 0x25479cu: goto label_25479c;
        case 0x2547a0u: goto label_2547a0;
        case 0x2547a4u: goto label_2547a4;
        case 0x2547a8u: goto label_2547a8;
        case 0x2547acu: goto label_2547ac;
        case 0x2547b0u: goto label_2547b0;
        case 0x2547b4u: goto label_2547b4;
        case 0x2547b8u: goto label_2547b8;
        case 0x2547bcu: goto label_2547bc;
        case 0x2547c0u: goto label_2547c0;
        case 0x2547c4u: goto label_2547c4;
        case 0x2547c8u: goto label_2547c8;
        case 0x2547ccu: goto label_2547cc;
        case 0x2547d0u: goto label_2547d0;
        case 0x2547d4u: goto label_2547d4;
        case 0x2547d8u: goto label_2547d8;
        case 0x2547dcu: goto label_2547dc;
        case 0x2547e0u: goto label_2547e0;
        case 0x2547e4u: goto label_2547e4;
        case 0x2547e8u: goto label_2547e8;
        case 0x2547ecu: goto label_2547ec;
        case 0x2547f0u: goto label_2547f0;
        case 0x2547f4u: goto label_2547f4;
        case 0x2547f8u: goto label_2547f8;
        case 0x2547fcu: goto label_2547fc;
        default: break;
    }

    ctx->pc = 0x254650u;

label_254650:
    // 0x254650: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x254650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_254654:
    // 0x254654: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x254654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_254658:
    // 0x254658: 0x27a70014  addiu       $a3, $sp, 0x14
    ctx->pc = 0x254658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_25465c:
    // 0x25465c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x25465cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_254660:
    // 0x254660: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x254660u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_254664:
    // 0x254664: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x254664u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_254668:
    // 0x254668: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x254668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_25466c:
    // 0x25466c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x25466cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_254670:
    // 0x254670: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x254670u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_254674:
    // 0x254674: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x254674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_254678:
    // 0x254678: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x254678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_25467c:
    // 0x25467c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_254680:
    // 0x254680: 0xc09270a  jal         func_249C28
label_254684:
    if (ctx->pc == 0x254684u) {
        ctx->pc = 0x254684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254680u;
        // 0x254684: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254688u;
        goto label_254688;
    }
    ctx->pc = 0x254680u;
    SET_GPR_U32(ctx, 31, 0x254688u);
    ctx->pc = 0x254684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254680u;
    // 0x254684: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x254680u, 0x254688u)) {
        return;
    }
    ctx->pc = 0x254688u;
label_254688:
    // 0x254688: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_25468c:
    if (ctx->pc == 0x25468Cu) {
        ctx->pc = 0x25468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254688u;
        // 0x25468c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254690u;
        goto label_254690;
    }
    ctx->pc = 0x254688u;
    {
        const bool branch_taken_0x254688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25468Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254688u;
        // 0x25468c: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254688) {
            ctx->pc = 0x2547C0u;
            goto label_2547c0;
        }
    }
    ctx->pc = 0x254690u;
label_254690:
    // 0x254690: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x254690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_254694:
    // 0x254694: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x254694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
label_254698:
    // 0x254698: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x254698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25469c:
    // 0x25469c: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x25469cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_2546a0:
    // 0x2546a0: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_2546a4:
    if (ctx->pc == 0x2546A4u) {
        ctx->pc = 0x2546A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546A0u;
        // 0x2546a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546A8u;
        goto label_2546a8;
    }
    ctx->pc = 0x2546A0u;
    {
        const bool branch_taken_0x2546a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2546A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546A0u;
        // 0x2546a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546a0) {
            ctx->pc = 0x25479Cu;
            goto label_25479c;
        }
    }
    ctx->pc = 0x2546A8u;
label_2546a8:
    // 0x2546a8: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2546a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2546ac:
    // 0x2546ac: 0xc093546  jal         func_24D518
label_2546b0:
    if (ctx->pc == 0x2546B0u) {
        ctx->pc = 0x2546B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546ACu;
        // 0x2546b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546B4u;
        goto label_2546b4;
    }
    ctx->pc = 0x2546ACu;
    SET_GPR_U32(ctx, 31, 0x2546B4u);
    ctx->pc = 0x2546B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2546ACu;
    // 0x2546b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x2546ACu, 0x2546B4u)) {
        return;
    }
    ctx->pc = 0x2546B4u;
label_2546b4:
    // 0x2546b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2546b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2546b8:
    // 0x2546b8: 0x14430048  bne         $v0, $v1, . + 4 + (0x48 << 2)
label_2546bc:
    if (ctx->pc == 0x2546BCu) {
        ctx->pc = 0x2546BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546B8u;
        // 0x2546bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546C0u;
        goto label_2546c0;
    }
    ctx->pc = 0x2546B8u;
    {
        const bool branch_taken_0x2546b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2546BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546B8u;
        // 0x2546bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546b8) {
            ctx->pc = 0x2547DCu;
            goto label_2547dc;
        }
    }
    ctx->pc = 0x2546C0u;
label_2546c0:
    // 0x2546c0: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2546c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2546c4:
    // 0x2546c4: 0x18800012  blez        $a0, . + 4 + (0x12 << 2)
label_2546c8:
    if (ctx->pc == 0x2546C8u) {
        ctx->pc = 0x2546C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546C4u;
        // 0x2546c8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546CCu;
        goto label_2546cc;
    }
    ctx->pc = 0x2546C4u;
    {
        const bool branch_taken_0x2546c4 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x2546C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546C4u;
        // 0x2546c8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546c4) {
            ctx->pc = 0x254710u;
            goto label_254710;
        }
    }
    ctx->pc = 0x2546CCu;
label_2546cc:
    // 0x2546cc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x2546ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_2546d0:
    // 0x2546d0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2546d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2546d4:
    // 0x2546d4: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x2546d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_2546d8:
    // 0x2546d8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2546d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2546dc:
    // 0x2546dc: 0x40f809  jalr        $v0
label_2546e0:
    if (ctx->pc == 0x2546E0u) {
        ctx->pc = 0x2546E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546DCu;
        // 0x2546e0: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546E4u;
        goto label_2546e4;
    }
    ctx->pc = 0x2546DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2546E4u);
        ctx->pc = 0x2546E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546DCu;
        // 0x2546e0: 0x34a5000f  ori         $a1, $a1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2546DCu, 0x2546E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2546E4u;
label_2546e4:
    // 0x2546e4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2546e8:
    if (ctx->pc == 0x2546E8u) {
        ctx->pc = 0x2546E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546E4u;
        // 0x2546e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2546ECu;
        goto label_2546ec;
    }
    ctx->pc = 0x2546E4u;
    {
        const bool branch_taken_0x2546e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2546E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2546E4u;
        // 0x2546e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2546e4) {
            ctx->pc = 0x254714u;
            goto label_254714;
        }
    }
    ctx->pc = 0x2546ECu;
label_2546ec:
    // 0x2546ec: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x2546ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2546f0:
    // 0x2546f0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2546f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2546f4:
    // 0x2546f4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2546f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2546f8:
    // 0x2546f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2546f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2546fc:
    // 0x2546fc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2546fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_254700:
    // 0x254700: 0xc092848  jal         func_24A120
label_254704:
    if (ctx->pc == 0x254704u) {
        ctx->pc = 0x254704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254700u;
        // 0x254704: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x254708u;
        goto label_254708;
    }
    ctx->pc = 0x254700u;
    SET_GPR_U32(ctx, 31, 0x254708u);
    ctx->pc = 0x254704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254700u;
    // 0x254704: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x254700u, 0x254708u)) {
        return;
    }
    ctx->pc = 0x254708u;
label_254708:
    // 0x254708: 0x1000002b  b           . + 4 + (0x2B << 2)
label_25470c:
    if (ctx->pc == 0x25470Cu) {
        ctx->pc = 0x25470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254708u;
        // 0x25470c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254710u;
        goto label_254710;
    }
    ctx->pc = 0x254708u;
    {
        const bool branch_taken_0x254708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254708u;
        // 0x25470c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254708) {
            ctx->pc = 0x2547B8u;
            goto label_2547b8;
        }
    }
    ctx->pc = 0x254710u;
label_254710:
    // 0x254710: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x254710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_254714:
    // 0x254714: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x254714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_254718:
    // 0x254718: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
label_25471c:
    if (ctx->pc == 0x25471Cu) {
        ctx->pc = 0x25471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254718u;
        // 0x25471c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254720u;
        goto label_254720;
    }
    ctx->pc = 0x254718u;
    {
        const bool branch_taken_0x254718 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x25471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254718u;
        // 0x25471c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254718) {
            ctx->pc = 0x2547D8u;
            goto label_2547d8;
        }
    }
    ctx->pc = 0x254720u;
label_254720:
    // 0x254720: 0x3c12fffc  lui         $s2, 0xFFFC
    ctx->pc = 0x254720u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65532 << 16));
label_254724:
    // 0x254724: 0x3652b000  ori         $s2, $s2, 0xB000
    ctx->pc = 0x254724u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45056);
label_254728:
    // 0x254728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x254728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_25472c:
    // 0x25472c: 0x0  nop
    ctx->pc = 0x25472cu;
    // NOP
label_254730:
    // 0x254730: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x254730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_254734:
    // 0x254734: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x254734u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_254738:
    // 0x254738: 0xc09270a  jal         func_249C28
label_25473c:
    if (ctx->pc == 0x25473Cu) {
        ctx->pc = 0x25473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254738u;
        // 0x25473c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254740u;
        goto label_254740;
    }
    ctx->pc = 0x254738u;
    SET_GPR_U32(ctx, 31, 0x254740u);
    ctx->pc = 0x25473Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254738u;
    // 0x25473c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x254738u, 0x254740u)) {
        return;
    }
    ctx->pc = 0x254740u;
label_254740:
    // 0x254740: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_254744:
    if (ctx->pc == 0x254744u) {
        ctx->pc = 0x254744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254740u;
        // 0x254744: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254748u;
        goto label_254748;
    }
    ctx->pc = 0x254740u;
    {
        const bool branch_taken_0x254740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254740u;
        // 0x254744: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254740) {
            ctx->pc = 0x2547C8u;
            goto label_2547c8;
        }
    }
    ctx->pc = 0x254748u;
label_254748:
    // 0x254748: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x254748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_25474c:
    // 0x25474c: 0x2c422003  sltiu       $v0, $v0, 0x2003
    ctx->pc = 0x25474cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
label_254750:
    // 0x254750: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_254754:
    if (ctx->pc == 0x254754u) {
        ctx->pc = 0x254758u;
        goto label_254758;
    }
    ctx->pc = 0x254750u;
    {
        const bool branch_taken_0x254750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254750) {
            ctx->pc = 0x2547C8u;
            goto label_2547c8;
        }
    }
    ctx->pc = 0x254758u;
label_254758:
    // 0x254758: 0xc095b4e  jal         func_256D38
label_25475c:
    if (ctx->pc == 0x25475Cu) {
        ctx->pc = 0x25475Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254758u;
        // 0x25475c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254760u;
        goto label_254760;
    }
    ctx->pc = 0x254758u;
    SET_GPR_U32(ctx, 31, 0x254760u);
    ctx->pc = 0x25475Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254758u;
    // 0x25475c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x256D38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x256D38u, 0x254758u, 0x254760u)) {
        return;
    }
    ctx->pc = 0x254760u;
label_254760:
    // 0x254760: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x254760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_254764:
    // 0x254764: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x254764u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_254768:
    // 0x254768: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x254768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_25476c:
    // 0x25476c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_254770:
    if (ctx->pc == 0x254770u) {
        ctx->pc = 0x254770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25476Cu;
        // 0x254770: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254774u;
        goto label_254774;
    }
    ctx->pc = 0x25476Cu;
    {
        const bool branch_taken_0x25476c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x254770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25476Cu;
        // 0x254770: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25476c) {
            ctx->pc = 0x2547C8u;
            goto label_2547c8;
        }
    }
    ctx->pc = 0x254774u;
label_254774:
    // 0x254774: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x254774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_254778:
    // 0x254778: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x254778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_25477c:
    // 0x25477c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x25477cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_254780:
    // 0x254780: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x254780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_254784:
    // 0x254784: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x254784u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_254788:
    // 0x254788: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x254788u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_25478c:
    // 0x25478c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_254790:
    if (ctx->pc == 0x254790u) {
        ctx->pc = 0x254790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25478Cu;
        // 0x254790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x254794u;
        goto label_254794;
    }
    ctx->pc = 0x25478Cu;
    {
        const bool branch_taken_0x25478c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x254790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25478Cu;
        // 0x254790: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25478c) {
            ctx->pc = 0x254730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_254730;
        }
    }
    ctx->pc = 0x254794u;
label_254794:
    // 0x254794: 0x10000011  b           . + 4 + (0x11 << 2)
label_254798:
    if (ctx->pc == 0x254798u) {
        ctx->pc = 0x254798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254794u;
        // 0x254798: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25479Cu;
        goto label_25479c;
    }
    ctx->pc = 0x254794u;
    {
        const bool branch_taken_0x254794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x254798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254794u;
        // 0x254798: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254794) {
            ctx->pc = 0x2547DCu;
            goto label_2547dc;
        }
    }
    ctx->pc = 0x25479Cu;
label_25479c:
    // 0x25479c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x25479cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2547a0:
    // 0x2547a0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2547a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2547a4:
    // 0x2547a4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2547a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2547a8:
    // 0x2547a8: 0xc092848  jal         func_24A120
label_2547ac:
    if (ctx->pc == 0x2547ACu) {
        ctx->pc = 0x2547ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547A8u;
        // 0x2547ac: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547B0u;
        goto label_2547b0;
    }
    ctx->pc = 0x2547A8u;
    SET_GPR_U32(ctx, 31, 0x2547B0u);
    ctx->pc = 0x2547ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547A8u;
    // 0x2547ac: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x2547A8u, 0x2547B0u)) {
        return;
    }
    ctx->pc = 0x2547B0u;
label_2547b0:
    // 0x2547b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2547b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2547b4:
    // 0x2547b4: 0x0  nop
    ctx->pc = 0x2547b4u;
    // NOP
label_2547b8:
    // 0x2547b8: 0xc09281a  jal         func_24A068
label_2547bc:
    if (ctx->pc == 0x2547BCu) {
        ctx->pc = 0x2547BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547B8u;
        // 0x2547bc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547C0u;
        goto label_2547c0;
    }
    ctx->pc = 0x2547B8u;
    SET_GPR_U32(ctx, 31, 0x2547C0u);
    ctx->pc = 0x2547BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547B8u;
    // 0x2547bc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x2547B8u, 0x2547C0u)) {
        return;
    }
    ctx->pc = 0x2547C0u;
label_2547c0:
    // 0x2547c0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2547c4:
    if (ctx->pc == 0x2547C4u) {
        ctx->pc = 0x2547C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C0u;
        // 0x2547c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547C8u;
        goto label_2547c8;
    }
    ctx->pc = 0x2547C0u;
    {
        const bool branch_taken_0x2547c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C0u;
        // 0x2547c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547c0) {
            ctx->pc = 0x2547DCu;
            goto label_2547dc;
        }
    }
    ctx->pc = 0x2547C8u;
label_2547c8:
    // 0x2547c8: 0xc095170  jal         func_2545C0
label_2547cc:
    if (ctx->pc == 0x2547CCu) {
        ctx->pc = 0x2547CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547C8u;
        // 0x2547cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547D0u;
        goto label_2547d0;
    }
    ctx->pc = 0x2547C8u;
    SET_GPR_U32(ctx, 31, 0x2547D0u);
    ctx->pc = 0x2547CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2547C8u;
    // 0x2547cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2545C0u, 0x2547C8u, 0x2547D0u)) {
        return;
    }
    ctx->pc = 0x2547D0u;
label_2547d0:
    // 0x2547d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2547d4:
    if (ctx->pc == 0x2547D4u) {
        ctx->pc = 0x2547D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547D0u;
        // 0x2547d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547D8u;
        goto label_2547d8;
    }
    ctx->pc = 0x2547D0u;
    {
        const bool branch_taken_0x2547d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2547D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547D0u;
        // 0x2547d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2547d0) {
            ctx->pc = 0x2547DCu;
            goto label_2547dc;
        }
    }
    ctx->pc = 0x2547D8u;
label_2547d8:
    // 0x2547d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2547d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2547dc:
    // 0x2547dc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2547dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2547e0:
    // 0x2547e0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2547e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2547e4:
    // 0x2547e4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2547e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2547e8:
    // 0x2547e8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2547e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2547ec:
    // 0x2547ec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2547ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2547f0:
    // 0x2547f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2547f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2547f4:
    // 0x2547f4: 0x3e00008  jr          $ra
label_2547f8:
    if (ctx->pc == 0x2547F8u) {
        ctx->pc = 0x2547F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547F4u;
        // 0x2547f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2547FCu;
        goto label_2547fc;
    }
    ctx->pc = 0x2547F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2547F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2547F4u;
        // 0x2547f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2547F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2547FCu;
label_2547fc:
    // 0x2547fc: 0x0  nop
    ctx->pc = 0x2547fcu;
    // NOP
    ctx->pc = 0x254800u;
}
