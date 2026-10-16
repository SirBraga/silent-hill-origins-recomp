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

// Function: sub_0021C6C8
// Address: 0x21c6c8 - 0x21c918
void sub_0021C6C8_0x21c6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C6C8_0x21c6c8");
#endif

    switch (ctx->pc) {
        case 0x21c6c8u: goto label_21c6c8;
        case 0x21c6ccu: goto label_21c6cc;
        case 0x21c6d0u: goto label_21c6d0;
        case 0x21c6d4u: goto label_21c6d4;
        case 0x21c6d8u: goto label_21c6d8;
        case 0x21c6dcu: goto label_21c6dc;
        case 0x21c6e0u: goto label_21c6e0;
        case 0x21c6e4u: goto label_21c6e4;
        case 0x21c6e8u: goto label_21c6e8;
        case 0x21c6ecu: goto label_21c6ec;
        case 0x21c6f0u: goto label_21c6f0;
        case 0x21c6f4u: goto label_21c6f4;
        case 0x21c6f8u: goto label_21c6f8;
        case 0x21c6fcu: goto label_21c6fc;
        case 0x21c700u: goto label_21c700;
        case 0x21c704u: goto label_21c704;
        case 0x21c708u: goto label_21c708;
        case 0x21c70cu: goto label_21c70c;
        case 0x21c710u: goto label_21c710;
        case 0x21c714u: goto label_21c714;
        case 0x21c718u: goto label_21c718;
        case 0x21c71cu: goto label_21c71c;
        case 0x21c720u: goto label_21c720;
        case 0x21c724u: goto label_21c724;
        case 0x21c728u: goto label_21c728;
        case 0x21c72cu: goto label_21c72c;
        case 0x21c730u: goto label_21c730;
        case 0x21c734u: goto label_21c734;
        case 0x21c738u: goto label_21c738;
        case 0x21c73cu: goto label_21c73c;
        case 0x21c740u: goto label_21c740;
        case 0x21c744u: goto label_21c744;
        case 0x21c748u: goto label_21c748;
        case 0x21c74cu: goto label_21c74c;
        case 0x21c750u: goto label_21c750;
        case 0x21c754u: goto label_21c754;
        case 0x21c758u: goto label_21c758;
        case 0x21c75cu: goto label_21c75c;
        case 0x21c760u: goto label_21c760;
        case 0x21c764u: goto label_21c764;
        case 0x21c768u: goto label_21c768;
        case 0x21c76cu: goto label_21c76c;
        case 0x21c770u: goto label_21c770;
        case 0x21c774u: goto label_21c774;
        case 0x21c778u: goto label_21c778;
        case 0x21c77cu: goto label_21c77c;
        case 0x21c780u: goto label_21c780;
        case 0x21c784u: goto label_21c784;
        case 0x21c788u: goto label_21c788;
        case 0x21c78cu: goto label_21c78c;
        case 0x21c790u: goto label_21c790;
        case 0x21c794u: goto label_21c794;
        case 0x21c798u: goto label_21c798;
        case 0x21c79cu: goto label_21c79c;
        case 0x21c7a0u: goto label_21c7a0;
        case 0x21c7a4u: goto label_21c7a4;
        case 0x21c7a8u: goto label_21c7a8;
        case 0x21c7acu: goto label_21c7ac;
        case 0x21c7b0u: goto label_21c7b0;
        case 0x21c7b4u: goto label_21c7b4;
        case 0x21c7b8u: goto label_21c7b8;
        case 0x21c7bcu: goto label_21c7bc;
        case 0x21c7c0u: goto label_21c7c0;
        case 0x21c7c4u: goto label_21c7c4;
        case 0x21c7c8u: goto label_21c7c8;
        case 0x21c7ccu: goto label_21c7cc;
        case 0x21c7d0u: goto label_21c7d0;
        case 0x21c7d4u: goto label_21c7d4;
        case 0x21c7d8u: goto label_21c7d8;
        case 0x21c7dcu: goto label_21c7dc;
        case 0x21c7e0u: goto label_21c7e0;
        case 0x21c7e4u: goto label_21c7e4;
        case 0x21c7e8u: goto label_21c7e8;
        case 0x21c7ecu: goto label_21c7ec;
        case 0x21c7f0u: goto label_21c7f0;
        case 0x21c7f4u: goto label_21c7f4;
        case 0x21c7f8u: goto label_21c7f8;
        case 0x21c7fcu: goto label_21c7fc;
        case 0x21c800u: goto label_21c800;
        case 0x21c804u: goto label_21c804;
        case 0x21c808u: goto label_21c808;
        case 0x21c80cu: goto label_21c80c;
        case 0x21c810u: goto label_21c810;
        case 0x21c814u: goto label_21c814;
        case 0x21c818u: goto label_21c818;
        case 0x21c81cu: goto label_21c81c;
        case 0x21c820u: goto label_21c820;
        case 0x21c824u: goto label_21c824;
        case 0x21c828u: goto label_21c828;
        case 0x21c82cu: goto label_21c82c;
        case 0x21c830u: goto label_21c830;
        case 0x21c834u: goto label_21c834;
        case 0x21c838u: goto label_21c838;
        case 0x21c83cu: goto label_21c83c;
        case 0x21c840u: goto label_21c840;
        case 0x21c844u: goto label_21c844;
        case 0x21c848u: goto label_21c848;
        case 0x21c84cu: goto label_21c84c;
        case 0x21c850u: goto label_21c850;
        case 0x21c854u: goto label_21c854;
        case 0x21c858u: goto label_21c858;
        case 0x21c85cu: goto label_21c85c;
        case 0x21c860u: goto label_21c860;
        case 0x21c864u: goto label_21c864;
        case 0x21c868u: goto label_21c868;
        case 0x21c86cu: goto label_21c86c;
        case 0x21c870u: goto label_21c870;
        case 0x21c874u: goto label_21c874;
        case 0x21c878u: goto label_21c878;
        case 0x21c87cu: goto label_21c87c;
        case 0x21c880u: goto label_21c880;
        case 0x21c884u: goto label_21c884;
        case 0x21c888u: goto label_21c888;
        case 0x21c88cu: goto label_21c88c;
        case 0x21c890u: goto label_21c890;
        case 0x21c894u: goto label_21c894;
        case 0x21c898u: goto label_21c898;
        case 0x21c89cu: goto label_21c89c;
        case 0x21c8a0u: goto label_21c8a0;
        case 0x21c8a4u: goto label_21c8a4;
        case 0x21c8a8u: goto label_21c8a8;
        case 0x21c8acu: goto label_21c8ac;
        case 0x21c8b0u: goto label_21c8b0;
        case 0x21c8b4u: goto label_21c8b4;
        case 0x21c8b8u: goto label_21c8b8;
        case 0x21c8bcu: goto label_21c8bc;
        case 0x21c8c0u: goto label_21c8c0;
        case 0x21c8c4u: goto label_21c8c4;
        case 0x21c8c8u: goto label_21c8c8;
        case 0x21c8ccu: goto label_21c8cc;
        case 0x21c8d0u: goto label_21c8d0;
        case 0x21c8d4u: goto label_21c8d4;
        case 0x21c8d8u: goto label_21c8d8;
        case 0x21c8dcu: goto label_21c8dc;
        case 0x21c8e0u: goto label_21c8e0;
        case 0x21c8e4u: goto label_21c8e4;
        case 0x21c8e8u: goto label_21c8e8;
        case 0x21c8ecu: goto label_21c8ec;
        case 0x21c8f0u: goto label_21c8f0;
        case 0x21c8f4u: goto label_21c8f4;
        case 0x21c8f8u: goto label_21c8f8;
        case 0x21c8fcu: goto label_21c8fc;
        case 0x21c900u: goto label_21c900;
        case 0x21c904u: goto label_21c904;
        case 0x21c908u: goto label_21c908;
        case 0x21c90cu: goto label_21c90c;
        case 0x21c910u: goto label_21c910;
        case 0x21c914u: goto label_21c914;
        default: break;
    }

    ctx->pc = 0x21c6c8u;

label_21c6c8:
    // 0x21c6c8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21c6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_21c6cc:
    // 0x21c6cc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x21c6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_21c6d0:
    // 0x21c6d0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x21c6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_21c6d4:
    // 0x21c6d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x21c6d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c6d8:
    // 0x21c6d8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x21c6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_21c6dc:
    // 0x21c6dc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x21c6dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_21c6e0:
    // 0x21c6e0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x21c6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_21c6e4:
    // 0x21c6e4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x21c6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_21c6e8:
    // 0x21c6e8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x21c6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_21c6ec:
    // 0x21c6ec: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x21c6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_21c6f0:
    // 0x21c6f0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x21c6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_21c6f4:
    // 0x21c6f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x21c6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_21c6f8:
    // 0x21c6f8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x21c6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_21c6fc:
    // 0x21c6fc: 0x8e650098  lw          $a1, 0x98($s3)
    ctx->pc = 0x21c6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_21c700:
    // 0x21c700: 0x8e6201ac  lw          $v0, 0x1AC($s3)
    ctx->pc = 0x21c700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 428)));
label_21c704:
    // 0x21c704: 0x8e660090  lw          $a2, 0x90($s3)
    ctx->pc = 0x21c704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_21c708:
    // 0x21c708: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x21c708u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_21c70c:
    // 0x21c70c: 0x8e620140  lw          $v0, 0x140($s3)
    ctx->pc = 0x21c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
label_21c710:
    // 0x21c710: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x21c710u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_21c714:
    // 0x21c714: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21c714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_21c718:
    // 0x21c718: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_21c71c:
    if (ctx->pc == 0x21C71Cu) {
        ctx->pc = 0x21C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C718u;
        // 0x21c71c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C720u;
        goto label_21c720;
    }
    ctx->pc = 0x21C718u;
    {
        const bool branch_taken_0x21c718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C718u;
        // 0x21c71c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c718) {
            ctx->pc = 0x21C730u;
            goto label_21c730;
        }
    }
    ctx->pc = 0x21C720u;
label_21c720:
    // 0x21c720: 0x14c50015  bne         $a2, $a1, . + 4 + (0x15 << 2)
label_21c724:
    if (ctx->pc == 0x21C724u) {
        ctx->pc = 0x21C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C720u;
        // 0x21c724: 0x8e64009c  lw          $a0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C728u;
        goto label_21c728;
    }
    ctx->pc = 0x21C720u;
    {
        const bool branch_taken_0x21c720 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x21C724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C720u;
        // 0x21c724: 0x8e64009c  lw          $a0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c720) {
            ctx->pc = 0x21C778u;
            goto label_21c778;
        }
    }
    ctx->pc = 0x21C728u;
label_21c728:
    // 0x21c728: 0x10000010  b           . + 4 + (0x10 << 2)
label_21c72c:
    if (ctx->pc == 0x21C72Cu) {
        ctx->pc = 0x21C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C728u;
        // 0x21c72c: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C730u;
        goto label_21c730;
    }
    ctx->pc = 0x21C728u;
    {
        const bool branch_taken_0x21c728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C72Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C728u;
        // 0x21c72c: 0x8e620094  lw          $v0, 0x94($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c728) {
            ctx->pc = 0x21C76Cu;
            goto label_21c76c;
        }
    }
    ctx->pc = 0x21C730u;
label_21c730:
    // 0x21c730: 0x8e6301b4  lw          $v1, 0x1B4($s3)
    ctx->pc = 0x21c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
label_21c734:
    // 0x21c734: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21c734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21c738:
    // 0x21c738: 0x40f809  jalr        $v0
label_21c73c:
    if (ctx->pc == 0x21C73Cu) {
        ctx->pc = 0x21C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C738u;
        // 0x21c73c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C740u;
        goto label_21c740;
    }
    ctx->pc = 0x21C738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C740u);
        ctx->pc = 0x21C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C738u;
        // 0x21c73c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C738u, 0x21C740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C740u;
label_21c740:
    // 0x21c740: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_21c744:
    if (ctx->pc == 0x21C744u) {
        ctx->pc = 0x21C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C740u;
        // 0x21c744: 0x8e650090  lw          $a1, 0x90($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C748u;
        goto label_21c748;
    }
    ctx->pc = 0x21C740u;
    {
        const bool branch_taken_0x21c740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c740) {
            ctx->pc = 0x21C744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C740u;
            // 0x21c744: 0x8e650090  lw          $a1, 0x90($s3) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C750u;
            goto label_21c750;
        }
    }
    ctx->pc = 0x21C748u;
label_21c748:
    // 0x21c748: 0x10000067  b           . + 4 + (0x67 << 2)
label_21c74c:
    if (ctx->pc == 0x21C74Cu) {
        ctx->pc = 0x21C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C748u;
        // 0x21c74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C750u;
        goto label_21c750;
    }
    ctx->pc = 0x21C748u;
    {
        const bool branch_taken_0x21c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C748u;
        // 0x21c74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c748) {
            ctx->pc = 0x21C8E8u;
            goto label_21c8e8;
        }
    }
    ctx->pc = 0x21C750u;
label_21c750:
    // 0x21c750: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x21c750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_21c754:
    // 0x21c754: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x21c754u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_21c758:
    // 0x21c758: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_21c75c:
    if (ctx->pc == 0x21C75Cu) {
        ctx->pc = 0x21C75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C758u;
        // 0x21c75c: 0x8e6301b4  lw          $v1, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C760u;
        goto label_21c760;
    }
    ctx->pc = 0x21C758u;
    {
        const bool branch_taken_0x21c758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c758) {
            ctx->pc = 0x21C75Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C758u;
            // 0x21c75c: 0x8e6301b4  lw          $v1, 0x1B4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c734;
        }
    }
    ctx->pc = 0x21C760u;
label_21c760:
    // 0x21c760: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
label_21c764:
    if (ctx->pc == 0x21C764u) {
        ctx->pc = 0x21C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C760u;
        // 0x21c764: 0x8e64009c  lw          $a0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C768u;
        goto label_21c768;
    }
    ctx->pc = 0x21C760u;
    {
        const bool branch_taken_0x21c760 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x21C764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C760u;
        // 0x21c764: 0x8e64009c  lw          $a0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c760) {
            ctx->pc = 0x21C778u;
            goto label_21c778;
        }
    }
    ctx->pc = 0x21C768u;
label_21c768:
    // 0x21c768: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x21c768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
label_21c76c:
    // 0x21c76c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x21c76cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c770:
    // 0x21c770: 0x5040fff0  beql        $v0, $zero, . + 4 + (-0x10 << 2)
label_21c774:
    if (ctx->pc == 0x21C774u) {
        ctx->pc = 0x21C774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C770u;
        // 0x21c774: 0x8e6301b4  lw          $v1, 0x1B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C778u;
        goto label_21c778;
    }
    ctx->pc = 0x21C770u;
    {
        const bool branch_taken_0x21c770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c770) {
            ctx->pc = 0x21C774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C770u;
            // 0x21c774: 0x8e6301b4  lw          $v1, 0x1B4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 436)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C734u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c734;
        }
    }
    ctx->pc = 0x21C778u;
label_21c778:
    // 0x21c778: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x21c778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_21c77c:
    // 0x21c77c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x21c77cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c780:
    // 0x21c780: 0x18400052  blez        $v0, . + 4 + (0x52 << 2)
label_21c784:
    if (ctx->pc == 0x21C784u) {
        ctx->pc = 0x21C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C780u;
        // 0x21c784: 0x8e7200d8  lw          $s2, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C788u;
        goto label_21c788;
    }
    ctx->pc = 0x21C780u;
    {
        const bool branch_taken_0x21c780 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21C784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C780u;
        // 0x21c784: 0x8e7200d8  lw          $s2, 0xD8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c780) {
            ctx->pc = 0x21C8CCu;
            goto label_21c8cc;
        }
    }
    ctx->pc = 0x21C788u;
label_21c788:
    // 0x21c788: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x21c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_21c78c:
    // 0x21c78c: 0x262a0001  addiu       $t2, $s1, 0x1
    ctx->pc = 0x21c78cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21c790:
    // 0x21c790: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_21c794:
    if (ctx->pc == 0x21C794u) {
        ctx->pc = 0x21C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C790u;
        // 0x21c794: 0x26490054  addiu       $t1, $s2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C798u;
        goto label_21c798;
    }
    ctx->pc = 0x21C790u;
    {
        const bool branch_taken_0x21c790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C790u;
        // 0x21c794: 0x26490054  addiu       $t1, $s2, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c790) {
            ctx->pc = 0x21C8B4u;
            goto label_21c8b4;
        }
    }
    ctx->pc = 0x21C798u;
label_21c798:
    // 0x21c798: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x21c798u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_21c79c:
    // 0x21c79c: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x21c79cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_21c7a0:
    // 0x21c7a0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x21c7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21c7a4:
    // 0x21c7a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x21c7a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c7a8:
    // 0x21c7a8: 0x870018  mult        $zero, $a0, $a3
    ctx->pc = 0x21c7a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_21c7ac:
    // 0x21c7ac: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x21c7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_21c7b0:
    // 0x21c7b0: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x21c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_21c7b4:
    // 0x21c7b4: 0x8c450048  lw          $a1, 0x48($v0)
    ctx->pc = 0x21c7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_21c7b8:
    // 0x21c7b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21c7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_21c7bc:
    // 0x21c7bc: 0x3012  mflo        $a2
    ctx->pc = 0x21c7bcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_21c7c0:
    // 0x21c7c0: 0x40f809  jalr        $v0
label_21c7c4:
    if (ctx->pc == 0x21C7C4u) {
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C7C8u;
        goto label_21c7c8;
    }
    ctx->pc = 0x21C7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C7C8u);
        ctx->pc = 0x21C7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7C0u;
        // 0x21c7c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C7C0u, 0x21C7C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C7C8u;
label_21c7c8:
    // 0x21c7c8: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x21c7c8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c7cc:
    // 0x21c7cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x21c7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_21c7d0:
    // 0x21c7d0: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x21c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_21c7d4:
    // 0x21c7d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x21c7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_21c7d8:
    // 0x21c7d8: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_21c7dc:
    if (ctx->pc == 0x21C7DCu) {
        ctx->pc = 0x21C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7D8u;
        // 0x21c7dc: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C7E0u;
        goto label_21c7e0;
    }
    ctx->pc = 0x21C7D8u;
    {
        const bool branch_taken_0x21c7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c7d8) {
            ctx->pc = 0x21C7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C7D8u;
            // 0x21c7dc: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C7E8u;
            goto label_21c7e8;
        }
    }
    ctx->pc = 0x21C7E0u;
label_21c7e0:
    // 0x21c7e0: 0x10000008  b           . + 4 + (0x8 << 2)
label_21c7e4:
    if (ctx->pc == 0x21C7E4u) {
        ctx->pc = 0x21C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7E0u;
        // 0x21c7e4: 0x8e56000c  lw          $s6, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C7E8u;
        goto label_21c7e8;
    }
    ctx->pc = 0x21C7E0u;
    {
        const bool branch_taken_0x21c7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7E0u;
        // 0x21c7e4: 0x8e56000c  lw          $s6, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c7e0) {
            ctx->pc = 0x21C804u;
            goto label_21c804;
        }
    }
    ctx->pc = 0x21C7E8u;
label_21c7e8:
    // 0x21c7e8: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x21c7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_21c7ec:
    // 0x21c7ec: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x21c7ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_21c7f0:
    // 0x21c7f0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_21c7f4:
    if (ctx->pc == 0x21C7F4u) {
        ctx->pc = 0x21C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C7F0u;
        // 0x21c7f4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C7F8u;
        goto label_21c7f8;
    }
    ctx->pc = 0x21C7F0u;
    {
        const bool branch_taken_0x21c7f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c7f0) {
            ctx->pc = 0x21C7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C7F0u;
            // 0x21c7f4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C7F8u;
            goto label_21c7f8;
        }
    }
    ctx->pc = 0x21C7F8u;
label_21c7f8:
    // 0x21c7f8: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x21c7f8u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_21c7fc:
    // 0x21c7fc: 0x1010  mfhi        $v0
    ctx->pc = 0x21c7fcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_21c800:
    // 0x21c800: 0x42b00b  movn        $s6, $v0, $v0
    ctx->pc = 0x21c800u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2));
label_21c804:
    // 0x21c804: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x21c804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21c808:
    // 0x21c808: 0x262a0001  addiu       $t2, $s1, 0x1
    ctx->pc = 0x21c808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21c80c:
    // 0x21c80c: 0x8e6301c0  lw          $v1, 0x1C0($s3)
    ctx->pc = 0x21c80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 448)));
label_21c810:
    // 0x21c810: 0x26490054  addiu       $t1, $s2, 0x54
    ctx->pc = 0x21c810u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
label_21c814:
    // 0x21c814: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x21c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_21c818:
    // 0x21c818: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x21c818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_21c81c:
    // 0x21c81c: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x21c81cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c820:
    // 0x21c820: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x21c820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c824:
    // 0x21c824: 0x1ac00023  blez        $s6, . + 4 + (0x23 << 2)
label_21c828:
    if (ctx->pc == 0x21C828u) {
        ctx->pc = 0x21C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C824u;
        // 0x21c828: 0x8c7e0004  lw          $fp, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C82Cu;
        goto label_21c82c;
    }
    ctx->pc = 0x21C824u;
    {
        const bool branch_taken_0x21c824 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x21C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C824u;
        // 0x21c828: 0x8c7e0004  lw          $fp, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c824) {
            ctx->pc = 0x21C8B4u;
            goto label_21c8b4;
        }
    }
    ctx->pc = 0x21C82Cu;
label_21c82c:
    // 0x21c82c: 0x0  nop
    ctx->pc = 0x21c82cu;
    // NOP
label_21c830:
    // 0x21c830: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x21c830u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_21c834:
    // 0x21c834: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x21c834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_21c838:
    // 0x21c838: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x21c838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_21c83c:
    // 0x21c83c: 0x24970001  addiu       $s7, $a0, 0x1
    ctx->pc = 0x21c83cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21c840:
    // 0x21c840: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x21c840u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21c844:
    // 0x21c844: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x21c844u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c848:
    // 0x21c848: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_21c84c:
    if (ctx->pc == 0x21C84Cu) {
        ctx->pc = 0x21C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C848u;
        // 0x21c84c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C850u;
        goto label_21c850;
    }
    ctx->pc = 0x21C848u;
    {
        const bool branch_taken_0x21c848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C848u;
        // 0x21c84c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c848) {
            ctx->pc = 0x21C89Cu;
            goto label_21c89c;
        }
    }
    ctx->pc = 0x21C850u;
label_21c850:
    // 0x21c850: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21c850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c854:
    // 0x21c854: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x21c854u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_21c858:
    // 0x21c858: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x21c858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
label_21c85c:
    // 0x21c85c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x21c85cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_21c860:
    // 0x21c860: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x21c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
label_21c864:
    // 0x21c864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21c868:
    // 0x21c868: 0x7fab0030  sq          $t3, 0x30($sp)
    ctx->pc = 0x21c868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 11));
label_21c86c:
    // 0x21c86c: 0x3c0f809  jalr        $fp
label_21c870:
    if (ctx->pc == 0x21C870u) {
        ctx->pc = 0x21C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C86Cu;
        // 0x21c870: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C874u;
        goto label_21c874;
    }
    ctx->pc = 0x21C86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 30);
        SET_GPR_U32(ctx, 31, 0x21C874u);
        ctx->pc = 0x21C870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C86Cu;
        // 0x21c870: 0x2a0382d  daddu       $a3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C86Cu, 0x21C874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C874u;
label_21c874:
    // 0x21c874: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x21c874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_21c878:
    // 0x21c878: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x21c878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_21c87c:
    // 0x21c87c: 0x26310080  addiu       $s1, $s1, 0x80
    ctx->pc = 0x21c87cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_21c880:
    // 0x21c880: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x21c880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_21c884:
    // 0x21c884: 0x283a021  addu        $s4, $s4, $v1
    ctx->pc = 0x21c884u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_21c888:
    // 0x21c888: 0x7ba90010  lq          $t1, 0x10($sp)
    ctx->pc = 0x21c888u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c88c:
    // 0x21c88c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x21c88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_21c890:
    // 0x21c890: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x21c890u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c894:
    // 0x21c894: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_21c898:
    if (ctx->pc == 0x21C898u) {
        ctx->pc = 0x21C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C894u;
        // 0x21c898: 0x7bab0030  lq          $t3, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C89Cu;
        goto label_21c89c;
    }
    ctx->pc = 0x21C894u;
    {
        const bool branch_taken_0x21c894 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C894u;
        // 0x21c898: 0x7bab0030  lq          $t3, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c894) {
            ctx->pc = 0x21C850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c850;
        }
    }
    ctx->pc = 0x21C89Cu;
label_21c89c:
    // 0x21c89c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x21c89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_21c8a0:
    // 0x21c8a0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x21c8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_21c8a4:
    // 0x21c8a4: 0x96182a  slt         $v1, $a0, $s6
    ctx->pc = 0x21c8a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_21c8a8:
    // 0x21c8a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21c8ac:
    // 0x21c8ac: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_21c8b0:
    if (ctx->pc == 0x21C8B0u) {
        ctx->pc = 0x21C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8ACu;
        // 0x21c8b0: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8B4u;
        goto label_21c8b4;
    }
    ctx->pc = 0x21C8ACu;
    {
        const bool branch_taken_0x21c8ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8ACu;
        // 0x21c8b0: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8ac) {
            ctx->pc = 0x21C830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c830;
        }
    }
    ctx->pc = 0x21C8B4u;
label_21c8b4:
    // 0x21c8b4: 0x8e620024  lw          $v0, 0x24($s3)
    ctx->pc = 0x21c8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_21c8b8:
    // 0x21c8b8: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x21c8b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_21c8bc:
    // 0x21c8bc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x21c8bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_21c8c0:
    // 0x21c8c0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21c8c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21c8c4:
    // 0x21c8c4: 0x1440ffb0  bnez        $v0, . + 4 + (-0x50 << 2)
label_21c8c8:
    if (ctx->pc == 0x21C8C8u) {
        ctx->pc = 0x21C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8C4u;
        // 0x21c8c8: 0x8e64009c  lw          $a0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C8CCu;
        goto label_21c8cc;
    }
    ctx->pc = 0x21C8C4u;
    {
        const bool branch_taken_0x21c8c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21C8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C8C4u;
        // 0x21c8c8: 0x8e64009c  lw          $a0, 0x9C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c8c4) {
            ctx->pc = 0x21C788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c788;
        }
    }
    ctx->pc = 0x21C8CCu;
label_21c8cc:
    // 0x21c8cc: 0x8e630140  lw          $v1, 0x140($s3)
    ctx->pc = 0x21c8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 320)));
label_21c8d0:
    // 0x21c8d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x21c8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_21c8d4:
    // 0x21c8d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x21c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_21c8d8:
    // 0x21c8d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x21c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21c8dc:
    // 0x21c8dc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x21c8dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_21c8e0:
    // 0x21c8e0: 0xae64009c  sw          $a0, 0x9C($s3)
    ctx->pc = 0x21c8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 4));
label_21c8e4:
    // 0x21c8e4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x21c8e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5));
label_21c8e8:
    // 0x21c8e8: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x21c8e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_21c8ec:
    // 0x21c8ec: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x21c8ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_21c8f0:
    // 0x21c8f0: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x21c8f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_21c8f4:
    // 0x21c8f4: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x21c8f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21c8f8:
    // 0x21c8f8: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x21c8f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21c8fc:
    // 0x21c8fc: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x21c8fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21c900:
    // 0x21c900: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x21c900u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21c904:
    // 0x21c904: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x21c904u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21c908:
    // 0x21c908: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x21c908u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21c90c:
    // 0x21c90c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x21c90cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_21c910:
    // 0x21c910: 0x3e00008  jr          $ra
label_21c914:
    if (ctx->pc == 0x21C914u) {
        ctx->pc = 0x21C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C910u;
        // 0x21c914: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C918u;
        goto label_fallthrough_0x21c910;
    }
    ctx->pc = 0x21C910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C910u;
        // 0x21c914: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C910u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21c910:
    ctx->pc = 0x21C918u;
}
