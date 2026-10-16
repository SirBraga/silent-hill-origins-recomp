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

// Function: sub_002865E0
// Address: 0x2865e0 - 0x2867c0
void sub_002865E0_0x2865e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002865E0_0x2865e0");
#endif

    switch (ctx->pc) {
        case 0x2865e0u: goto label_2865e0;
        case 0x2865e4u: goto label_2865e4;
        case 0x2865e8u: goto label_2865e8;
        case 0x2865ecu: goto label_2865ec;
        case 0x2865f0u: goto label_2865f0;
        case 0x2865f4u: goto label_2865f4;
        case 0x2865f8u: goto label_2865f8;
        case 0x2865fcu: goto label_2865fc;
        case 0x286600u: goto label_286600;
        case 0x286604u: goto label_286604;
        case 0x286608u: goto label_286608;
        case 0x28660cu: goto label_28660c;
        case 0x286610u: goto label_286610;
        case 0x286614u: goto label_286614;
        case 0x286618u: goto label_286618;
        case 0x28661cu: goto label_28661c;
        case 0x286620u: goto label_286620;
        case 0x286624u: goto label_286624;
        case 0x286628u: goto label_286628;
        case 0x28662cu: goto label_28662c;
        case 0x286630u: goto label_286630;
        case 0x286634u: goto label_286634;
        case 0x286638u: goto label_286638;
        case 0x28663cu: goto label_28663c;
        case 0x286640u: goto label_286640;
        case 0x286644u: goto label_286644;
        case 0x286648u: goto label_286648;
        case 0x28664cu: goto label_28664c;
        case 0x286650u: goto label_286650;
        case 0x286654u: goto label_286654;
        case 0x286658u: goto label_286658;
        case 0x28665cu: goto label_28665c;
        case 0x286660u: goto label_286660;
        case 0x286664u: goto label_286664;
        case 0x286668u: goto label_286668;
        case 0x28666cu: goto label_28666c;
        case 0x286670u: goto label_286670;
        case 0x286674u: goto label_286674;
        case 0x286678u: goto label_286678;
        case 0x28667cu: goto label_28667c;
        case 0x286680u: goto label_286680;
        case 0x286684u: goto label_286684;
        case 0x286688u: goto label_286688;
        case 0x28668cu: goto label_28668c;
        case 0x286690u: goto label_286690;
        case 0x286694u: goto label_286694;
        case 0x286698u: goto label_286698;
        case 0x28669cu: goto label_28669c;
        case 0x2866a0u: goto label_2866a0;
        case 0x2866a4u: goto label_2866a4;
        case 0x2866a8u: goto label_2866a8;
        case 0x2866acu: goto label_2866ac;
        case 0x2866b0u: goto label_2866b0;
        case 0x2866b4u: goto label_2866b4;
        case 0x2866b8u: goto label_2866b8;
        case 0x2866bcu: goto label_2866bc;
        case 0x2866c0u: goto label_2866c0;
        case 0x2866c4u: goto label_2866c4;
        case 0x2866c8u: goto label_2866c8;
        case 0x2866ccu: goto label_2866cc;
        case 0x2866d0u: goto label_2866d0;
        case 0x2866d4u: goto label_2866d4;
        case 0x2866d8u: goto label_2866d8;
        case 0x2866dcu: goto label_2866dc;
        case 0x2866e0u: goto label_2866e0;
        case 0x2866e4u: goto label_2866e4;
        case 0x2866e8u: goto label_2866e8;
        case 0x2866ecu: goto label_2866ec;
        case 0x2866f0u: goto label_2866f0;
        case 0x2866f4u: goto label_2866f4;
        case 0x2866f8u: goto label_2866f8;
        case 0x2866fcu: goto label_2866fc;
        case 0x286700u: goto label_286700;
        case 0x286704u: goto label_286704;
        case 0x286708u: goto label_286708;
        case 0x28670cu: goto label_28670c;
        case 0x286710u: goto label_286710;
        case 0x286714u: goto label_286714;
        case 0x286718u: goto label_286718;
        case 0x28671cu: goto label_28671c;
        case 0x286720u: goto label_286720;
        case 0x286724u: goto label_286724;
        case 0x286728u: goto label_286728;
        case 0x28672cu: goto label_28672c;
        case 0x286730u: goto label_286730;
        case 0x286734u: goto label_286734;
        case 0x286738u: goto label_286738;
        case 0x28673cu: goto label_28673c;
        case 0x286740u: goto label_286740;
        case 0x286744u: goto label_286744;
        case 0x286748u: goto label_286748;
        case 0x28674cu: goto label_28674c;
        case 0x286750u: goto label_286750;
        case 0x286754u: goto label_286754;
        case 0x286758u: goto label_286758;
        case 0x28675cu: goto label_28675c;
        case 0x286760u: goto label_286760;
        case 0x286764u: goto label_286764;
        case 0x286768u: goto label_286768;
        case 0x28676cu: goto label_28676c;
        case 0x286770u: goto label_286770;
        case 0x286774u: goto label_286774;
        case 0x286778u: goto label_286778;
        case 0x28677cu: goto label_28677c;
        case 0x286780u: goto label_286780;
        case 0x286784u: goto label_286784;
        case 0x286788u: goto label_286788;
        case 0x28678cu: goto label_28678c;
        case 0x286790u: goto label_286790;
        case 0x286794u: goto label_286794;
        case 0x286798u: goto label_286798;
        case 0x28679cu: goto label_28679c;
        case 0x2867a0u: goto label_2867a0;
        case 0x2867a4u: goto label_2867a4;
        case 0x2867a8u: goto label_2867a8;
        case 0x2867acu: goto label_2867ac;
        case 0x2867b0u: goto label_2867b0;
        case 0x2867b4u: goto label_2867b4;
        case 0x2867b8u: goto label_2867b8;
        case 0x2867bcu: goto label_2867bc;
        default: break;
    }

    ctx->pc = 0x2865e0u;

label_2865e0:
    // 0x2865e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2865e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2865e4:
    // 0x2865e4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2865e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2865e8:
    // 0x2865e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2865e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2865ec:
    // 0x2865ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2865ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2865f0:
    // 0x2865f0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2865f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2865f4:
    // 0x2865f4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2865f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2865f8:
    // 0x2865f8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2865f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_2865fc:
    // 0x2865fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2865fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_286600:
    // 0x286600: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x286600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_286604:
    // 0x286604: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_286608:
    if (ctx->pc == 0x286608u) {
        ctx->pc = 0x286608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286604u;
        // 0x286608: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28660Cu;
        goto label_28660c;
    }
    ctx->pc = 0x286604u;
    {
        const bool branch_taken_0x286604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x286608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286604u;
        // 0x286608: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286604) {
            ctx->pc = 0x286628u;
            goto label_286628;
        }
    }
    ctx->pc = 0x28660Cu;
label_28660c:
    // 0x28660c: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28660cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_286610:
    // 0x286610: 0x8c6210bc  lw          $v0, 0x10BC($v1)
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4284)));
label_286614:
    // 0x286614: 0x40f809  jalr        $v0
label_286618:
    if (ctx->pc == 0x286618u) {
        ctx->pc = 0x28661Cu;
        goto label_28661c;
    }
    ctx->pc = 0x286614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28661Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286614u, 0x28661Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28661Cu;
label_28661c:
    // 0x28661c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28661cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_286620:
    // 0x286620: 0x10000002  b           . + 4 + (0x2 << 2)
label_286624:
    if (ctx->pc == 0x286624u) {
        ctx->pc = 0x286624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286620u;
        // 0x286624: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286628u;
        goto label_286628;
    }
    ctx->pc = 0x286620u;
    {
        const bool branch_taken_0x286620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286620u;
        // 0x286624: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286620) {
            ctx->pc = 0x28662Cu;
            goto label_28662c;
        }
    }
    ctx->pc = 0x286628u;
label_286628:
    // 0x286628: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x286628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_28662c:
    // 0x28662c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28662cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286630:
    // 0x286630: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x286630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_286634:
    // 0x286634: 0xc092782  jal         func_249E08
label_286638:
    if (ctx->pc == 0x286638u) {
        ctx->pc = 0x286638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286634u;
        // 0x286638: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28663Cu;
        goto label_28663c;
    }
    ctx->pc = 0x286634u;
    SET_GPR_U32(ctx, 31, 0x28663Cu);
    ctx->pc = 0x286638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286634u;
    // 0x286638: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x286634u, 0x28663Cu)) {
        return;
    }
    ctx->pc = 0x28663Cu;
label_28663c:
    // 0x28663c: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_286640:
    if (ctx->pc == 0x286640u) {
        ctx->pc = 0x286640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28663Cu;
        // 0x286640: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286644u;
        goto label_286644;
    }
    ctx->pc = 0x28663Cu;
    {
        const bool branch_taken_0x28663c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28663Cu;
        // 0x286640: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28663c) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286644u;
label_286644:
    // 0x286644: 0x18c00006  blez        $a2, . + 4 + (0x6 << 2)
label_286648:
    if (ctx->pc == 0x286648u) {
        ctx->pc = 0x286648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286644u;
        // 0x286648: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28664Cu;
        goto label_28664c;
    }
    ctx->pc = 0x286644u;
    {
        const bool branch_taken_0x286644 = (GPR_S64(ctx, 6) <= 0);
        ctx->pc = 0x286648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286644u;
        // 0x286648: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286644) {
            ctx->pc = 0x286660u;
            goto label_286660;
        }
    }
    ctx->pc = 0x28664Cu;
label_28664c:
    // 0x28664c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x28664cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_286650:
    // 0x286650: 0xc0935aa  jal         func_24D6A8
label_286654:
    if (ctx->pc == 0x286654u) {
        ctx->pc = 0x286654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286650u;
        // 0x286654: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286658u;
        goto label_286658;
    }
    ctx->pc = 0x286650u;
    SET_GPR_U32(ctx, 31, 0x286658u);
    ctx->pc = 0x286654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286650u;
    // 0x286654: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x286650u, 0x286658u)) {
        return;
    }
    ctx->pc = 0x286658u;
label_286658:
    // 0x286658: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_28665c:
    if (ctx->pc == 0x28665Cu) {
        ctx->pc = 0x28665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286658u;
        // 0x28665c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286660u;
        goto label_286660;
    }
    ctx->pc = 0x286658u;
    {
        const bool branch_taken_0x286658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286658u;
        // 0x28665c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286658) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286660u;
label_286660:
    // 0x286660: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x286660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_286664:
    // 0x286664: 0xc092782  jal         func_249E08
label_286668:
    if (ctx->pc == 0x286668u) {
        ctx->pc = 0x286668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286664u;
        // 0x286668: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28666Cu;
        goto label_28666c;
    }
    ctx->pc = 0x286664u;
    SET_GPR_U32(ctx, 31, 0x28666Cu);
    ctx->pc = 0x286668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286664u;
    // 0x286668: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x286664u, 0x28666Cu)) {
        return;
    }
    ctx->pc = 0x28666Cu;
label_28666c:
    // 0x28666c: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
label_286670:
    if (ctx->pc == 0x286670u) {
        ctx->pc = 0x286670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28666Cu;
        // 0x286670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286674u;
        goto label_286674;
    }
    ctx->pc = 0x28666Cu;
    {
        const bool branch_taken_0x28666c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28666Cu;
        // 0x286670: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28666c) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286674u;
label_286674:
    // 0x286674: 0x26250008  addiu       $a1, $s1, 0x8
    ctx->pc = 0x286674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_286678:
    // 0x286678: 0xc092782  jal         func_249E08
label_28667c:
    if (ctx->pc == 0x28667Cu) {
        ctx->pc = 0x28667Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286678u;
        // 0x28667c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286680u;
        goto label_286680;
    }
    ctx->pc = 0x286678u;
    SET_GPR_U32(ctx, 31, 0x286680u);
    ctx->pc = 0x28667Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286678u;
    // 0x28667c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x286678u, 0x286680u)) {
        return;
    }
    ctx->pc = 0x286680u;
label_286680:
    // 0x286680: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_286684:
    if (ctx->pc == 0x286684u) {
        ctx->pc = 0x286684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286680u;
        // 0x286684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286688u;
        goto label_286688;
    }
    ctx->pc = 0x286680u;
    {
        const bool branch_taken_0x286680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286680u;
        // 0x286684: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286680) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286688u;
label_286688:
    // 0x286688: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x286688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_28668c:
    // 0x28668c: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_286690:
    if (ctx->pc == 0x286690u) {
        ctx->pc = 0x286690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28668Cu;
        // 0x286690: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x286694u;
        goto label_286694;
    }
    ctx->pc = 0x28668Cu;
    {
        const bool branch_taken_0x28668c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x286690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28668Cu;
        // 0x286690: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28668c) {
            ctx->pc = 0x2866DCu;
            goto label_2866dc;
        }
    }
    ctx->pc = 0x286694u;
label_286694:
    // 0x286694: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_286698:
    if (ctx->pc == 0x286698u) {
        ctx->pc = 0x286698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286694u;
        // 0x286698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28669Cu;
        goto label_28669c;
    }
    ctx->pc = 0x286694u;
    {
        const bool branch_taken_0x286694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286694u;
        // 0x286698: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286694) {
            ctx->pc = 0x2866ACu;
            goto label_2866ac;
        }
    }
    ctx->pc = 0x28669Cu;
label_28669c:
    // 0x28669c: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_2866a0:
    if (ctx->pc == 0x2866A0u) {
        ctx->pc = 0x2866A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28669Cu;
        // 0x2866a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866A4u;
        goto label_2866a4;
    }
    ctx->pc = 0x28669Cu;
    {
        const bool branch_taken_0x28669c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2866A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28669Cu;
        // 0x2866a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28669c) {
            ctx->pc = 0x2866C0u;
            goto label_2866c0;
        }
    }
    ctx->pc = 0x2866A4u;
label_2866a4:
    // 0x2866a4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2866a8:
    if (ctx->pc == 0x2866A8u) {
        ctx->pc = 0x2866A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866A4u;
        // 0x2866a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866ACu;
        goto label_2866ac;
    }
    ctx->pc = 0x2866A4u;
    {
        const bool branch_taken_0x2866a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2866A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866A4u;
        // 0x2866a8: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866a4) {
            ctx->pc = 0x2867A0u;
            goto label_2867a0;
        }
    }
    ctx->pc = 0x2866ACu;
label_2866ac:
    // 0x2866ac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2866acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2866b0:
    // 0x2866b0: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_2866b4:
    if (ctx->pc == 0x2866B4u) {
        ctx->pc = 0x2866B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866B0u;
        // 0x2866b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866B8u;
        goto label_2866b8;
    }
    ctx->pc = 0x2866B0u;
    {
        const bool branch_taken_0x2866b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2866B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866B0u;
        // 0x2866b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866b0) {
            ctx->pc = 0x286700u;
            goto label_286700;
        }
    }
    ctx->pc = 0x2866B8u;
label_2866b8:
    // 0x2866b8: 0x10000039  b           . + 4 + (0x39 << 2)
label_2866bc:
    if (ctx->pc == 0x2866BCu) {
        ctx->pc = 0x2866BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866B8u;
        // 0x2866bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866C0u;
        goto label_2866c0;
    }
    ctx->pc = 0x2866B8u;
    {
        const bool branch_taken_0x2866b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2866BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866B8u;
        // 0x2866bc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866b8) {
            ctx->pc = 0x2867A0u;
            goto label_2867a0;
        }
    }
    ctx->pc = 0x2866C0u;
label_2866c0:
    // 0x2866c0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2866c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2866c4:
    // 0x2866c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2866c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2866c8:
    // 0x2866c8: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2866c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2866cc:
    // 0x2866cc: 0xc092782  jal         func_249E08
label_2866d0:
    if (ctx->pc == 0x2866D0u) {
        ctx->pc = 0x2866D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866CCu;
        // 0x2866d0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866D4u;
        goto label_2866d4;
    }
    ctx->pc = 0x2866CCu;
    SET_GPR_U32(ctx, 31, 0x2866D4u);
    ctx->pc = 0x2866D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866CCu;
    // 0x2866d0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2866CCu, 0x2866D4u)) {
        return;
    }
    ctx->pc = 0x2866D4u;
label_2866d4:
    // 0x2866d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_2866d8:
    if (ctx->pc == 0x2866D8u) {
        ctx->pc = 0x2866DCu;
        goto label_2866dc;
    }
    ctx->pc = 0x2866D4u;
    {
        const bool branch_taken_0x2866d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2866d4) {
            ctx->pc = 0x2866F0u;
            goto label_2866f0;
        }
    }
    ctx->pc = 0x2866DCu;
label_2866dc:
    // 0x2866dc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x2866dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2866e0:
    // 0x2866e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2866e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2866e4:
    // 0x2866e4: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x2866e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2866e8:
    // 0x2866e8: 0xc09275c  jal         func_249D70
label_2866ec:
    if (ctx->pc == 0x2866ECu) {
        ctx->pc = 0x2866ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866E8u;
        // 0x2866ec: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866F0u;
        goto label_2866f0;
    }
    ctx->pc = 0x2866E8u;
    SET_GPR_U32(ctx, 31, 0x2866F0u);
    ctx->pc = 0x2866ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2866E8u;
    // 0x2866ec: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249D70u, 0x2866E8u, 0x2866F0u)) {
        return;
    }
    ctx->pc = 0x2866F0u;
label_2866f0:
    // 0x2866f0: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
label_2866f4:
    if (ctx->pc == 0x2866F4u) {
        ctx->pc = 0x2866F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F0u;
        // 0x2866f4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2866F8u;
        goto label_2866f8;
    }
    ctx->pc = 0x2866F0u;
    {
        const bool branch_taken_0x2866f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2866F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F0u;
        // 0x2866f4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866f0) {
            ctx->pc = 0x28679Cu;
            goto label_28679c;
        }
    }
    ctx->pc = 0x2866F8u;
label_2866f8:
    // 0x2866f8: 0x10000028  b           . + 4 + (0x28 << 2)
label_2866fc:
    if (ctx->pc == 0x2866FCu) {
        ctx->pc = 0x2866FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F8u;
        // 0x2866fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286700u;
        goto label_286700;
    }
    ctx->pc = 0x2866F8u;
    {
        const bool branch_taken_0x2866f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2866FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2866F8u;
        // 0x2866fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2866f8) {
            ctx->pc = 0x28679Cu;
            goto label_28679c;
        }
    }
    ctx->pc = 0x286700u;
label_286700:
    // 0x286700: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286704:
    // 0x286704: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x286704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286708:
    // 0x286708: 0x18400023  blez        $v0, . + 4 + (0x23 << 2)
label_28670c:
    if (ctx->pc == 0x28670Cu) {
        ctx->pc = 0x28670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286708u;
        // 0x28670c: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286710u;
        goto label_286710;
    }
    ctx->pc = 0x286708u;
    {
        const bool branch_taken_0x286708 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x28670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286708u;
        // 0x28670c: 0x8e25000c  lw          $a1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286708) {
            ctx->pc = 0x286798u;
            goto label_286798;
        }
    }
    ctx->pc = 0x286710u;
label_286710:
    // 0x286710: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x286710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_286714:
    // 0x286714: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x286714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_286718:
    // 0x286718: 0x24540fc8  addiu       $s4, $v0, 0xFC8
    ctx->pc = 0x286718u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28671c:
    // 0x28671c: 0x0  nop
    ctx->pc = 0x28671cu;
    // NOP
label_286720:
    // 0x286720: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x286720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286724:
    // 0x286724: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_286728:
    if (ctx->pc == 0x286728u) {
        ctx->pc = 0x286728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286724u;
        // 0x286728: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28672Cu;
        goto label_28672c;
    }
    ctx->pc = 0x286724u;
    {
        const bool branch_taken_0x286724 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x286724) {
            ctx->pc = 0x286728u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286724u;
            // 0x286728: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286740u;
            goto label_286740;
        }
    }
    ctx->pc = 0x28672Cu;
label_28672c:
    // 0x28672c: 0x8e8200f4  lw          $v0, 0xF4($s4)
    ctx->pc = 0x28672cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 244)));
label_286730:
    // 0x286730: 0x40f809  jalr        $v0
label_286734:
    if (ctx->pc == 0x286734u) {
        ctx->pc = 0x286738u;
        goto label_286738;
    }
    ctx->pc = 0x286730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286738u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286730u, 0x286738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x286738u;
label_286738:
    // 0x286738: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x286738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28673c:
    // 0x28673c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x28673cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_286740:
    // 0x286740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x286740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_286744:
    // 0x286744: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x286744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_286748:
    // 0x286748: 0xc092782  jal         func_249E08
label_28674c:
    if (ctx->pc == 0x28674Cu) {
        ctx->pc = 0x28674Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286748u;
        // 0x28674c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286750u;
        goto label_286750;
    }
    ctx->pc = 0x286748u;
    SET_GPR_U32(ctx, 31, 0x286750u);
    ctx->pc = 0x28674Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286748u;
    // 0x28674c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x286748u, 0x286750u)) {
        return;
    }
    ctx->pc = 0x286750u;
label_286750:
    // 0x286750: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_286754:
    if (ctx->pc == 0x286754u) {
        ctx->pc = 0x286754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286750u;
        // 0x286754: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286758u;
        goto label_286758;
    }
    ctx->pc = 0x286750u;
    {
        const bool branch_taken_0x286750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286750u;
        // 0x286754: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286750) {
            ctx->pc = 0x286790u;
            goto label_286790;
        }
    }
    ctx->pc = 0x286758u;
label_286758:
    // 0x286758: 0x58c00007  blezl       $a2, . + 4 + (0x7 << 2)
label_28675c:
    if (ctx->pc == 0x28675Cu) {
        ctx->pc = 0x28675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286758u;
        // 0x28675c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286760u;
        goto label_286760;
    }
    ctx->pc = 0x286758u;
    {
        const bool branch_taken_0x286758 = (GPR_S64(ctx, 6) <= 0);
        if (branch_taken_0x286758) {
            ctx->pc = 0x28675Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286758u;
            // 0x28675c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286778u;
            goto label_286778;
        }
    }
    ctx->pc = 0x286760u;
label_286760:
    // 0x286760: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x286760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_286764:
    // 0x286764: 0xc0935aa  jal         func_24D6A8
label_286768:
    if (ctx->pc == 0x286768u) {
        ctx->pc = 0x286768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286764u;
        // 0x286768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28676Cu;
        goto label_28676c;
    }
    ctx->pc = 0x286764u;
    SET_GPR_U32(ctx, 31, 0x28676Cu);
    ctx->pc = 0x286768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286764u;
    // 0x286768: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x286764u, 0x28676Cu)) {
        return;
    }
    ctx->pc = 0x28676Cu;
label_28676c:
    // 0x28676c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_286770:
    if (ctx->pc == 0x286770u) {
        ctx->pc = 0x286770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28676Cu;
        // 0x286770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286774u;
        goto label_286774;
    }
    ctx->pc = 0x28676Cu;
    {
        const bool branch_taken_0x28676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28676Cu;
        // 0x286770: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28676c) {
            ctx->pc = 0x28679Cu;
            goto label_28679c;
        }
    }
    ctx->pc = 0x286774u;
label_286774:
    // 0x286774: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x286774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_286778:
    // 0x286778: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x286778u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28677c:
    // 0x28677c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x28677cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_286780:
    // 0x286780: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_286784:
    if (ctx->pc == 0x286784u) {
        ctx->pc = 0x286784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286780u;
        // 0x286784: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286788u;
        goto label_286788;
    }
    ctx->pc = 0x286780u;
    {
        const bool branch_taken_0x286780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286780u;
        // 0x286784: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286780) {
            ctx->pc = 0x286720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_286720;
        }
    }
    ctx->pc = 0x286788u;
label_286788:
    // 0x286788: 0x10000004  b           . + 4 + (0x4 << 2)
label_28678c:
    if (ctx->pc == 0x28678Cu) {
        ctx->pc = 0x28678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286788u;
        // 0x28678c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286790u;
        goto label_286790;
    }
    ctx->pc = 0x286788u;
    {
        const bool branch_taken_0x286788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28678Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286788u;
        // 0x28678c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286788) {
            ctx->pc = 0x28679Cu;
            goto label_28679c;
        }
    }
    ctx->pc = 0x286790u;
label_286790:
    // 0x286790: 0x10000002  b           . + 4 + (0x2 << 2)
label_286794:
    if (ctx->pc == 0x286794u) {
        ctx->pc = 0x286794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286790u;
        // 0x286794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x286798u;
        goto label_286798;
    }
    ctx->pc = 0x286790u;
    {
        const bool branch_taken_0x286790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286790u;
        // 0x286794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286790) {
            ctx->pc = 0x28679Cu;
            goto label_28679c;
        }
    }
    ctx->pc = 0x286798u;
label_286798:
    // 0x286798: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x286798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28679c:
    // 0x28679c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28679cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2867a0:
    // 0x2867a0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2867a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2867a4:
    // 0x2867a4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2867a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2867a8:
    // 0x2867a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2867a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2867ac:
    // 0x2867ac: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2867acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2867b0:
    // 0x2867b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2867b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2867b4:
    // 0x2867b4: 0x3e00008  jr          $ra
label_2867b8:
    if (ctx->pc == 0x2867B8u) {
        ctx->pc = 0x2867B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867B4u;
        // 0x2867b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2867BCu;
        goto label_2867bc;
    }
    ctx->pc = 0x2867B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2867B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2867B4u;
        // 0x2867b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2867B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2867BCu;
label_2867bc:
    // 0x2867bc: 0x0  nop
    ctx->pc = 0x2867bcu;
    // NOP
    ctx->pc = 0x2867c0u;
}
